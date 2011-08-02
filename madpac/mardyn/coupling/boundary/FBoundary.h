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

#ifndef MADPAC_FBOUNDARY_H_
#define MADPAC_FBOUNDARY_H_

#include "Boundary.h"
#include "Domain.h"

namespace madpac
{
  namespace mardyncoupling
  {
    namespace boundary
    {

      class FBoundary : public madpac::mardyncoupling::boundary::Boundary
      {
      public:
        FBoundary(ParticleContainer* moleculeContainer, Domain* domain,
            double cutoffRadius);
        virtual
        ~FBoundary();
      protected:
        Domain* _domain;

        /**
         * Stores the molecules in the lower boundary region in dimension dim in mol.
         */
        void
        getLower(int dim, std::list<Molecule *> mol);

        /**
         * Stores the molecules in the upper boundary region in dimension dim in mol.
         */
        void
        getUpper(int dir, std::list<Molecule *> mol);
        double bBoxMin[3];
        double bBoxMax[3];

      private:

        double _borderSize[3];
      };

    }
  }
}
#endif /* MADPAC_FBOUNDARY_H_ */
