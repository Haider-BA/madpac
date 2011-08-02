/*
 * ScenarioService.h
 *
 *  Created on: Jun 18, 2011
 *      Author: denis
 */

#ifndef SCENARIOSERVICE_H_
#define SCENARIOSERVICE_H_

#include "peano/utils/Dimensions.h"
#include "tarch/la/Vector.h"
#include "tarch/logging/Log.h"

#include "peano/geometry/services/GeometryService.h"
#include "peano/applications/faxen/lbf/scenarios/NavieStokesScenario.h"
#include "scenario/latticeboltzmann/blocklatticeboltzmann/ScenarioDefinitions.h"

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace services {

class ScenarioService {
public:
	static ScenarioService& getInstance();

	/**
	 * initialization of scenario
	 */
	void init(
			const tarch::la::Vector<DIMENSIONS,double> &domainSize,
			const tarch::la::Vector<DIMENSIONS,double> &domainOffset,
			const double &characteristicVelocity,
			const bool &useParabolicProfile,
			double timePerSineCycle,
			const scenario::latticeboltzmann::blocklatticeboltzmann::ScenarioType &scenarioType,
			peano::geometry::Geometry *builtinGeometry,
			const double ReynoldsNumber
	);

	/**
	 * set velocities boundary conditions in the vertex
	 */
	void setVelocityBoundaryConditionOnVertex(
			peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
			const tarch::la::Vector<DIMENSIONS,double>&  vertexPosition,
			const tarch::la::Vector<DIMENSIONS,double>&  cellWidth);

	/**
	 * set velocities boundary conditions in the cell
	 */
	void setVelocityBoundaryConditionOnCell(
			peano::applications::faxen::lbf::RegularGridBlockVertex**  vertices,
			peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
			const tarch::la::Vector<DIMENSIONS,double>&  zeroPoint,
			const tarch::la::Vector<DIMENSIONS,double>&  cellSize);

	/**
	 * set pressure boundary conditions in the cell
	 */
	void setPressureBoundaryConditionOnCell(
			peano::applications::faxen::lbf::RegularGridBlockVertex**  vertices,
			peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
			const tarch::la::Vector<DIMENSIONS,double>&  zeroPoint,
			const tarch::la::Vector<DIMENSIONS,double>&  cellSize);

private:
	ScenarioService();
	virtual ~ScenarioService();

	/**
	 * scenario that is used to set up proper boundary conditions
	 */
	scenarios::NavieStokesScenario* _scenario;

	tarch::logging::Log _log;
};

}

}

}

}

}

#endif /* SCENARIOSERVICE_H_ */
