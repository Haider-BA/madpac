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

#ifndef MADPAC_BOUNDARY_H_
#define MADPAC_BOUNDARY_H_
#include "particleContainer/ParticleContainer.h"

namespace madpac
{
  namespace mardyncoupling
  {
    namespace boundary
    {

      class Boundary
      {
      public:

        /**
         * Applies the boundary to the md domain.
         */
        virtual void
        applyBoundary() = 0;
        static const int X = 0;
        static const int Y = 1;
        static const int Z = 2;
        static const int NOSTREAM = 3;
        Boundary(ParticleContainer* moleculeContainer);
        virtual
        ~Boundary();

      protected:

        ParticleContainer* _moleculeContainer;

      };
    }
  }
}
#endif /* MADPAC_BOUNDARY_H_ */
