// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_DIFFUSION_EQUATION_EXPLICITTIMESTEPPING_RUNNERS_ALGORITHM_H_
#define PEANO_APPLICATIONS_DIFFUSION_EQUATION_EXPLICITTIMESTEPPING_RUNNERS_ALGORITHM_H_


#include "peano/applications/diffusionequation/explicittimestepping/configurations/AbstractTimeSteppingConfiguration.h"
#include "peano/applications/diffusionequation/explicittimestepping/repositories/ForwardBatchJobRepository.h"


namespace peano {
  namespace applications {
    namespace diffusionequation {
      namespace explicittimestepping {
        namespace runners {
          class Algorithm;
        }
      }
    }
  }
}


class peano::applications::diffusionequation::explicittimestepping::runners::Algorithm {
  public:
    static void explicitEuler(
      peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepository&                  repository,
      const peano::applications::diffusionequation::explicittimestepping::configurations::AbstractTimeSteppingConfiguration&  configuration
    );
};

#endif
