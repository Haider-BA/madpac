// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_TOOLBOX_SOLVER_VIRTUAL_HIERARCHICAL_H_REFINEMENT_H_
#define _PEANO_TOOLBOX_SOLVER_VIRTUAL_HIERARCHICAL_H_REFINEMENT_H_


#include "tarch/logging/Log.h"
#include "peano/utils/Globals.h"
#include "peano/toolbox/stencil/Stencil.h"
#include "peano/toolbox/solver/HyperCube.h"
#include "sys/time.h"


namespace peano {
  namespace toolbox {
    namespace solver {
      class VirtualHierarchicalHRefinement;
    }
  }
}



/**
 * to be written
 *
 * @author Roman Karlstetter, Tobias Weinzierl
 */
class peano::toolbox::solver::VirtualHierarchicalHRefinement {
  public:
    VirtualHierarchicalHRefinement(int partitionFactor);

    /**
     * @return Im Moment ist es noch egal, was zurueckgegeben wird.
     */
    peano::toolbox::stencil::ElementWiseVector computeVirtualHierarchicalHRefinement(
      const peano::toolbox::stencil::ElementWiseVector  in,
      const peano::toolbox::stencil::Stencil            stencil,
      const peano::toolbox::stencil::ElementWiseVector& rhs,
      double                                            relaxationFactor
    );

    /**
     * @return Im Moment ist es noch egal, was zurueckgegeben wird.
     */
    peano::toolbox::stencil::ElementWiseVector computeVirtualHierarchicalHRefinementwJAC(
      const peano::toolbox::stencil::ElementWiseVector  in,
      const peano::toolbox::stencil::Stencil            stencil,
      const peano::toolbox::stencil::ElementWiseVector& rhs,
      double                                            relaxationFactor
    );

    /**
     * @return Im Moment ist es noch egal, was zurueckgegeben wird.
     */
    peano::toolbox::stencil::ElementWiseVector computeVirtualHierarchicalHRefinementwGS(
      const peano::toolbox::stencil::ElementWiseVector  in,
      const peano::toolbox::stencil::Stencil            stencil,
      const peano::toolbox::stencil::ElementWiseVector& rhs,
      double                                            relaxationFactor
    );

    /**
     * @return Im Moment ist es noch egal, was zurueckgegeben wird.
     */
    peano::toolbox::stencil::ElementWiseVector computeVirtualHierarchicalHRefinement2DColored(
      const peano::toolbox::stencil::ElementWiseVector  in,
      const peano::toolbox::stencil::Stencil            stencil,
      const peano::toolbox::stencil::ElementWiseVector& rhs,
      double                                            relaxationFactor
    );

    peano::toolbox::solver::HyperCube refineGrid(
      const peano::toolbox::stencil::ElementWiseVector& input,
      int divisionFactor
    );
    peano::toolbox::stencil::ElementWiseVector calculateCoarserReturnValues();
    double calculatePartialIntegral(int direction, int testFunctionSmallIndex, int testFunctionLargeIndex);
    virtual void visualize(const std::string& identifier);

  static tarch::logging::Log _log;
private:
  HyperCube _fineGrid;
  HyperCube _otherFineGrid;
  int _partitionFactor;
  int _sizeFineGrid; // number of vertices per dimension of finegrid
  double _h;
};



#endif
