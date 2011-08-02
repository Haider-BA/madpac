// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _TARCH_LA_VECTOR_H_
#define _TARCH_LA_VECTOR_H_

#include "tarch/utils/EnableIf.h"
#include "tarch/la/traits/IsVector.h"
#include "tarch/la/VectorAssign.h"
#include "tarch/la/VectorAssignList.h"
#include "tarch/la/VectorOperations.h"
#include "tarch/la/VectorScalarOperations.h"
#include "tarch/la/VectorVectorOperations.h"

namespace tarch {
namespace la {

template<int Size, typename Scalar>
struct Vector
{
private:

  Scalar _values[Size];

public:

  Vector ();

  /**
   * Assignment operator for any vector type.
   */
  template<typename VECTOR>
    typename utils::EnableIf< IsVector<VECTOR>::value,
    Vector<Size,Scalar>&
  >::Type operator= (const VECTOR& toAssign);

  /**
   * Copy constructor to copy from any vector type.
   *
   * The only way to accomplish this with enable-if is to specify a second
   * dummy argument with default value, which is (hopefully) optimized away.
   */
  template<typename VECTOR>
  Vector (const VECTOR& toCopy,
          typename utils::EnableIf< IsVector<VECTOR>::value,void*>::Type = NULL);

  Vector (const Scalar& initialValue);

  Vector (const Scalar& initialValue0,
          const Scalar& initialValue1);

  Vector (const Scalar& initialValue0,
          const Scalar& initialValue1,
          const Scalar& initialValue2);

  Vector (const Scalar& initialValue0,
          const Scalar& initialValue1,
          const Scalar& initialValue2,
          const Scalar& initialValue3);

  int size() const;

  const Scalar & operator[] (int index) const;

  Scalar & operator[] (int index);

  const Scalar & operator() (int index) const;

  Scalar & operator() (int index);

  // No more methods here? They are all generic free methods now!

  Scalar norm() const;
};

}} // namespace tarch, la

#include "Vector.cpph"

#endif /* _TARCH_LA_VECTOR_H_ */
