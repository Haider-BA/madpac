/*
 * TestEnumerator.h
 *
 *  Created on: Jul 5, 2011
 *      Author: unterweg
 */

#ifndef _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_FLUIDNUMERICS_TESTS_TESTENUMERATOR_H_
#define _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_FLUIDNUMERICS_TESTS_TESTENUMERATOR_H_

#include "peano/kernel/gridinterface/VertexEnumerator.h"
#include "peano/applications/navierstokes/prototype1/NSEGlobals.h"
#include <sstream>

namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
        namespace fluidnumerics {
          namespace tests {
            class TestVertexEnumerator;
          }
        }
      }
    }
  }
}

/**
 * This is a stub for tests in the navierstokes component. Only the methods that are needed are
 * implemented in the .cpp-file. Feel free to implement further methods appropriately, if you need
 * them for test cases.
 * @author Kristof Unterweger, Michael Lieb
 */
class peano::applications::navierstokes::prototype1::fluidnumerics::tests::TestVertexEnumerator
  : public peano::kernel::gridinterface::VertexEnumerator
{
  private:
   /**
    * This array of integers defines the mapping from
    * the local indices {0..NUMBER_OF_VERTICES_PER_ELEMENT} to the global indices.
    */
    const int* _indexMapping;

    /**
     * The cellsize to be returned by the TestVertexEnumerator.
     */
    Vector _cellSize;

  public:
    /**
     * @param indexMapping This array of integers defines the mapping from
     * the local indices {0..NUMBER_OF_VERTICES_PER_ELEMENT} to the global indices.
     * @param cellSize The cellsize to be returned by the TestVertexEnumerator.
     */
    TestVertexEnumerator( const int* indexMapping, const Vector cellSize );
    ~TestVertexEnumerator();

    /**
     * Resets the index mapping.
     * * @param indexMapping This array of integers defines the mapping from
     * the local indices {0..NUMBER_OF_VERTICES_PER_ELEMENT} to the global indices.
     * @param cellSize The cellsize to be returned by the TestVertexEnumerator.
     */
    void resetIndexMapping(const int* indexMapping, const Vector cellSize);

    /**
     * Sets the current cell size.
     */
    void setCellSize(const Vector cellSize);

    // Methods from VertexEnumerator
    int         operator() (int localVertexNumber) const;
    int         operator() (const LocalVertexIntegerIndex& localVertexNumber ) const { return -1; };
    int         operator() (const LocalVertexBitsetIndex& localVertexNumber ) const { return -1; };
    Vector      getVertexPosition(int localVertexNumber) const { return Vector(-1); };
    Vector      getVertexPosition(const LocalVertexIntegerIndex& localVertexNumber) const { return Vector(-1); };
    Vector      getVertexPosition(const LocalVertexBitsetIndex& localVertexNumber) const { return Vector(-1); };
    Vector      getVertexPosition() const { return Vector(-1); };
    Vector      getCellCenter() const {return Vector(-2.0);};
    int         getLevel() const {return -1;};
    Vector      getCellSize() const;
    std::string toString() const {
      std::stringstream ss;
      ss << "This is a TestEnumerator. VertexIndices are:" <<std::endl;
      for(int i=0;i<NUMBER_OF_VERTICES_PER_ELEMENT;i++){
          ss <<"vertex-number " <<i <<": " <<_indexMapping[i] <<std::endl;
      }
      return ss.str();
      };
};

#endif /* _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_FLUIDNUMERICS_TESTS_TESTENUMERATOR_H_ */
