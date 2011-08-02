/*
 * OffsetArray.h
 *
 *  Created on: 10.03.2011
 *      Author: ph
 */

#ifndef OFFSETARRAY_H_
#define OFFSETARRAY_H_
#include <vector>
#include "utils/Vector.h"

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

	void modOffset(utils::Vector<double,2> offsetMod) {
		xoffset = (xsize+xoffset-(int)offsetMod[0])%xsize;
		yoffset = (ysize+yoffset-(int)offsetMod[1])%ysize;
	}

	type& get(int x, int y) {
		return data[(x+xoffset)%xsize][(y+yoffset)%ysize];
	}
};

#endif /* OFFSETARRAY_H_ */
