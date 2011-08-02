// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef CCAVISDEBUGGER_H_
#define CCAVISDEBUGGER_H_
#include "tarch/la/Vector.h"
#include "peano/integration/cca/ports/debugging/GridDebugger.h"
#include "tarch/services/Service.h"
/**
 *
 * CCAVisDebugger
 *
 * Visual Debugger which helps to monitor different flags for the given
 * grid. The Debugger can be used only through sciCoDE. To use this service you
 * should compile with -DCCA.
 *
 * !!!Usage
 * TBD
 * @author Atanas Atanasov
 */
namespace peano{
  namespace integration{
    namespace debugging{
      class CCAVisDebugger;
    }
  }
}

class peano::integration::debugging::CCAVisDebugger : public tarch::services::Service{
private:
  peano::integration::cca::ports::debugging::GridDebugger* _debugger;
  CCAVisDebugger();
public:
  virtual ~CCAVisDebugger();
  static CCAVisDebugger& getInstance();
  void addGridCell(const tarch::la::Vector<2, double>&, const tarch::la::Vector<2, double>&, const long long& level);
  void addGridVertex(const tarch::la::Vector<2, double>&, const double& value);
  void addGridCell(const tarch::la::Vector<3, double>&, const tarch::la::Vector<3, double>&, const long long& level);
  void addGridVertex(const tarch::la::Vector<3, double>&, const double& value);
  void addStep(const long & step);
  void visualise();
  void setGridIsComplete();
  void getGridIsComplete(int& value);
  void receiveDanglingMessages();
  void connect(peano::integration::cca::ports::debugging::GridDebugger* const debugger);
  void disconnect();
};

#endif
