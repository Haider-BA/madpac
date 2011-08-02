#include "peano/kernel/datatraversal/ActionSetTraversal.h"

#include "peano/utils/Loop.h"


peano::kernel::datatraversal::ActionSetTraversal::ActionSetTraversal(int numberOfActionSets):
  _actionSets(numberOfActionSets) {
}


peano::kernel::datatraversal::ActionSetTraversal::~ActionSetTraversal() {
}


int peano::kernel::datatraversal::ActionSetTraversal::getMaximumPath() const {
  return _actionSets.size();
}


const peano::kernel::datatraversal::ActionSet&
peano::kernel::datatraversal::ActionSetTraversal::getActionSet( int i ) const {
  assertion( i>=0 );
  assertion( i < getMaximumPath() );
  return _actionSets[i];
}


peano::kernel::datatraversal::ActionSet&
peano::kernel::datatraversal::ActionSetTraversal::getActionSet( int i ) {
  assertion1( i>=0, toString() );
  assertion3( i < getMaximumPath(), i, getMaximumPath(), toString() );
  return _actionSets[i];
}


peano::kernel::datatraversal::ActionSetTraversal
peano::kernel::datatraversal::ActionSetTraversal::getParallelCartesianGridTraversal(const tarch::la::Vector<DIMENSIONS,int>& numberOfCells) {
  ActionSetTraversal result(TWO_POWER_D);

  tarch::la::Vector<DIMENSIONS,int> maxCellsPerSet = numberOfCells/2 + 1;
  dfor2(i)
    dfor(k,maxCellsPerSet) {
      tarch::la::Vector<DIMENSIONS,int> currentCell = k * 2 + i;
      bool isInsideDomain = true;
      for (int d=0; d<DIMENSIONS; d++) {
        isInsideDomain &= currentCell(d) < numberOfCells(d);
      }
      if (isInsideDomain) {
        result._actionSets[ iScalar ].addAction( Action(currentCell,0) );
      }
    }
  enddforx

  return result;
}


peano::kernel::datatraversal::ActionSetTraversal
peano::kernel::datatraversal::ActionSetTraversal::getSequentialCartesianGridTraversal(const tarch::la::Vector<DIMENSIONS,int>& numberOfCells) {
  int maxPath = 1;
  for (int d=0; d<DIMENSIONS; d++) {
    maxPath *= numberOfCells(d);
  }

  ActionSetTraversal result(maxPath);

  maxPath = 0;
  dfor(currentCell,numberOfCells) {
    result._actionSets[ maxPath ].addAction( Action(currentCell,0) );
    maxPath++;
  }

  return result;
}


std::string peano::kernel::datatraversal::ActionSetTraversal::toString() const {
  std::ostringstream out;
  out << "(";

  for (int i=0; i<getMaximumPath(); i++) {
    out << "{";
    for (int j=0; j<_actionSets[i].getNumberOfParallelActions(); j++) {
      out << "(x=";
      out << _actionSets[i].getAction(j)._cartesianPosition;
      out << ",id=";
      out << _actionSets[i].getAction(j)._id;
      out << ")";
    }
    out << "}";
  }

  out << ")";
  return out.str();
}


peano::kernel::datatraversal::ActionSetTraversal
peano::kernel::datatraversal::ActionSetTraversal::sortIntoIdBins(const ActionSetTraversal& input) {
  peano::kernel::datatraversal::ActionSetTraversal result(0);

  for (int i=0; i<input.getMaximumPath(); i++) {
	assertion2( input.getActionSet(i).getNumberOfParallelActions()==1, i, input.getActionSet(i).getNumberOfParallelActions() );
	int  newId = input.getActionSet(i).getAction(0)._id;
	int  currentActionSet = 0;
	bool holdsIdAlready   = true;
	while (currentActionSet<result.getMaximumPath() && holdsIdAlready) {
      holdsIdAlready = false;
      for (int j=0; j<result.getActionSet(currentActionSet).getNumberOfParallelActions(); j++) {
    	holdsIdAlready |= result.getActionSet(currentActionSet).getAction(j)._id == newId;
      }
      if (holdsIdAlready) {
        currentActionSet++;
      }
	}
	if (currentActionSet==result.getMaximumPath()) {
	  result._actionSets.push_back( ActionSet() );
	}
    result.getActionSet(currentActionSet).addAction(input.getActionSet(i).getAction(0));
  }

  return result;
}
