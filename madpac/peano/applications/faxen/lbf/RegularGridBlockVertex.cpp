#include "peano/applications/faxen/lbf/RegularGridBlockVertex.h"
#include "peano/utils/Loop.h"
#include "peano/kernel/gridinterface/Checkpoint.h"
#include "tarch/la/WrappedVector.h"

tarch::logging::Log peano::applications::faxen::lbf::RegularGridBlockVertex::_log("peano::applications::faxen::lbf::RegularGridBlockVertex");

peano::applications::faxen::lbf::RegularGridBlockVertex::RegularGridBlockVertex():
		  Base() {
	Base::_vertexData.setVertexNumber(0);
#ifdef Parallel
	Base::_vertexData.setLbPdfDiff(0.0);
	Base::_vertexData.setLbDensityOnBoundary(0.0);
#endif
}


peano::applications::faxen::lbf::RegularGridBlockVertex::RegularGridBlockVertex(const Base::PersistentVertex& argument):
		  Base(argument) {
	// @todo Insert your code here
}

void peano::applications::faxen::lbf::RegularGridBlockVertex::
setVertexNumber(int vertexNumber){
	Base::_vertexData.setVertexNumber(vertexNumber);
}


tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::lbf::RegularGridBlockVertex::readP0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridBlockVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getP0(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::lbf::RegularGridBlockVertex::readP1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridBlockVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getP1(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::lbf::RegularGridBlockVertex::readF0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridBlockVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getF0(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::lbf::RegularGridBlockVertex::readF1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridBlockVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getF1(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::lbf::RegularGridBlockVertex::readG0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridBlockVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getG0(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::lbf::RegularGridBlockVertex::readG1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridBlockVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getG1(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::lbf::RegularGridBlockVertex::readU0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridBlockVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getU0(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::lbf::RegularGridBlockVertex::readU1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridBlockVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getU1(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::lbf::RegularGridBlockVertex::readU2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridBlockVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getU2(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::lbf::RegularGridBlockVertex::readV0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridBlockVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getV0(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::lbf::RegularGridBlockVertex::readV1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridBlockVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getV1(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::lbf::RegularGridBlockVertex::readV2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridBlockVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getV2(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::lbf::RegularGridBlockVertex::readFlag(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridBlockVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getFlag(); enddforx return result; }






void peano::applications::faxen::lbf::RegularGridBlockVertex::writeP0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setP0( values(xScalar) ); enddforx }
void peano::applications::faxen::lbf::RegularGridBlockVertex::writeP1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setP1( values(xScalar) ); enddforx }
void peano::applications::faxen::lbf::RegularGridBlockVertex::writeF0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setF0( values(xScalar) ); enddforx }
void peano::applications::faxen::lbf::RegularGridBlockVertex::writeF1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setF1( values(xScalar) ); enddforx }
void peano::applications::faxen::lbf::RegularGridBlockVertex::writeG0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setG0( values(xScalar) ); enddforx }
void peano::applications::faxen::lbf::RegularGridBlockVertex::writeG1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setG1( values(xScalar) ); enddforx }
void peano::applications::faxen::lbf::RegularGridBlockVertex::writeU0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setU0( values(xScalar) ); enddforx }
void peano::applications::faxen::lbf::RegularGridBlockVertex::writeU1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setU1( values(xScalar) ); enddforx }
void peano::applications::faxen::lbf::RegularGridBlockVertex::writeU2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setU2( values(xScalar) ); enddforx }
void peano::applications::faxen::lbf::RegularGridBlockVertex::writeV0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setV0( values(xScalar) ); enddforx }
void peano::applications::faxen::lbf::RegularGridBlockVertex::writeV1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setV1( values(xScalar) ); enddforx }
void peano::applications::faxen::lbf::RegularGridBlockVertex::writeV2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setV2( values(xScalar) ); enddforx }
void peano::applications::faxen::lbf::RegularGridBlockVertex::writeFlag(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setFlag( values(xScalar) ); enddforx }

/**
 * Implementation of initialization and proxies for the Faxen component
 */

void peano::applications::faxen::lbf::RegularGridBlockVertex::init(){
	_vertexData.setP0(0.0);
	_vertexData.setP1(0.0);
	_vertexData.setF0(0.0);
	_vertexData.setF1(0.0);
	_vertexData.setG0(0.0);
	_vertexData.setG1(0.0);
	_vertexData.setU0(0.0);
	_vertexData.setU1(0.0);
	_vertexData.setU2(0.0);
	_vertexData.setV0(0.0);
	_vertexData.setV1(0.0);
	_vertexData.setV2(0.0);
	_vertexData.setFlag(0);
}

double peano::applications::faxen::lbf::RegularGridBlockVertex::getP0() const{
	return _vertexData.getP0();
}

void peano::applications::faxen::lbf::RegularGridBlockVertex::setP0(double P0){
	_vertexData.setP0(P0);
}

void peano::applications::faxen::lbf::RegularGridBlockVertex::updateP0(double P_old, double P_new){
	double P0 = _vertexData.getP0();
	P0 += (P_new-P_old)/2;
	_vertexData.setP0(P0);
}

double peano::applications::faxen::lbf::RegularGridBlockVertex::getP1() const{
	return _vertexData.getP1();
}

void peano::applications::faxen::lbf::RegularGridBlockVertex::setP1(double P1){
	_vertexData.setP1(P1);
}

void peano::applications::faxen::lbf::RegularGridBlockVertex::updateP1(double P_old, double P_new){
	double P1 = _vertexData.getP1();
	P1 += (P_new-P_old)/2;
	_vertexData.setP1(P1);
}

double peano::applications::faxen::lbf::RegularGridBlockVertex::getF0() const{
	return _vertexData.getF0();
}

void peano::applications::faxen::lbf::RegularGridBlockVertex::setF0(double F0){
	_vertexData.setF0(F0);
}

double peano::applications::faxen::lbf::RegularGridBlockVertex::getF1() const{
	return _vertexData.getF1();
}

void peano::applications::faxen::lbf::RegularGridBlockVertex::setF1(double F1){
	_vertexData.setF1(F1);
}

double peano::applications::faxen::lbf::RegularGridBlockVertex::getG0() const{
	return _vertexData.getG0();
}

void peano::applications::faxen::lbf::RegularGridBlockVertex::setG0(double G0){
	_vertexData.setG0(G0);
}

double peano::applications::faxen::lbf::RegularGridBlockVertex::getG1() const{
	return _vertexData.getG1();
}

void peano::applications::faxen::lbf::RegularGridBlockVertex::setG1(double G1){
	_vertexData.setG1(G1);
}

double peano::applications::faxen::lbf::RegularGridBlockVertex::getU0() const{
	return _vertexData.getU0();
}

void peano::applications::faxen::lbf::RegularGridBlockVertex::setU0(double U0){
	_vertexData.setU0(U0);
}

void peano::applications::faxen::lbf::RegularGridBlockVertex::updateU0(double U_old, double U_new){
	double U0 = _vertexData.getU0();
	U0 += (U_new-U_old)/4;
	_vertexData.setU0(U0);
}

double peano::applications::faxen::lbf::RegularGridBlockVertex::getU1() const{
	return _vertexData.getU1();
}

void peano::applications::faxen::lbf::RegularGridBlockVertex::setU1(double U1){
	_vertexData.setU1(U1);
}

void peano::applications::faxen::lbf::RegularGridBlockVertex::updateU1(double U_old, double U_new){
	double U1 = _vertexData.getU1();
	U1 += (U_new-U_old)/2;
	_vertexData.setU1(U1);
}

double peano::applications::faxen::lbf::RegularGridBlockVertex::getU2() const{
	return _vertexData.getU2();
}

void peano::applications::faxen::lbf::RegularGridBlockVertex::setU2(double U2){
	_vertexData.setU2(U2);
}

void peano::applications::faxen::lbf::RegularGridBlockVertex::updateU2(double U_old, double U_new){
	double U2 = _vertexData.getU2();
	U2 += (U_new-U_old)/2;
	_vertexData.setU2(U2);
}

double peano::applications::faxen::lbf::RegularGridBlockVertex::getV0() const{
	return _vertexData.getV0();
}

void peano::applications::faxen::lbf::RegularGridBlockVertex::setV0(double V0){
	_vertexData.setV0(V0);
}

void peano::applications::faxen::lbf::RegularGridBlockVertex::updateV0(double V_old, double V_new){
	double V0 = _vertexData.getV0();
	V0 += (V_new-V_old)/4;
	_vertexData.setV0(V0);
}

double peano::applications::faxen::lbf::RegularGridBlockVertex::getV1() const{
	return _vertexData.getV1();
}

void peano::applications::faxen::lbf::RegularGridBlockVertex::setV1(double V1){
	_vertexData.setV1(V1);
}

void peano::applications::faxen::lbf::RegularGridBlockVertex::updateV1(double V_old, double V_new){
	double V1 = _vertexData.getV1();
	V1 += (V_new-V_old)/2;
	_vertexData.setV1(V1);
}

double peano::applications::faxen::lbf::RegularGridBlockVertex::getV2() const{
	return _vertexData.getV2();
}

void peano::applications::faxen::lbf::RegularGridBlockVertex::setV2(double V2){
	_vertexData.setV2(V2);
}

void peano::applications::faxen::lbf::RegularGridBlockVertex::updateV2(double V_old, double V_new){
	double V2 = _vertexData.getV2();
	V2 += (V_new-V_old)/2;
	_vertexData.setV2(V2);
}

int peano::applications::faxen::lbf::RegularGridBlockVertex::getFlag() const{
	return _vertexData.getFlag();
}

void peano::applications::faxen::lbf::RegularGridBlockVertex::setFlag(int Flag){
	_vertexData.setFlag(Flag);
}

/**
 * Lattice Boltzmann component functions' implementation
 */

 unsigned int
 peano::applications::faxen::lbf::RegularGridBlockVertex::getVertexNumber() const{
	 return Base::_vertexData.getVertexNumber();
 }


 void peano::applications::faxen::lbf::RegularGridBlockVertex::createVertex(
		 const tarch::la::Vector<DIMENSIONS,double> &x,const tarch::la::Vector<DIMENSIONS,double> &h){
	 unsigned int vertexNumber =
			 peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
			 createVertex(x,h);

	 setVertexNumber(vertexNumber);
 }


 void peano::applications::faxen::lbf::RegularGridBlockVertex::destroyVertex() const{
	 peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
			 destroyVertex(getVertexNumber());
 }


#ifdef Parallel
 void peano::applications::faxen::lbf::RegularGridBlockVertex::
 setDensityOnBlockBoundary(bool useDynamicGeometry){
	 if(!useDynamicGeometry){
		 return;
	 }

	 assertion(getVertexNumber()==peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVertexNumber());
	 // loop over all cells near the block boundary and copy density values from the grid management service
	 // to the parallel buffer
	 for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY; i++){
		 int index = peano::applications::latticeboltzmann::blocklatticeboltzmann::BLOCKBOUNDARYINDEX.getBlockIndex(i);
		 if (   (!peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getInner()[index])
				 && ( peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getBoundary()[index]) ){
			 Base::_vertexData.setLbDensityOnBoundary(
					 i,
					 peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getDensity()(index)
			 );
		 } else {
			 Base::_vertexData.setLbDensityOnBoundary(i,0.0);
		 }
	 }
 }


 double peano::applications::faxen::lbf::RegularGridBlockVertex::getDensityOnBoundary(const int& index) const {
	 return Base::_vertexData.getLbDensityOnBoundary(index);
 }
#endif


#ifdef Parallel
 double peano::applications::faxen::lbf::RegularGridBlockVertex::
 getPdfDiff(const int& index) const {
	 assertion(index > -1);
	 assertion(index < LB_PDFS_ON_BLOCKBOUNDARY);
	 return Base::_vertexData.getLbPdfDiff(index);
 }


 void peano::applications::faxen::lbf::RegularGridBlockVertex::initPdfDiff(){
	 assertion(getVertexNumber()==peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVertexNumber());
	 for (int i = 0; i < LB_PDFS_ON_BLOCKBOUNDARY; i++){
		 // save pdfs pointing out of the block
		 Base::_vertexData.setLbPdfDiff(
				 i,
				 -peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getPdf()(peano::applications::latticeboltzmann::blocklatticeboltzmann::parallel::BLOCKBOUNDARYINDEX4PDFS.getOutgoingPdf(i))
		 );
	 }
 }


 void peano::applications::faxen::lbf::RegularGridBlockVertex::computePdfDiff(){
	 assertion(getVertexNumber()==peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVertexNumber());
	 for (int i = 0; i < LB_PDFS_ON_BLOCKBOUNDARY; i++){
		 // save pdfs pointing into the block
		 Base::_vertexData.setLbPdfDiff(
				 i,
				 Base::_vertexData.getLbPdfDiff(i) +
				 peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getPdf()(
						 peano::applications::latticeboltzmann::blocklatticeboltzmann::parallel::BLOCKBOUNDARYINDEX4PDFS.getIncomingPdf(i)
				 )
		 );
	 }
 }


 void peano::applications::faxen::lbf::RegularGridBlockVertex::mergePdfDiff(const RegularGridBlockVertex& neighbour) {
	 assertion2((getVertexNumber()==0) || (getVertexNumber()==peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVertexNumber()),getVertexNumber(),peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVertexNumber());
	 tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf = peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getPdf();
	 // add difference to pdfs
	 for (int i = 0; i < LB_PDFS_ON_BLOCKBOUNDARY; i++){
		 // if the current pdf-field has not changed
		 // -> either the same amount was transfered from some neighbour cell; in this case, adding the difference (which should also
		 //    equal zero) should not matter at all
		 // -> or: there was no transfer, as the process boundary passes through here; in this case, adding the difference
		 //    will just make everything right ;-)
		 if (Base::_vertexData.getLbPdfDiff(i) == 0.0){
			 pdf(peano::applications::latticeboltzmann::blocklatticeboltzmann::parallel::BLOCKBOUNDARYINDEX4PDFS.getIncomingPdf(i)) =
					 pdf(
							 peano::applications::latticeboltzmann::blocklatticeboltzmann::parallel::BLOCKBOUNDARYINDEX4PDFS.getIncomingPdf(i)
					 )
					 + neighbour.getPdfDiff(i);
		 }
	 }
 }


 void peano::applications::faxen::lbf::RegularGridBlockVertex::mergeDensityOnBoundary(const RegularGridBlockVertex& neighbour) {
	 assertion2((getVertexNumber()==0) || (getVertexNumber()==peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVertexNumber()),getVertexNumber(),peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVertexNumber());
	 tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density = peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getDensity();

	 // merge density values in outer close-to-boundary cells
	 for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY; i++){
		 int index = peano::applications::latticeboltzmann::blocklatticeboltzmann::BLOCKBOUNDARYINDEX.getBlockIndex(i);
		 if (   (!peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getInner()[index])
				 && peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getBoundary()[index]){
			 assertion3 ( (Base::_vertexData.getLbDensityOnBoundary(i) == 0.0) || (neighbour.getDensityOnBoundary(i) == 0.0),Base::_vertexData.getLbDensityOnBoundary(i),neighbour.getDensityOnBoundary(i),index );
			 density(index) += neighbour.getDensityOnBoundary(i);
		 }
	 }
 }
#endif
