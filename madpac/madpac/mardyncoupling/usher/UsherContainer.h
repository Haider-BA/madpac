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

#ifndef MADPAC_USHERCONTAINER_H_
#define MADPAC_USHERCONTAINER_H_
#include "madpac/mdcoupling/UsherAlgorithm.h"

namespace madpac
{
  namespace mardyncoupling
  {
    namespace usher
    {
      class UsherContainer : public madpac::mdcoupling::UsherAlgorithm
      {

      public:
        virtual double
        calcF(Molecule& p, double *minX, double *maxX) = 0;
        virtual void
        calcV(Molecule& p) = 0;
        //virtual void addParticle(Particle& p) = 0;
        virtual double
        getRho() = 0;

      };
    }
  }
}
#endif /* MADPAC_USHERCONTAINER_H_	 */
