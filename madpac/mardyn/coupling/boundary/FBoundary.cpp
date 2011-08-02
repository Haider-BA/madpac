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

#include "FBoundary.h"
namespace madpac
{
  namespace mardyncoupling
  {
    namespace boundary
    {
      FBoundary::FBoundary(ParticleContainer* moleculeContainer,
          Domain* domain, double cutoffRadius) :
        Boundary(moleculeContainer), _domain(domain)
      {
        for (int i = 0; i < 3; i++)
          {
            bBoxMin[i] = 0;
            bBoxMax[i] = domain->getGlobalLength(i);
            _borderSize[i] = cutoffRadius;
          };
      }

      FBoundary::~FBoundary()
      {
      }

      void
      FBoundary::getLower(int dir, std::list<Molecule *> mol)
      {
        double cornerA[3];
        double cornerB[3];
        cornerA[X] = bBoxMin[X];
        cornerA[Y] = bBoxMin[Y];
        cornerA[Z] = bBoxMin[Z];

        cornerB[X] = bBoxMax[X];
        cornerB[Y] = bBoxMax[Y];
        cornerB[Z] = bBoxMax[Z];

        cornerB[dir] = bBoxMin[dir] + _borderSize[dir];

        _moleculeContainer->getRegion(cornerA, cornerB, mol);
      }

      void
      FBoundary::getUpper(int dir, std::list<Molecule *> mol)
      {
        double cornerA[3];
        double cornerB[3];
        cornerA[X] = bBoxMin[X];
        cornerA[Y] = bBoxMin[Y];
        cornerA[Z] = bBoxMin[Z];

        cornerB[X] = bBoxMax[X];
        cornerB[Y] = bBoxMax[Y];
        cornerB[Z] = bBoxMax[Z];

        cornerA[dir] = bBoxMax[dir] - _borderSize[dir];

        _moleculeContainer->getRegion(cornerA, cornerB, mol);
      }

    }
  }
}
