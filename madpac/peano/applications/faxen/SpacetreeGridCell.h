// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_FAXEN_SpacetreeGridCell_H_ 
#define _PEANO_APPLICATIONS_FAXEN_SpacetreeGridCell_H_


#include "peano/applications/faxen/records/SpacetreeGridCell.h"
#include "peano/kernel/spacetreegrid/Cell.h"


namespace peano { 
  namespace applications { 
    namespace faxen { 
      class SpacetreeGridCell; 
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


class peano::applications::faxen::SpacetreeGridCell: public peano::kernel::spacetreegrid::Cell< peano::applications::faxen::records::SpacetreeGridCell > { 
  private: 
    typedef class peano::kernel::spacetreegrid::Cell< peano::applications::faxen::records::SpacetreeGridCell >  Base;

  public:
    /**
     * Default Constructor
     *
     * This constructor is required by the framework's data container. Do not 
     * remove it.
     */
    SpacetreeGridCell();

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
    SpacetreeGridCell(const Base::PersistentCell& argument);
};


#endif
