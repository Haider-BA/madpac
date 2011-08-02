// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_GEOMETRY_SERVICES_FUNCTIONALGEOMETRYSERVICE_H_
#define _PEANO_GEOMETRY_SERVICES_FUNCTIONALGEOMETRYSERVICE_H_

#include "tarch/services/Service.h"
#include "peano/geometry/services/AbstractFunctionalGeometrySubService.h"
#include "peano/geometry/builtin/services/FunctionalBuiltinGeometrySubService.h"
#if defined(Precice)
#include "peano/geometry/precice/services/FunctionalPreciceGeometrySubService.h"
#endif

namespace peano {
  namespace geometry {
    namespace services {
      class FunctionalGeometryService;
    }
  }
}


class peano::geometry::services::FunctionalGeometryService: public tarch::services::Service {
public:
  /** initialises the geometry using the builtin geometry service
   */
  void init(
    const peano::geometry::builtin::configurations::BuiltinGeometryConfiguration& configs
  );

  #if defined(Precice)
  /** initialises the geometry using the preCICE geometry service */
  void init(
    const peano::geometry::precice::configurations::PreciceConfiguration& configs
  );
  #endif

  /** calls the respective implementation of the current functional geometry service (currently,
   *  only the builtin geometry service is supported!)
   */
  std::vector<int> getGeometryIDs(
    const tarch::la::Vector<DIMENSIONS,double> &x,
    const tarch::la::Vector<DIMENSIONS,double> &h
  );

  static peano::geometry::services::FunctionalGeometryService&
  getInstance();

  // TODO
  void receiveDanglingMessages(){}

private:
  FunctionalGeometryService(){}
  ~FunctionalGeometryService(){}

  static peano::geometry::services::AbstractFunctionalGeometrySubService *_functionalGeometryService;
  static peano::geometry::builtin::services::FunctionalBuiltinGeometrySubService _functionalBuiltinGeometryService;
#if defined(Precice)
  static peano::geometry::precice::services::FunctionalPreciceGeometrySubService _functionalPreciceGeometryService;
#endif
};
#endif // _PEANO_GEOMETRY_SERVICES_FUNCTIONALGEOMETRYSERVICE_H_
