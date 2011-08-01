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

#ifndef MADPAC_ARRAY3D_H_
#define MADPAC_ARRAY3D_H_

#include <cmath>
#include <sstream>
#include <iostream>
#include "Vector.h"

namespace madpac
{
  namespace core
  {
    namespace utils
    {
      template<typename type>
        class Array3D;
    }
  }
}

template<typename type>
  class madpac::core::utils::Array3D
  {

  private:

    type *_data;
    Vector<int, 3> _size;
    int _dataSize;

    static const int X = 0;
    static const int Y = 1;
    static const int Z = 2;

  public:

    Array3D(Vector<int, 3> length)
    {
      _dataSize = 1;
      _size = length;
      _data = new type[length[X] * length[Y] * length[Z] * _dataSize];
    }

    Array3D(Vector<int, 3> length, int dataSize)
    {
      _dataSize = dataSize;
      _size = length;
      _data = new type[length[X] * length[Y] * length[Z] * _dataSize];
    }

   ~Array3D() {
     delete[] _data;
   }

    type&
    operator[](int i)
    {
      return _data[i];
    }

    const type&
    operator[](int i) const
    {
      return _data[i];
    }

    Vector<int, 3>
    getSize()
    {
      return _size;
    }

    int
    getLength()
    {
      return _size[X] * _size[Y] * _size[Z] * _dataSize;
    }

    int
    getDataSize()
    {
      return _dataSize;
    }

    int
    getIndex(Vector<int, 3> index)
    {
      return ((index[X] * _size[Y] + index[Y]) * _size[Z] + index[Z]);
    }

    void
    get(int index, type *data)
    {

      for (int i = 0; i < _dataSize; i++)
        {
          data[i] = _data[index + i];
        }
    }

    void
    set(int index, type *data)
    {

      for (int i = 0; i < _dataSize; i++)
        {
        _data[index + i] = data[i];
        }
    }

    void
    get(Vector<int, 3> index, type *data)
    {
      int i = getIndex(index);
      get(i, data);
    }

    void
    set(Vector<int, 3> index, type *data)
    {
      int i = getIndex(index);
      set(i, data);
    }

  };

#endif /* MADPAC_ARRAY3D_H_ */
