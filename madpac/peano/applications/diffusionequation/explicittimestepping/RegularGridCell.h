// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_DIFFUSION_EQUATION_EXPLICITTIMESTEPPING_RegularGridCell_H_
#define _PEANO_APPLICATIONS_DIFFUSION_EQUATION_EXPLICITTIMESTEPPING_RegularGridCell_H_


#include "peano/applications/diffusionequation/explicittimestepping/records/RegularGridCell.h"
#include "peano/kernel/regulargrid/Cell.h"


namespace peano { 
  namespace applications { 
    namespace diffusionequation {
      namespace explicittimestepping { 
        class RegularGridCell;
      }
    }
  }
}


/**
 * Blueprint for regular grid cell.
 * 
 * This file has originally been created by PeProt and may be manually adapted to 
 * the needs of your application. We do not recommend to remove anything!
 * 
 * \author PeProt
 */


class peano::applications::diffusionequation::explicittimestepping::RegularGridCell: public peano::kernel::regulargrid::Cell< peano::applications::diffusionequation::explicittimestepping::records::RegularGridCell > {
  private: 
    typedef class peano::kernel::regulargrid::Cell< peano::applications::diffusionequation::explicittimestepping::records::RegularGridCell >  Base;

  public:
    /**
     * Default Constructor
     *
     * This constructor is required by the framework's data container. Do not 
     * remove it.
     */
    RegularGridCell();

    /**
     * Constructor
     *
     * This constructor is required by the framework's data container. Do not 
     * remove it. It is kind of a copy constructor that converts an object which 
     * comprises solely persistent attributes into a full attribute. This very 
     * functionality is implemented within the super type, i.e. this constructor 
     * has to invoke the correponsing super type's constructor and not the super 
     * type standard constructor.
     */
    RegularGridCell(const Base::PersistentCell& argument);
};


#endif
