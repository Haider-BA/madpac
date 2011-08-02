// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYCONDITIONS_BLOCKABSTRACTPRESSURECONDITION_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYCONDITIONS_BLOCKABSTRACTPRESSURECONDITION_H_

#include "tarch/logging/Log.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundaryconditions/AbstractBlockBoundaryCondition.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockComputeCellValues.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace boundaryconditions {
          class BlockAbstractPressureCondition;
        }
      }
    }
  }
}


/** abstract pressure boundary condition based on the pressure reconstruction from the dissertation of Nils
 *  Thuerey.
 *
 *  @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::BlockAbstractPressureCondition:
public peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::AbstractBlockBoundaryCondition {
  public:
    BlockAbstractPressureCondition();
    virtual ~BlockAbstractPressureCondition(){}

    /** nop
     */
    void treatBoundaryBeforeCollision(
      const int level,
      const peano::applications::latticeboltzmann::BoundaryData& boundaryData,
      const tarch::la::Vector<2,unsigned int>& boundaryDataIndex,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double> &velocity,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf
    ){}


    /** boundary treatment for a single pdf.
     */
    void treatBoundaryAfterCollision(
      const int level,
      const peano::applications::latticeboltzmann::BoundaryData& boundaryData,
      const tarch::la::Vector<2,unsigned int>& boundaryDataIndex,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double> &velocity,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf
    );

  private:
    /** determines the velocity to be used at the boundary. This function needs to be implemented by the inheriting
     *  classes -> pressure inlet: velocity profile is given in boundaryData; pressure outlet: velocity is extrapolated
     *  using the velocity of the current cell
     */
    virtual void getVelocity(
      const peano::applications::latticeboltzmann::BoundaryData& boundaryData,
      const tarch::la::Vector<2,unsigned int>& boundaryDataIndex,
      const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double> &velocity,
      tarch::la::Vector<DIMENSIONS,double> &targetVelocity
    ) const = 0;

    /** determines the density/ pressure that shall be applied for this pdf. */
    virtual void getDensity(
      const peano::applications::latticeboltzmann::BoundaryData& boundaryData,
      const tarch::la::Vector<2,unsigned int>& boundaryDataIndex,
      const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
      double &targetDensity
    ) const = 0;

    static tarch::logging::Log _log;
};
#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYCONDITIONS_BLOCKABSTRACTPRESSURECONDITION_H_
