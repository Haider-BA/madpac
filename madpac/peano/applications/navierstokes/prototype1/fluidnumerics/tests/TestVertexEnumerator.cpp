/*
 * TestVertexEnumerator.cpp
 *
 *  Created on: Jul 5, 2011
 *      Author: unterweg
 */

#include "TestVertexEnumerator.h"

peano::applications::navierstokes::prototype1::fluidnumerics::tests::TestVertexEnumerator::TestVertexEnumerator(
  const int* indexMapping,
  const Vector cellSize
) : _indexMapping(indexMapping), _cellSize(cellSize)
{
}

void peano::applications::navierstokes::prototype1::fluidnumerics::tests::TestVertexEnumerator::resetIndexMapping(
    const int* indexMapping,
    const Vector cellSize) {
  assertion(cellSize.size() == _cellSize.size());
  _indexMapping = indexMapping;
  _cellSize = cellSize;
}

peano::applications::navierstokes::prototype1::fluidnumerics::tests::TestVertexEnumerator::~TestVertexEnumerator()
{
}

void peano::applications::navierstokes::prototype1::fluidnumerics::tests::TestVertexEnumerator::setCellSize(
    Vector cellSize
) {
  _cellSize = cellSize;
}

int peano::applications::navierstokes::prototype1::fluidnumerics::tests::TestVertexEnumerator::operator() (
  int localVertexNumber
) const {
  return _indexMapping[localVertexNumber];
}


Vector peano::applications::navierstokes::prototype1::fluidnumerics::tests::TestVertexEnumerator::getCellSize() const {
  return _cellSize;
}
