// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_REGULARGRID_TESTS_TEST_TYPES_H_
#define _PEANO_KERNEL_REGULARGRID_TESTS_TEST_TYPES_H_


#include "peano/kernel/regulargrid/tests/records/TestCell.h"
#include "peano/kernel/regulargrid/tests/records/TestState.h"
#include "peano/kernel/regulargrid/tests/records/TestVertex.h"

#include "peano/kernel/regulargrid/Cell.h"
#include "peano/kernel/regulargrid/State.h"
#include "peano/kernel/regulargrid/Vertex.h"


namespace peano {
  namespace kernel {
    namespace regulargrid {
      namespace tests {
        class Vertex;
        class Cell;
        class State;
      }
    }
  }
}


class peano::kernel::regulargrid::tests::Vertex:
  public peano::kernel::regulargrid::Vertex< peano::kernel::regulargrid::tests::records::TestVertex > {
  private:
    typedef class peano::kernel::regulargrid::Vertex< peano::kernel::regulargrid::tests::records::TestVertex >  Base;
  public:
    Vertex() {}
    Vertex(const Base::PersistentVertex& argument): Base(argument) {}
};


class peano::kernel::regulargrid::tests::State:
  public peano::kernel::regulargrid::State< peano::kernel::regulargrid::tests::records::TestState > {
  private:
    typedef class peano::kernel::regulargrid::State< peano::kernel::regulargrid::tests::records::TestState >  Base;
  public:
    State() {}
    State(const Base::PersistentState& argument): Base(argument) {}
};


class peano::kernel::regulargrid::tests::Cell:
  public peano::kernel::regulargrid::Cell< peano::kernel::regulargrid::tests::records::TestCell > {
  private:
  typedef class peano::kernel::regulargrid::Cell< peano::kernel::regulargrid::tests::records::TestCell >  Base;
  public:
    Cell() {}
    Cell(const Base::PersistentCell& argument): Base(argument) {}
};


#endif
