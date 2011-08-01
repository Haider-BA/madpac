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

#ifndef OFFSETARRAY_H_
#define OFFSETARRAY_H_
#include <vector>
#include "Vector.h"

template <typename type>
class OffsetArray {

private:
	int xoffset;
	int yoffset;
	int xsize;
	int ysize;
	type **data;

public:
	OffsetArray(int x, int y) : xsize(x), ysize(y){
		xoffset = 0;
		yoffset = 0;
		data = new type*[x];
		for(int i=0;i<x;i++) {
			data[i] = new type[y];
			for(int j=0;j<y;j++)
				data[i][j] = 0.0;
		}
	}

	~OffsetArray() {
		for(int i=0;i<xsize;i++)
			delete[] data[i];
		delete[] data;
	}

	void modOffset(utils::Vector<double,2> offsetMod) {
		xoffset = (xsize+xoffset-(int)offsetMod[0])%xsize;
		yoffset = (ysize+yoffset-(int)offsetMod[1])%ysize;
	}

	type& get(int x, int y) {
		return data[(x+xoffset)%xsize][(y+yoffset)%ysize];
	}
};

#endif /* OFFSETARRAY_H_ */
