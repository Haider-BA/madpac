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

#ifndef MADPAC_USHER_H_
#define MADPAC_USHER_H_
#include "madpac/core/utils/Vector.h"
#include "molecules/Molecule.h"
#include "UsherContainer.h"
namespace madpac
{
  namespace mardyncoupling
  {
    namespace usher
    {
      class Usher
      {

      public:
        Usher(UsherContainer *container, double sigma, int dim);
        virtual
        ~Usher();

        /**
         * Adds a molecule in the region defined by minX and maxX.
         */
        bool
        addP(Molecule& p, double *minX, double *maxX);

        /**
         * Sets the potential, which the molecules should have when they are inserted.
         */
        void
        setU0(double u0);

      private:
        UsherContainer *_container;
        double _U0;
        double _sigma;
        //int _dim;
        int _maxOuterIterations;
        int _maxInnerIterations;
        double r_sigma;
        double Uovlp;
        double*
        getRandPoint(double *x, double *minX, double *maxX);
        void
        setPos(Molecule& p, double pos[3]);

      };
    }
  }
}
#endif /* MADPAC_USHER_H_ */
