// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_FAXEN_SpacetreeGridVertex_H_ 
#define _PEANO_APPLICATIONS_FAXEN_SpacetreeGridVertex_H_


#include "peano/applications/faxen/records/SpacetreeGridVertex.h"
#include "peano/kernel/spacetreegrid/Vertex.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"
#include "peano/utils/Globals.h"


namespace peano { 
  namespace applications { 
    namespace faxen { 
      class SpacetreeGridVertex; 
}
}
}


/**
 * Blueprint for regular grid vertex.
 * 
 * This file has originally been created by PeProt and may be manually adapted to 
 * the needs of your application. We do not recommend to remove anything!
 * 
 * \author PeProt
 */


class peano::applications::faxen::SpacetreeGridVertex: public peano::kernel::spacetreegrid::Vertex< peano::applications::faxen::records::SpacetreeGridVertex > { 
  private: 
    typedef class peano::kernel::spacetreegrid::Vertex< peano::applications::faxen::records::SpacetreeGridVertex >  Base;

  public:
    /**
     * Default Constructor
     *
     * This constructor is required by the framework's data container. Do not 
     * remove it.
     */
    SpacetreeGridVertex();

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
    SpacetreeGridVertex(const Base::PersistentVertex& argument);
    
    static tarch::la::Vector<TWO_POWER_D,double>  readP0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices);
    static tarch::la::Vector<TWO_POWER_D,double>  readP1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices);
    static tarch::la::Vector<TWO_POWER_D,double>  readF0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices);
    static tarch::la::Vector<TWO_POWER_D,double>  readF1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices);
    static tarch::la::Vector<TWO_POWER_D,double>  readG0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices);
    static tarch::la::Vector<TWO_POWER_D,double>  readG1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices);
    static tarch::la::Vector<TWO_POWER_D,double>  readU0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices);
    static tarch::la::Vector<TWO_POWER_D,double>  readU1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices);
    static tarch::la::Vector<TWO_POWER_D,double>  readU2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices);
    static tarch::la::Vector<TWO_POWER_D,double>  readV0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices);
    static tarch::la::Vector<TWO_POWER_D,double>  readV1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices);
    static tarch::la::Vector<TWO_POWER_D,double>  readV2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices);
    static tarch::la::Vector<TWO_POWER_D,double>  readFlag(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices);



    static void writeP0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
    static void writeP1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
    static void writeF0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
    static void writeF1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
    static void writeG0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
    static void writeG1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
    static void writeU0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
    static void writeU1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
    static void writeU2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
    static void writeV0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
    static void writeV1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
    static void writeV2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
    static void writeFlag(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );





    #ifdef Parallel
    void mergeWithNeighbour(const SpacetreeGridVertex& neighbour, int fromRank);

    void prepareSendToNeighbour();
    #endif 
};


#endif
