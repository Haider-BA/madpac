// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_GRID_INTERFACE_VERTEX_ENUMERATOR_H_
#define _PEANO_KERNEL_GRID_INTERFACE_VERTEX_ENUMERATOR_H_


#include "tarch/la/Vector.h"
#include "peano/utils/Globals.h"
#include <bitset>


namespace peano {
  namespace kernel {
    namespace gridinterface {
      class VertexEnumerator;
    }
  }
}



/**
 * Enumerator Interface.
 *
 * Abstract Enumerator used to access the vertices passed the enterElement()
 * operations. Whenever you get access to vertices, Peano passes you an array
 * of vertices. However, you neither know the size nor the structure of the
 * array. The only thing you can do is to use the co-passed vertex enumerator
 * which gives you access to the @f$ 2^d @f$ vertices of one cell. These
 * vertices are enumerated lexicographically with the vertex 0 being the one
 * nearest to the coordinate system's origin. Then, the enumeration first runs
 * along the x_1 axis, then along x_2, and so forth.
 *
 * The enumerator is a functor, i.e. you can use it like a function. In terms
 * of a function, it is also overloaded. You can pass it an arbitrary integer
 * (encoding the vertices along the enumeration above), but you can also access
 * the vertices of a cell with an integer or bit vector.
 *
 * Example for usage:
 * \code
tarch::la::Vector<TWO_POWER_D,double> result;
dfor2(x)
  result(xScalar) = vertices[ enumerator(x) ]._vertexData.getU();
enddforx return result;
\endcode
 *
 * This simple sample runs over all @f$ 2^d @f$  vertices of one cell and
 * stores values of these vertices in a vector. In real life, I strongly
 * recommend not to do it this way, as the vertex should provide an
 * automatically generated operation that does exactly what the code from
 * above does, too.
 *
 * Besides the functor operations invoked with the normal brackets, there's
 * also a couple of additional functions that give you the position of the
 * vertices in space, e.g. See the interface signature for more information.
 *
 * !!! Lexicographic enumeration
 *
 * The lexicographic enumeration means that we start for each cell with the
 * vertex nearest to the coordinate system's origin. In 2D, this is the bottom
 * left vertex. Then, we enumerate ascending along the x_1, x_2, x_3 and so
 * forth. The picture bellow illustrates this enumeration for the
 * three-dimensional case.
 *
 * @image html lexicographic-enumeration.png
 *
 * @author Tobias Weinzierl
 */
class peano::kernel::gridinterface::VertexEnumerator {
  public:
    typedef tarch::la::Vector<DIMENSIONS,int>     LocalVertexIntegerIndex;
    typedef std::bitset<DIMENSIONS>               LocalVertexBitsetIndex;
    typedef tarch::la::Vector<DIMENSIONS,double>  Vector;

    // An interesting bevaiour in Peano showed up. The initial observation
    // was that Peano, compiled with OpenMP, crashed in the current version
    // right after startup with the message
    //
    //   pure virtual method called
    //   terminate called without an active exception
    //
    // It showed up that the problem was induced by the virtual destructor
    // below, which was inserted to avoid the warning
    // "'class peano::kernel::gridinterface::VertexEnumerator' has virtual
    // functions but non-virtual destructor" that is thrown by gcc on the
    // Shaheen.
    // There are two ways to solve this problem. One is to keep the virtual
    // destructor and to fix the OpenMP-Problem somehow. The other one is to
    // remove the virtual destructor and to disable the appropriate warning.
    // A virtual destructor is only needed if an abstract class is deleted
    // somewhere. Since this is unlikely in this case I commented the virtual
    // destructor to cope with what seems like a bug in OpenMP. To disable
    // the warning the flag -Wno-non-virtual-dtor was added to the scons-script.

//    virtual ~VertexEnumerator(){}

	virtual void test(){}

    /**
     * Map local vertex number to global array.
     *
     * Take a vertex number (something in-between @f$ 0 @f$ and @f$ 2^d-1 @f$ to
     * an index in a global array which is passed to enterElement().
     */
    virtual int operator() (int localVertexNumber) const = 0;

    /**
     * Map a local vertex number (given as vector on @f$ (0,1)^d @f$) to a
     * global array.
     */
    virtual int operator() (const LocalVertexIntegerIndex& localVertexNumber ) const = 0;

    /**
     * Map a local vertex number (given as vector on @f$ (0,1)^d @f$) to a
     * global array.
     */
    virtual int operator() (const LocalVertexBitsetIndex& localVertexNumber ) const = 0;

    /**
     * t.b.d.
     */
    virtual Vector getVertexPosition(int localVertexNumber) const = 0;
    virtual Vector getVertexPosition(const LocalVertexIntegerIndex& localVertexNumber) const = 0;
    virtual Vector getVertexPosition(const LocalVertexBitsetIndex& localVertexNumber) const = 0;

    /**
     * This is a shortcut for getVertexPosition(0) and should be optimised.
     */
    virtual Vector getVertexPosition() const = 0;

    virtual Vector getCellCenter() const = 0;

    virtual int getLevel() const = 0;

    /**
     * Returns the size of the current cell.
     */
    virtual Vector      getCellSize() const = 0;
    virtual std::string toString() const = 0;
};


#endif
