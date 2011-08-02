/*
 * ScenarioService.cpp
 *
 *  Created on: Jun 18, 2011
 *      Author: denis
 */

#include "peano/applications/faxen/lbf/services/ScenarioService.h"
#include "peano/applications/faxen/lbf/scenarios/LidDrivenCavityScenario.h"
#include "peano/applications/faxen/lbf/scenarios/ChannelScenario.h"
#include "scenario/latticeboltzmann/blocklatticeboltzmann/ScenarioDefinitions.h"

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace services {

ScenarioService::ScenarioService():
						_log("peano::applications::faxen::lbf::services::ScenarioServices"){}

ScenarioService::~ScenarioService() {
	// TODO Auto-generated destructor stub
}

ScenarioService& ScenarioService::getInstance(){
	static ScenarioService singleton;
	return singleton;
}

void ScenarioService::init(
		const tarch::la::Vector<DIMENSIONS,double> &domainSize,
		const tarch::la::Vector<DIMENSIONS,double> &domainOffset,
		const double &characteristicVelocity,
		const bool &useParabolicProfile,
		double timePerSineCycle,
		const scenario::latticeboltzmann::blocklatticeboltzmann::ScenarioType &scenarioType,
		peano::geometry::Geometry *builtinGeometry,
		const double ReynoldsNumber
){
	// reset scenario
	if (_scenario != NULL){
		delete _scenario;
		_scenario = NULL;
	}

	switch(scenarioType){
	// cavity
	case scenario::latticeboltzmann::blocklatticeboltzmann::LID_DRIVEN_CAVITY:
		// lid driven cavity
		_scenario =
				new scenarios::LidDrivenCavityScenario(domainSize,domainOffset,characteristicVelocity);
		break;
	case scenario::latticeboltzmann::blocklatticeboltzmann::DEFAULT_CHANNEL:
		// channel scenario (possibly with no-slip boundaries inside the domain; however, no moving obstacles!)
		_scenario =
				new scenarios::ChannelScenario(domainSize,domainOffset,
						characteristicVelocity,useParabolicProfile,ReynoldsNumber);
		break;
	case scenario::latticeboltzmann::blocklatticeboltzmann::CHANNEL_WITH_MOVING_OBSTACLE:
		// channel scenario using precice
		//		_scenario = new scenario::latticeboltzmann::blocklatticeboltzmann::BoundaryData4PreciceChannel(
		//				domainSize,domainOffset,characteristicVelocity,useParabolicProfile
		//		);
		break;
	case scenario::latticeboltzmann::blocklatticeboltzmann::PRECICE_SCENARIO:
		// channel scenario using precice
		//		_scenario = new scenario::latticeboltzmann::blocklatticeboltzmann::BoundaryData4PreciceChannel(
		//				domainSize,domainOffset,characteristicVelocity,useParabolicProfile
		//		);
		break;
	case scenario::latticeboltzmann::blocklatticeboltzmann::EMPTY_BOX:
		//		_scenario = new scenario::latticeboltzmann::blocklatticeboltzmann::BoundaryData4EmptyBox(
		//				domainSize,domainOffset
		//		);
		break;
	case scenario::latticeboltzmann::blocklatticeboltzmann::MOVING_SPHERE_IN_DRIFT_RATCHET:
		//		_scenario = new scenario::latticeboltzmann::blocklatticeboltzmann::BoundaryData4MovingSphereInDriftRatchet(
		//				builtinGeometry,
		//				domainSize,
		//				domainOffset,
		//				characteristicVelocity,
		//				timePerSineCycle
		//		);
		break;
	default:
		logError("init()", "No valid scenario found!");
		break;
	}

}

void ScenarioService::setVelocityBoundaryConditionOnVertex(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  vertexPosition,
		const tarch::la::Vector<DIMENSIONS,double>&  cellWidth){
	_scenario->setVelocityBoundaryConditionOnVertex(vertex,vertexPosition,cellWidth);
}

void ScenarioService::setVelocityBoundaryConditionOnCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex**  vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const tarch::la::Vector<DIMENSIONS,double>&  zeroPoint,
		const tarch::la::Vector<DIMENSIONS,double>&  cellSize){
	_scenario->setVelocityBoundaryConditionOnCell(vertices,cell,zeroPoint,cellSize);
}

void ScenarioService::setPressureBoundaryConditionOnCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex**  vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const tarch::la::Vector<DIMENSIONS,double>&  zeroPoint,
		const tarch::la::Vector<DIMENSIONS,double>&  cellSize){
	_scenario->setPressureBoundaryConditionOnCell(vertices,cell,zeroPoint,cellSize);
}

}

}

}

}

}
