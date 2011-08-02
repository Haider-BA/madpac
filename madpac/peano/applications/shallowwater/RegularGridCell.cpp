#include "peano/applications/shallowwater/RegularGridCell.h"


peano::applications::shallowwater::RegularGridCell::RegularGridCell():
  Base() { 
  // @todo Insert your code here
}


peano::applications::shallowwater::RegularGridCell::RegularGridCell(const Base::PersistentCell& argument):
  Base(argument) {
  // @todo Insert your code here
}

void peano::applications::shallowwater::RegularGridCell::init(double bathymetry_value, double displacement_value) {
  //avoid wetting/drying (see RegularGridVertex.h, [4], chapter 4.1)
  if(bathymetry_value < 0) {
    _cellData.setHeightSeabed(bathymetry_value + displacement_value - 5);
    _cellData.setHeightWater(-bathymetry_value + 5);
  }
  else {
    _cellData.setHeightSeabed(bathymetry_value + displacement_value + 5);
    _cellData.setHeightWater(0.);
  }

  _cellData.setMomentumX(0.);
  _cellData.setMomentumY(0.);


}

void peano::applications::shallowwater::RegularGridCell::updateVerticesWithCellData(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices) {
   RegularGridVertex::updateWithCellData(_cellData.getHeightSeabed(), _cellData.getHeightWater(), _cellData.getMomentumX(), _cellData.getMomentumY(), enumerator, vertices);
}

void peano::applications::shallowwater::RegularGridCell::updateCellWithFluxes(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const double maxSpeedX, const double maxSpeedY) {
  //(stability <-> courant number, see RegularGridVertex.h, [4], chapter 3.4)
  //TODO: 2D
  double deltaTdivDeltaX = .5 / maxSpeedX;

   _cellData.setHeightWater( _cellData.getHeightWater() - deltaTdivDeltaX*RegularGridVertex::getHeightWaterUpdate(enumerator, vertices) );
   _cellData.setMomentumX( _cellData.getMomentumX() - deltaTdivDeltaX*RegularGridVertex::getMomentumXUpdate(enumerator, vertices) );
   _cellData.setMomentumY( _cellData.getMomentumY() - deltaTdivDeltaX*RegularGridVertex::getMomentumYUpdate(enumerator, vertices) );
}
