#include "CsvReader.h"

#include <string>
#include <vector>
#include <dirent.h>

tarch::logging::Log peano::applications::shallowwater::utils::CsvReader::_log( "peano::applications::shallowwater::utils::CsvReader" );

peano::applications::shallowwater::utils::CsvReader::CsvReader(){
}

peano::applications::shallowwater::utils::CsvReader::~CsvReader() {
}

void peano::applications::shallowwater::utils::CsvReader::readCsvFiles(std::string bathymetry_directory_name, std::string displacement_directory_name, double displacement_zero_lon, double displacement_zero_lat){

  double displacement_conv_dx = 113.3 * cos(0.01745 * displacement_zero_lat);
  double displacement_conv_dy = 113.3;

  /*
   * Gnu C Library used:
   * http://www.gnu.org/software/libc/manual/html_node/Simple-Directory-Lister-Mark-II.html#Simple-Directory-Lister-Mark-II
   */
  struct dirent **eps;
  int n;
  std::string filename;

  n = scandir(bathymetry_directory_name.data(), &eps, 0, alphasort);
  if (n >= 0) {
    for (int cnt = 0; cnt < n; ++cnt) {
      filename = (eps[cnt]->d_name);
      if (filename.compare(".") != 0 && filename.compare("..")) {
        readBathymetryFile(bathymetry_directory_name + filename);
      }
    }

  }
    else
      logError("readCsvFiles()", "Couldn't open the directory" << bathymetry_directory_name);

  n = scandir(displacement_directory_name.data(), &eps, 0, alphasort);
  if (n >= 0) {
    for (int cnt = 0; cnt < n; ++cnt) {
      filename = (eps[cnt]->d_name);
      if (filename.compare(".") != 0 && filename.compare("..")) {
        readDisplacementFile(displacement_directory_name + filename, displacement_zero_lon, displacement_zero_lat, displacement_conv_dx, displacement_conv_dy);
      }
    }

  }
    else
      logError("readCsvFiles()", "Couldn't open the directory" << displacement_directory_name);
  logInfo("readCsvFiles()", "done");
}



void peano::applications::shallowwater::utils::CsvReader::createGrid(double zero_lon, double zero_lat, double length, int size) {
  _grid_zero_lon = zero_lon;
  _grid_zero_lat = zero_lat;
  _grid_legth = length;
  _grid_size = size;

  _grid.resize(_grid_size*_grid_size);
  for (unsigned int i = 0; i < _grid.size(); i++) {
    _grid[i].resize(2);
    _grid[i][0] = 0.;
    _grid[i][1] = 0.;
  }

  logInfo("createGrid()", "input grid generated");
}



void peano::applications::shallowwater::utils::CsvReader::readBathymetryFile(const std::string bathymetry_file_name) {
  /*
   * Bathymetry
   */
  // Bathymetry Output
  short int bathymetry_file_header_size = 0;
  strtk::token_grid::options bathymetry_options;
  bathymetry_options.column_delimiters = ",";

  strtk::token_grid bathymetry_grid(bathymetry_file_name, bathymetry_options);
  // for each row r, for each column c
  for (std::size_t r = bathymetry_file_header_size; r < bathymetry_grid.row_count(); ++r)
  {
     strtk::token_grid::row_type row = bathymetry_grid.row(r);
  }

  //pass bathymetry data
  _bathymetry_deg = std::vector<double>((bathymetry_grid.row_count() - bathymetry_file_header_size) * 3);

  for (unsigned int r = 0; r < _bathymetry_deg.size()/3; r++) {
    int r_geofil = r + bathymetry_file_header_size;
    for (int c = 0; c < 3; c++) {
      _bathymetry_deg[r * 3 + c] = atof(bathymetry_grid.get<std::string>(r_geofil,c).data());
    }
  }

  setBathymetryValues();

  logInfo ( "readBathymetryFile()", "read csv-file "<< bathymetry_file_name);
}



void peano::applications::shallowwater::utils::CsvReader::readDisplacementFile(const std::string displacement_file_name, const double &displacement_zero_lon,
                                                                               const double &displacement_zero_lat, const double &displacement_conv_dx, const double &displacement_conv_dy) {
  /*
   * Displacement
   */
  //Coulomb Output
  short int displacement_file_header_size = 0;
  strtk::token_grid::options displacement_options;
  displacement_options.column_delimiters = ",";

  strtk::token_grid displacement_grid(displacement_file_name, displacement_options);

  // for each row r, for each column c
  for (std::size_t r = displacement_file_header_size; r < displacement_grid.row_count(); ++r) {
     strtk::token_grid::row_type row = displacement_grid.row(r);
  }

  // convert km to deg
  _displacement_deg = std::vector<double>((displacement_grid.row_count() - displacement_file_header_size) * 3);
  for (unsigned int r = 0; r < _displacement_deg.size()/3; r++) {
    int r_disfil = r + displacement_file_header_size;
    // convert x-direction
    _displacement_deg[r * 3 + 0] = displacement_zero_lon;
    _displacement_deg[r * 3 + 0] +=  atof(displacement_grid.get<std::string>(r_disfil,0).data()) / displacement_conv_dx;

    //convert y direction
    _displacement_deg[r * 3 + 1] = displacement_zero_lat;
    _displacement_deg[r * 3 + 1] +=  atof(displacement_grid.get<std::string>(r_disfil,1).data()) / displacement_conv_dy;

    //pass vertical displacement
    _displacement_deg[r * 3 + 2] = atof(displacement_grid.get<std::string>(r_disfil,2).data());
  }


  setDisplacementValues();
  logInfo ( "readDisplacementFile()", "read and converted csv-file " << displacement_file_name);
}



void peano::applications::shallowwater::utils::CsvReader::setBathymetryValues() {
  int temp_row = -1;
  int temp_column = -1;

  //set bathymetry values
  for (unsigned int r = 0; r < _bathymetry_deg.size()/3; r++) {
    getGridPosition(r, _bathymetry_deg, temp_row, temp_column);

    if(
      temp_row >= 0 && temp_row < _grid_size &&
      temp_column >= 0 && temp_column < _grid_size
    ) {
      //TODO: overwrite with closer values only
      _grid[temp_row * _grid_size + temp_column][0] = _bathymetry_deg[r * 3 + 2];
    }
  }
}

void peano::applications::shallowwater::utils::CsvReader::setDisplacementValues() {
  int temp_row = -1;
  int temp_column = -1;

  //set displacement values
  for(unsigned int r = 0; r < _displacement_deg.size()/3; r++) {
    getGridPosition(r, _displacement_deg, temp_row, temp_column);

    if(
      temp_row >= 0 && temp_row < _grid_size &&
      temp_column >= 0 && temp_column < _grid_size
    ) {
      //TODO: overwrite with closer values only
      _grid[temp_row * _grid_size + temp_column][1] = _displacement_deg[r*3 + 2];
    }
  }
}



void peano::applications::shallowwater::utils::CsvReader::getGridPosition(const int &r, const std::vector<double> &inputGrid, int &row, int &column) {

  if( _grid_zero_lon < inputGrid[r * 3 + 0])
    row = (int) ((inputGrid[r * 3 + 0] - _grid_zero_lon) / (_grid_legth/_grid_size) + .5);
  else { //jump 180 east -> 180 west; +180 -> -180
    row = (int) ((180 - _grid_zero_lon + 180 + inputGrid[r * 3 + 0]) / (_grid_legth/_grid_size) + .5);
  }

  if( _grid_zero_lat < inputGrid[r * 3 + 1])
    column = (int) ((inputGrid[r * 3 + 1] - _grid_zero_lat) /  (_grid_legth/_grid_size) + .5);
  else { //jump 90 north -> 90 south; + 90 -> -90
    column = (int) ((90 - _grid_zero_lat + 90 + inputGrid[r * 3 + 1]) /  (_grid_legth/_grid_size) + .5);
  }
}



double peano::applications::shallowwater::utils::CsvReader::getBathymetryValue(double lon, double lat) {
  double value = 0.;
  int temp_row = (int) ((lon - _grid_zero_lon) /  (_grid_legth/_grid_size) + .5);
  int temp_column = (int) ((lat - _grid_zero_lat) /  (_grid_legth/_grid_size) + .5);
  if(
      temp_row >= 0 && temp_row < _grid_size &&
      temp_column >= 0 && temp_column < _grid_size
  ) {
    value =_grid[temp_row * _grid_size + temp_column][0];
  }
  else {
    //TODO: Error Message
  }
  return value;
}



double peano::applications::shallowwater::utils::CsvReader::getDisplacementValue(double lon, double lat) {
  double value = 0.;
  int temp_row = (int) ((lon - _grid_zero_lon) /  (_grid_legth/_grid_size) + .5);
  int temp_column = (int) ((lat - _grid_zero_lat) /  (_grid_legth/_grid_size) + .5);
  if(
      temp_row >= 0 && temp_row < _grid_size &&
      temp_column >= 0 && temp_column < _grid_size
  ) {
    value =_grid[temp_row * _grid_size + temp_column][1];
  }
  else {
    //TODO: Error Message
  }
  return value;
}
