// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE2_REPOSITORIES_PrototypeRepository_H_
#define PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE2_REPOSITORIES_PrototypeRepository_H_


#include <string>


namespace peano { 
  namespace applications { 
    namespace navierstokes { 
      namespace prototype2 {
      namespace repositories {
        class PrototypeRepository;  
      }
}
}
}
}


class peano::applications::navierstokes::prototype2::repositories::PrototypeRepository {
  public:
    virtual ~PrototypeRepository() {}
    
    /**
     * Iterate with current active event handle.
     */
    virtual void iterate() = 0;

    /**
     * Switch to another event handle.
     */


    
    /**
     * Give Some Statistics
     *
     * This operation gives you a table which tells you for each adapter how 
     * much time was spent in it. The result is written to the info log device 
     * if you are not using CCA/sciCoDE. If you use the PSE framework, it is 
     * written to the corresponding output port. 
     */
    virtual void logIterationStatistics() const = 0;
};


#endif
