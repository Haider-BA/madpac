#include "peano/toolbox/solver/VirtualHierarchicalHRefinement.h"


#include <fstream>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <list>
tarch::logging::Log peano::toolbox::solver::VirtualHierarchicalHRefinement::_log( "peano::toolbox::tests::InterpolationTest" );


peano::toolbox::solver::VirtualHierarchicalHRefinement::VirtualHierarchicalHRefinement(int partitionFactor) :
    _fineGrid(partitionFactor+2),
    _otherFineGrid(partitionFactor+2),
    _partitionFactor(partitionFactor),
    _sizeFineGrid(_fineGrid.size()),
    _h(1.0/(_sizeFineGrid-1.0))
{}


peano::toolbox::stencil::ElementWiseVector peano::toolbox::solver::VirtualHierarchicalHRefinement::computeVirtualHierarchicalHRefinement(
    const peano::toolbox::stencil::ElementWiseVector  in,
    const peano::toolbox::stencil::Stencil            stencil,
    const peano::toolbox::stencil::ElementWiseVector& rhs,
    double                                            relaxationFactor
) {
  //computeVirtualHierarchicalHRefinementwJAC(in, stencil, rhs, relaxationFactor);
  //computeVirtualHierarchicalHRefinementwGS(in, stencil, rhs, relaxationFactor);
  return computeVirtualHierarchicalHRefinement2DColored(in, stencil, rhs, relaxationFactor);
}


//TODO RK: use member partitionfactor for as refinement-parameter
peano::toolbox::solver::HyperCube peano::toolbox::solver::VirtualHierarchicalHRefinement::refineGrid(
    const peano::toolbox::stencil::ElementWiseVector & e, int divisionFactor)
{
  int length = divisionFactor + 2;
  int size = pow(length, DIMENSIONS);
  HyperCube result(length);
  struct timeval t_start;
  struct timeval t_end;

  // first, relatively stupid implementation, nearly all points are calculated more than once
  gettimeofday(&t_start, 0);
  for (int i = 0; i<size; i++) {
      double alpha[DIMENSIONS];
      int num = i;
      for(int j = 0; j < DIMENSIONS; j++) {
        alpha[j] = (num%length) / (length - 1.0);
        num = num / length;
      }

      //double v[(int)pow(2, DIMENSIONS) - 1]; //interpolation values
      double v[(1 << DIMENSIONS) - 1]; //interpolation values
      for(int j = 0; j < e.size()/2; j++) {
        v[j] = (1.0-alpha[0]) * e[j*2] + alpha[0] * e[j*2+1]; //first interpolation step
      }

      int offset = e.size()/2;
      for(int j = 1; j < DIMENSIONS;j++) {
        //for(int k = 0; k<pow(2, DIMENSIONS-j-1);k++){
        for(int k = 0; k< (1 << (DIMENSIONS-j-1));k++){
          //int index = offset - pow(2, DIMENSIONS-j) + k*2;
          int index = offset - (1 << (DIMENSIONS - j)) + k*2;
          v[offset + k] = (1.0-alpha[j]) * v[index] + alpha[j] * v[index+1];
        }
        //offset += pow(2, DIMENSIONS-j-1);
        offset += 1 << (DIMENSIONS-j-1);
      }

      //result[i] = v[(int)pow(2, DIMENSIONS) - 2 ];
      result[i] = v[(1 << DIMENSIONS) - 2 ];
  }
  gettimeofday(&t_end,0);

  logDebug("refineGrid()", "time needed to refine grid" << (long)(t_end.tv_usec - t_start.tv_usec))

  gettimeofday(&t_start,0);

  double alpha[DIMENSIONS];
  double weight;
  for (int i = 0; i < size; i++) {
    int num = i;
    for (int j = 0; j < DIMENSIONS; j++) {
      alpha[j] = (num % length) / (length - 1.0);
      //logDebug("refine", "alpha: " << alpha[j] << "  mycalculation: " << ((i/(int)(pow(length,j)))%length) / (length - 1.0))
      num = num / length;
    }

    result[i] = 0;
    //for (int j = 0; j < pow(2, DIMENSIONS); j++) {
    for (int j = 0; j < TWO_POWER_D; j++) {
      weight = 1;
      for (int d = 0; d < DIMENSIONS; d++) {
        //double factor = ((i/(int)(pow(length,d)))%length) / (length - 1.0);
        //if((j/(int)(pow(2,d)) % 2) == 0){

        if((j & (1 << d)) == 0){
          weight *= (1 - alpha[d]);
        } else {
          weight *= alpha[d];
        }
      }
      result[i] += weight * e[j];
    }
  }
  gettimeofday(&t_end,0);

  logDebug("refinetime", t_end.tv_usec - t_start.tv_usec)


  return result;


}


peano::toolbox::stencil::ElementWiseVector
peano::toolbox::solver::VirtualHierarchicalHRefinement::computeVirtualHierarchicalHRefinementwJAC(
    const peano::toolbox::stencil::ElementWiseVector  in,
    peano::toolbox::stencil::Stencil                  stencil,
    const peano::toolbox::stencil::ElementWiseVector& rhs,
    double                                            relaxationFactor)
{


  _fineGrid = refineGrid(in, _partitionFactor);
  _otherFineGrid = _fineGrid; //needed to copy boundary-values to others grid, they would be uninitialized otherwise
  double h = _h;
  HyperCube fineRhs = refineGrid(rhs*pow(h, DIMENSIONS), _partitionFactor);

  stencil *= pow(h, DIMENSIONS-2);

  HyperCube *readFrom = &_fineGrid;
  HyperCube *writeTo = &_otherFineGrid;

  struct timeval t_start;
  struct timeval t_end;
  int* indices = new int[DIMENSIONS];
  indices[0] = 1;
  int iterationSteps = 150;
  for( int j = 0; j<iterationSteps; j++){ // iterate as long as there is some change
    logDebug("adasdasd", j+1 << " of " << iterationSteps);
    gettimeofday(&t_start, 0);
    int index = 0;
    for(int i = 0; i<DIMENSIONS; i++){
      indices[i] = 1;
      index += tarch::la::aPowI(i, _partitionFactor+2);
    }
    //iterate only over inner vertices, the for-loop after the actual computation computes the next index
    //idea for CUDA: precompute indices for inner vertices, store them in a separate array and iterate over it
   /* while (index < readFrom->elementsCount()) {
      (*writeTo)[index] = (*readFrom)[index] + relaxationFactor * 1/stencil[stencil.size() / 2]
          * (fineRhs[index] - readFrom->applyStencil(index, stencil));
      //logDebug("computethewholething", "index is " << index)
      //compute next index
      for (int d = 0; d<DIMENSIONS; d++){
        if(++indices[d] < _sizeFineGrid - 1){ // one step in direction d
          index += tarch::la::aPowI(d, _sizeFineGrid);
          //logDebug("computethewholething", "recompute:::onestep " << index << "indices[" << d << "]=" << indices[d])
          break;
        }
        if(d == DIMENSIONS -1){ //finished
           //logDebug("computethewholething", "recompute:::finished " << index)
           index = readFrom->elementsCount();
           break;
        }
        indices[d] = 1;
        index = index - tarch::la::aPowI(d, _sizeFineGrid)*(_sizeFineGrid - 3);
        //logDebug("computethewholething", "recompute:::morethanonestep " << index)
      }
    }
    gettimeofday(&t_end, 0);
    double needed_time =(t_end.tv_usec - t_start.tv_usec)/1000 + (t_end.tv_sec - t_start.tv_sec)*1000;
    logDebug("calculatethething", "time neede for (intelligent)" << ": " << needed_time)
*/
    gettimeofday(&t_start, 0);

    //iterate over all vertices and check if they are on the border
    for (int index = 0; index < readFrom->elementsCount(); index++) {
      if (!readFrom->isBorder(index)){
          (*writeTo)[index] = (*readFrom)[index] + relaxationFactor * 1/stencil[stencil.size() / 2]
                     * (fineRhs[index] - readFrom->applyStencil(index, stencil));
      }
    }
    gettimeofday(&t_end, 0);
    double needed_time =(t_end.tv_usec - t_start.tv_usec)/1000 + (t_end.tv_sec - t_start.tv_sec)*1000;
    logDebug("calculatethething", "time neede for (bordertesting)" << ": " << needed_time)
    needed_time +=0; //needed, otherwise this variable would not be used in release mode

    HyperCube *buf = readFrom;
    readFrom = writeTo;
    writeTo = buf;
    std::ostringstream s;
    _fineGrid  = *readFrom;
    s <<"testimage_wJAC_" << DIMENSIONS << "D" << j << ".vtk";
    visualize(s.str());
  }

  _fineGrid = *readFrom;

  calculateCoarserReturnValues();

  return in;
}



peano::toolbox::stencil::ElementWiseVector peano::toolbox::solver::VirtualHierarchicalHRefinement::calculateCoarserReturnValues()
{
  peano::toolbox::stencil::ElementWiseVector result;
  for(int i = 0; i<TWO_POWER_D; i++){ // initialize result
    result[i] = 0;
  }

  int offset[TWO_POWER_D];
  for(int i = 0; i<TWO_POWER_D; i++){
    offset[i] = 0;
    for(int j = 0; j<DIMENSIONS; j++){
      if((i & (1<<j)) != 0){
        offset[i] += tarch::la::aPowI(j, _fineGrid.size());
      }
    }
    logDebug("calculateCoarserReturnValues()", "offset[" << i << "]: " << offset[i] << " (size:  " << _fineGrid.size() << ")")
  }



  for (int cell = 0; cell<_fineGrid.size(); cell++){ // for all cells (they are identified by their "left" corner)
    if(_fineGrid.isRightBorder(cell))
      continue;
    for(int coarseVertexNumer = 0; coarseVertexNumer<TWO_POWER_D; coarseVertexNumer++){ //for all vertices of the coarse grid
      for(int fineVertexNumber = 0; fineVertexNumber<TWO_POWER_D; fineVertexNumber++){ //for all vertices of the processed cell
        int cell_index = cell + offset[fineVertexNumber];
        double integral = 0;
        for(int direction = 0; direction<DIMENSIONS; direction++){ // in every direction
            integral += calculatePartialIntegral(direction, fineVertexNumber, coarseVertexNumer);
        }
        result[coarseVertexNumer] += _fineGrid[cell_index] * integral;
      }
    }
  }
  return result;
}


double peano::toolbox::solver::VirtualHierarchicalHRefinement::calculatePartialIntegral(int direction, int testFunctionSmallIndex, int testFunctionCoarseIndex)
{
  using namespace std;
  cout << "dir: " << direction << "  smallIndex: " << testFunctionSmallIndex << " indexCoarse: " <<  testFunctionCoarseIndex << " : ";
  double result = 1.0;
  for(int dir = 0; dir<DIMENSIONS; dir++){
    int testPattern = 1 << (DIMENSIONS - 1 - dir);
    //cout << " testpattern " << testPattern;
    if(DIMENSIONS - 1 - dir == direction){ //differetiate
      if(((testPattern & testFunctionSmallIndex) != 0) ^ ((testPattern & testFunctionCoarseIndex) != 0)){
        result *= -1;
        cout << "(-1)";
      }
    } else {
      if((testPattern & testFunctionSmallIndex) == 0){     // small testfunction in direction dir is (1-x/h)
        if((testPattern & testFunctionCoarseIndex) == 0){    // large testfunction in direction dir is (1-x)
          result *= _h * (0.5 - _h/6); // == h/2 - (h^2)/6
          cout << "(h/2 - (h^2)/6)";
        } else{                                             // large testfunction in direction dir is (x)
          result *= _h * _h / 6;       // == (h^2)/6
          cout << "((h^2)/6)";
        }
      } else{                                              // small testfunction in direction dir is (x/h)
        if((testPattern & testFunctionCoarseIndex) == 0){    // large testfunction in direction dir is (1-x)
          result *= _h * (0.5 - _h/3); // == h/2 - h^2/3
          cout << "(h/2 - (h^2)/3)";
        } else{                                             // large testfunction in direction dir is (x)
          result *= _h * _h / 3;       // == h^2/3
          cout << "((h^2)/3)";
        }
      }
    }
  }
  cout << endl;
  return result;
}


void peano::toolbox::solver::VirtualHierarchicalHRefinement::visualize(const std::string & identifier)
{
  logDebug("visualize()", "trying to visualize ")
  if(!(DIMENSIONS == 2 || DIMENSIONS == 3)){
    logDebug("visualize()", "Visualization is only possible for 2d or 3d")
    return;
  }
  std::ofstream out;
  out.open( identifier.c_str() );
  if(out.fail() || !out.is_open()){
    logDebug("visualize()", "error opening file")
  }

  out << "# vtk DataFile Version 2.0" << std::endl;
  out << "Volume example" << std::endl;
  out << "ASCII" << std::endl;
  out << "DATASET STRUCTURED_POINTS" << std::endl;
  out << "DIMENSIONS " << _sizeFineGrid << " " << _sizeFineGrid << " ";
  if(DIMENSIONS == 2){
    out << "1";
  } else {
    out << _sizeFineGrid;
  }
  out << std::endl;
  out << "ASPECT_RATIO 1 1 1" << std::endl;
  out << "ORIGIN 0 0 0" << std::endl;
  out << "POINT_DATA " << _fineGrid.elementsCount() << std::endl;
  out << "SCALARS volume_scalars double 1" << std::endl;
  out << "LOOKUP_TABLE default" << std::endl;

  //tarch::plotter::griddata::unstructured::vtk::VTKTextFileWriter writer;
  //tarch::plotter::griddata::Writer::VertexDataWriter* vertexWriter = writer.createVertexDataWriter(identifier, 1);
  out << std::setprecision(5);
  for (int i = 0; i<_fineGrid.elementsCount(); i++){
    if( i % _sizeFineGrid == 0)
      out << std::endl;
    out << _fineGrid[i] << " ";
    //vertexWriter->plotVertex(i, _fineGrid[i]);
    //writer.pl
  }
  out << std::endl;
  //vertexWriter->close();
}

peano::toolbox::stencil::ElementWiseVector
peano::toolbox::solver::VirtualHierarchicalHRefinement::computeVirtualHierarchicalHRefinement2DColored(
    const peano::toolbox::stencil::ElementWiseVector in,
    peano::toolbox::stencil::Stencil stencil,
    const peano::toolbox::stencil::ElementWiseVector &rhs,
    double relaxationFactor)
{
    _fineGrid = refineGrid(in, _partitionFactor);
    double h = 1.0/(_sizeFineGrid-1.0);
    HyperCube fineRhs = refineGrid(rhs, _partitionFactor);
    stencil *= pow(h, DIMENSIONS-2);
    std::vector<std::vector<int> > colors = _fineGrid.getColorIndices();
    assertion(colors.size() == TWO_POWER_D);
    int iterationSteps = 150;
    struct timeval t_start;
    struct timeval t_end;

    for( int j = 0; j<iterationSteps; j++){ // iterate as long as there is some change
      gettimeofday(&t_start, 0);
      //iterate over all colors
      for (unsigned int color = 0; color < colors.size(); color++) {
          //this inner loop can be parallelized, as we do not write to memory locations we read from and vice versa
          for(unsigned int i = 0; i < colors[color].size(); i++){
              _fineGrid[colors[color][i]] = _fineGrid[colors[color][i]] + relaxationFactor * 1/stencil[stencil.size() / 2]
                       * (fineRhs[colors[color][i]] - _fineGrid.applyStencil(colors[color][i], stencil));
          }
      }
      gettimeofday(&t_end, 0);
      double needed_time =(t_end.tv_usec - t_start.tv_usec)/1000 + (t_end.tv_sec - t_start.tv_sec)*1000;
      logDebug("calculatethething", "time neede for (bordertesting)" << ": " << needed_time)
      needed_time +=0; //needed, otherwise this variable would not be used in release mode

      std::ostringstream s;
      s <<"testimage_w2DColored_" << DIMENSIONS << "D" << j << ".vtk";
      visualize(s.str());
    }
    return in;
}

peano::toolbox::stencil::ElementWiseVector
    peano::toolbox::solver::VirtualHierarchicalHRefinement::computeVirtualHierarchicalHRefinementwGS(
        const peano::toolbox::stencil::ElementWiseVector in,
        peano::toolbox::stencil::Stencil stencil,
        const peano::toolbox::stencil::ElementWiseVector &rhs,
        double relaxationFactor)
{
    _fineGrid = refineGrid(in, _partitionFactor);

    double h = 1.0/(_sizeFineGrid-1.0);

    HyperCube fineRhs = refineGrid(rhs, _partitionFactor);

    stencil *= pow(h, DIMENSIONS-2);

    struct timeval t_start;
    struct timeval t_end;
    int iterationSteps = 150;
    for( int j = 0; j<iterationSteps; j++){ // iterate as long as there is some change
      gettimeofday(&t_start, 0);
      //iterate over all vertices and check if they are at the border
      for (int index = 0; index < _fineGrid.elementsCount(); index++) {
        if (!_fineGrid.isBorder(index)){
            _fineGrid[index] = _fineGrid[index] + relaxationFactor * 1/stencil[stencil.size() / 2]
                       * (fineRhs[index] - _fineGrid.applyStencil(index, stencil));
        }
      }
      gettimeofday(&t_end, 0);
      double needed_time = (t_end.tv_usec - t_start.tv_usec)/1000 + (t_end.tv_sec - t_start.tv_sec)*1000;
      logDebug("calculatethething", "time neede for (bordertesting)" << ": " << needed_time)
      needed_time +=0; //needed, otherwise this variable would not be used in release mode

      std::ostringstream s;
      s <<"testimage_wGS_" << DIMENSIONS << "D" << j << ".vtk";
      visualize(s.str());
    }
    calculateCoarserReturnValues();

    return in;
}
