// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _CCA_PEANO_INTEGRATION_CCA_PORT_H_
#define _CCA_PEANO_INTEGRATION_CCA_PORT_H_

namespace peano {
  namespace integration {
    namespace cca {
      class Port;
    }
  }
}


/**
 * Interface for all ports used in Peano
 *
 * @author Tobias Weinzierl
 */
class peano::integration::cca::Port {
  public:
    virtual ~Port() {}
};

#endif
