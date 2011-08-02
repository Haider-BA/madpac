// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_SpacetreeGridBlockCell_H_ 
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_SpacetreeGridBlockCell_H_


#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/records/SpacetreeGridBlockCell.h"
#include "peano/kernel/spacetreegrid/Cell.h"


namespace peano { 
  namespace applications { 
    namespace latticeboltzmann { 
      namespace blocklatticeboltzmann { 
      class SpacetreeGridBlockCell; 
}
}
}
}


/**
 * Blueprint for regular grid cell.
 * 
 * This file has originally been created by RaPeP and may be manually adapted to 
 * the needs of your application. We do not recommend to remove anything!
 * 
 * \author RaPeP
 */


class peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell: public peano::kernel::spacetreegrid::Cell< peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell > { 
  private: 
    typedef class peano::kernel::spacetreegrid::Cell< peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockCell >  Base;

  public:
    /**
     * Default Constructor
     *
     * This constructor is required by the framework's data container. Do not 
     * remove it.
     */
    SpacetreeGridBlockCell();

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
    SpacetreeGridBlockCell(const Base::PersistentCell& argument);
};


#endif
