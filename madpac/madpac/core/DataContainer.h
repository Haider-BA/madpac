/***************************************************************************
 *   Copyright (C) 2011 by Peter Hoffmann <peter.hoffmann@mytum.de>        *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef MADPAC_DATACONTAINER_H_
#define MADPAC_DATACONTAINER_H_
#include "utils/Array3D.h"
#include <cassert>

class DataContainer
{
public:
  static const int velocityX = 0;
  static const int velocityY = 1;
  static const int velocityZ = 2;
  static const int rho = 3;
  static const int _dataSize = 4;

  DataContainer(int dim);
  virtual
  ~DataContainer();

  /**
   * Return the dimension of peano and the coupling.
   */
  int
  getDim()
  {
    return _dim;
  }

  /**
   * Returns the number of molecules, which left the domain and should be inserted again.
   */
  int
  getNumInsertMolecules()
  {
    return _insertMolecules;
  }

  /**
   * Returns the number of molecules, which left the domain and should be inserted again.
   */
  int
  getNumInsertMoleculesWOC()
  {
    return _insertMolecules;
  }

  /**
   * Increases the number of molecules, which left the domain and should be inserted again.
   */
  void
  incNumInsertMolecules()
  {
    _insertMolecules++;
  }

  /**
   * Increases the number of molecules by i, which left the domain and should be inserted again.
   */
  void
  addNumInsertMolecules(int i);

  /**
   * Decreases the number of molecules, which left the domain and should be inserted again.
   */
  void
  decNumInsertMolecules()
  {
    _insertMolecules--;
  }

protected:

  int
  getArraySize()
  {
    return _size[X] * _size[Y] * _size[Z];
  }

  static const int LB = 1;
  static const int MD = 2;
  static const int ONC = 3;
  static const int MNC = 4;
  static const int INC = 5;

  static const int X = 0;
  static const int Y = 1;
  static const int Z = 2;
  static const int _maxDim = 3;

  int _dim;
  double _cellSize;

  double _bBoxMin[3];
  double _bBoxMax[3];

  int* _color;

  int* _cellType;
  int _insertMolecules;
  //	int _insertMoleculeCorretion;
  int _numColors;
  //bool _densityCoupling;
  int _lbOffset[3];
  int _size[3];

  int
  calcIndexX(double pos[3]);
  int
  calcIndexV(int x, int y, int z);
  int
  calcIndexLBX(int ipos[3]);
  //int calcIndexLB(int ipos[3], bool border);
  int
  calcIndexX(int x, int y, int z);
  //int calcIndexLB(int cellIndex[3]);
private:

  int _borderSize[3];

  //bool* _isInBorder;
  int _lbLowerOffset[3];
  int _lbUpperOffset[3];
  int _outerNoCouplingLowerCorner[3];
  int _outerNoCouplingUpperCorner[3];
  int _lbCouplingLowerCorner[3];
  int _lbCouplingUpperCorner[3];
  int _midNoCouplingLowerCorner[3];
  int _midNoCouplingUpperCorner[3];
  int _mdCouplingLowerCorner[3];
  int _mdCouplingUpperCorner[3];
  int _innerNoCouplingLowerCorner[3];
  int _innerNoCouplingUpperCorner[3];

};

#endif /* MADPAC_DATACONTAINER_H_ */
