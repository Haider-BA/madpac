#include "peano/applications/faxen/RegularGridVertex.h"
#include "peano/utils/Loop.h"
#include "peano/kernel/gridinterface/Checkpoint.h"
#include "tarch/la/WrappedVector.h"


peano::applications::faxen::RegularGridVertex::RegularGridVertex():
Base() {
	// @todo Insert your code here
}


peano::applications::faxen::RegularGridVertex::RegularGridVertex(const Base::PersistentVertex& argument):
		  Base(argument) {
	// @todo Insert your code here
}


tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::RegularGridVertex::readP0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getP0(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::RegularGridVertex::readP1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getP1(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::RegularGridVertex::readF0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getF0(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::RegularGridVertex::readF1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getF1(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::RegularGridVertex::readG0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getG0(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::RegularGridVertex::readG1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getG1(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::RegularGridVertex::readU0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getU0(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::RegularGridVertex::readU1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getU1(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::RegularGridVertex::readU2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getU2(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::RegularGridVertex::readV0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getV0(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::RegularGridVertex::readV1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getV1(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::RegularGridVertex::readV2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getV2(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::RegularGridVertex::readFlag(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getFlag(); enddforx return result; }






void peano::applications::faxen::RegularGridVertex::writeP0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setP0( values(xScalar) ); enddforx }
void peano::applications::faxen::RegularGridVertex::writeP1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setP1( values(xScalar) ); enddforx }
void peano::applications::faxen::RegularGridVertex::writeF0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setF0( values(xScalar) ); enddforx }
void peano::applications::faxen::RegularGridVertex::writeF1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setF1( values(xScalar) ); enddforx }
void peano::applications::faxen::RegularGridVertex::writeG0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setG0( values(xScalar) ); enddforx }
void peano::applications::faxen::RegularGridVertex::writeG1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setG1( values(xScalar) ); enddforx }
void peano::applications::faxen::RegularGridVertex::writeU0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setU0( values(xScalar) ); enddforx }
void peano::applications::faxen::RegularGridVertex::writeU1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setU1( values(xScalar) ); enddforx }
void peano::applications::faxen::RegularGridVertex::writeU2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setU2( values(xScalar) ); enddforx }
void peano::applications::faxen::RegularGridVertex::writeV0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setV0( values(xScalar) ); enddforx }
void peano::applications::faxen::RegularGridVertex::writeV1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setV1( values(xScalar) ); enddforx }
void peano::applications::faxen::RegularGridVertex::writeV2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setV2( values(xScalar) ); enddforx }
void peano::applications::faxen::RegularGridVertex::writeFlag(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setFlag( values(xScalar) ); enddforx }

void peano::applications::faxen::RegularGridVertex::init(){
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

double peano::applications::faxen::RegularGridVertex::getP0() const{
	return _vertexData.getP0();
}

void peano::applications::faxen::RegularGridVertex::setP0(double P0){
	_vertexData.setP0(P0);
}

double peano::applications::faxen::RegularGridVertex::getP1() const{
	return _vertexData.getP1();
}

void peano::applications::faxen::RegularGridVertex::setP1(double P1){
	_vertexData.setP1(P1);
}

double peano::applications::faxen::RegularGridVertex::getF0() const{
	return _vertexData.getF0();
}

void peano::applications::faxen::RegularGridVertex::setF0(double F0){
	_vertexData.setF0(F0);
}

double peano::applications::faxen::RegularGridVertex::getF1() const{
	return _vertexData.getF1();
}

void peano::applications::faxen::RegularGridVertex::setF1(double F1){
	_vertexData.setF1(F1);
}

double peano::applications::faxen::RegularGridVertex::getG0() const{
	return _vertexData.getG0();
}

void peano::applications::faxen::RegularGridVertex::setG0(double G0){
	_vertexData.setG0(G0);
}

double peano::applications::faxen::RegularGridVertex::getG1() const{
	return _vertexData.getG1();
}

void peano::applications::faxen::RegularGridVertex::setG1(double G1){
	_vertexData.setG1(G1);
}

double peano::applications::faxen::RegularGridVertex::getU0() const{
	return _vertexData.getU0();
}

void peano::applications::faxen::RegularGridVertex::setU0(double U0){
	_vertexData.setU0(U0);
}

double peano::applications::faxen::RegularGridVertex::getU1() const{
	return _vertexData.getU1();
}

void peano::applications::faxen::RegularGridVertex::setU1(double U1){
	_vertexData.setU1(U1);
}

double peano::applications::faxen::RegularGridVertex::getU2() const{
	return _vertexData.getU2();
}

void peano::applications::faxen::RegularGridVertex::setU2(double U2){
	_vertexData.setU2(U2);
}

double peano::applications::faxen::RegularGridVertex::getV0() const{
	return _vertexData.getV0();
}

void peano::applications::faxen::RegularGridVertex::setV0(double V0){
	_vertexData.setV0(V0);
}

double peano::applications::faxen::RegularGridVertex::getV1() const{
	return _vertexData.getV1();
}

void peano::applications::faxen::RegularGridVertex::setV1(double V1){
	_vertexData.setV1(V1);
}

double peano::applications::faxen::RegularGridVertex::getV2() const{
	return _vertexData.getV2();
}

void peano::applications::faxen::RegularGridVertex::setV2(double V2){
	_vertexData.setV2(V2);
}


int peano::applications::faxen::RegularGridVertex::getFlag() const{
	return _vertexData.getFlag();
}

void peano::applications::faxen::RegularGridVertex::setFlag(int Flag){
	_vertexData.setFlag(Flag);
}






