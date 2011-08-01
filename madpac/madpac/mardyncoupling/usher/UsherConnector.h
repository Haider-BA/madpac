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

#ifndef MADPAC_USHERCONNECTOR_H_
#define MADPAC_USHERCONNECTOR_H_
#include "Domain.h"
#include "molecules/Molecule.h"
#include "UsherContainer.h"
#include "particleContainer/ParticleContainer.h"
#include "particleContainer/handlerInterfaces/ParticlePairsHandler.h"
#include <vector>
#include "madpac/core/utils/Vector.h"
#include "Usher.h"

namespace madpac
{
  namespace mardyncoupling
  {
    namespace usher
    {

      class UsherConnector : public UsherContainer
      {
      public:

        UsherConnector(Domain* domain, ParticleContainer* moleculeContainer,
            int rank, double temp, int cdim);
        virtual
        ~UsherConnector();

        /**
         * Calculates the force and potential of molecule p.
         */
        double
        calcF(Molecule& p, double *minX, double *maxX);

        /**
         * Calculates the velocity of molecule p.
         */
        void
        calcV(Molecule& p);

        /**
         * Returns the density of the md domain.
         */
        double
        getRho();

        /**
         * Deletes a molecule in the region defined by minX and maxX.
         */
        bool
        delP(double* minX, double* maxX);

        /**
         * Adds a molecule in the region defined by minX and maxX.
         */
        bool
        addP(double* minX, double* maxX, double* v);

        /**
         * Sets the potential, which the molecules should have when they are inserted.
         */
        void
        setU0(double u0)
        {
          _usher->setU0(u0);
        }
      private:
        int _uid;
        Usher* _usher;
        Domain* _domain;
        ParticleContainer* _moleculeContainer;
        ParticlePairsHandler* _particlePairsHandler;
        double _cutoffRadiusSquare;
        double _LJCutoffRadiusSquare;
        std::list<Molecule *> mol;

        double* _vtmp;
        double _temperature;
        int _couplingDim;
      };
    }
  }
}
#endif /* MADPAC_USHERCONNECTOR_H_ */
