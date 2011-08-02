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

#include "ForceBoundary.h"
#include "molecules/Molecule.h"
#include "particleContainer/ParticleContainer.h"
#include "madpac/PeanoCouplingService.h"
#include "mardyn/coupling/configurations/MarDynCouplingConfiguration.h"

namespace madpac
{
  namespace mardyncoupling
  {
    namespace boundary
    {

      static const double fmplus = 1.0;

      ForceBoundary::ForceBoundary(ParticleContainer* moleculeContainer,
          Domain* domain, double cutoffRadius, int streamOutDir, int dim) :
        FBoundary(moleculeContainer, domain, cutoffRadius), _streamOutDir(
            streamOutDir), _dim(dim)
      {
        _fStream = false;
        _RBinFB = false;

        _fStreamDamping
            = madpac::PeanoCouplingService::getInstance().getConfig()->getMarDynConfig()->getBoundaryConfig()->getFStreamDamping();

        _LJCutoffRadiusSquare = _moleculeContainer->getLJCutoff()
            * _moleculeContainer->getLJCutoff();
        _particlePairsHandler = _moleculeContainer->getPairHandler();

      }

      ForceBoundary::~ForceBoundary()
      {
      }

      void
      ForceBoundary::applyBoundary()
      {

        std::list<Molecule *> mol;
        std::list<Molecule *>::iterator mi;
        Molecule *m;
        double distanceVector[3];
        //double cornerA[3];
        //double cornerB[3];
        double f[3];
        f[0] = 0;

        /*	cornerA[X] = bBoxMin[X];
         cornerA[Y] = bBoxMin[Y];
         cornerA[Z] = bBoxMin[Z];

         cornerB[X] = bBoxMin[X]+_borderSize[X];
         cornerB[Y] = bBoxMax[Y];
         cornerB[Z] = bBoxMax[Z];


         _moleculeContainer->getRegion(cornerA, cornerB,mol);*/
        getLower(X, mol);
        for (mi = mol.begin(); mi != mol.end(); mi++)
          {
            m = (*mi);
            f[X] = calcFm(m->r(X) - bBoxMin[X]) * fmplus;
            f[Y] = 0;
            f[Z] = 0;
            /*	double r =m->r(X)-bBoxMin[X];
             if(r<0.5) {
             std::cout << m->F(0) << " "<<m->F(1) << " "<<m->F(2) << " X"<< std::endl;

             }*/

            m->Fadd(f);
            /*	if(r<0.5) {
             std::cout << r << " " <<m->F(0) << " "<<m->F(1) << " "<<m->F(2) << " X2"<< std::endl;

             }*/
            if (_RBinFB)
              {
                Molecule dummy(*m);
                dummy.move(X, -2 * m->r(X));
                double dd = dummy.dist2(*m, distanceVector);
                if (dd < 2.0)
                  {
                    std::cout << m->F(0) << " " << m->F(1) << " " << m->F(2)
                        << " X" << std::endl;
                    _particlePairsHandler->processPair(*m, dummy,
                        distanceVector, MOLECULE_HALOMOLECULE, dd, (dd
                            < _LJCutoffRadiusSquare));
                    m->calcFM();
                    std::cout << dd << " " << m->F(0) << " " << m->F(1) << " "
                        << m->F(2) << " X2" << std::endl;
                  }

              }

          }

        mol.clear();
        /*cornerA[X] = bBoxMax[X]-_borderSize[X];
         cornerB[X] = bBoxMax[X];

         _moleculeContainer->getRegion(cornerA, cornerB,mol);*/
        getUpper(X, mol);
        for (mi = mol.begin(); mi != mol.end(); mi++)
          {
            m = (*mi);
            f[X] = -calcFm(bBoxMax[X] - m->r(X)) * fmplus;
            if (_streamOutDir == X)
              f[X] *= _fStreamDamping;
            if (!_fStream || _streamOutDir != X)
              m->Fadd(f);
            if (_RBinFB && _streamOutDir != X)
              {
                Molecule dummy(*m);
                dummy.move(X, 2 * (m->r(X) - _domain->getGlobalLength(X)));
                double dd = dummy.dist2(*m, distanceVector);
                _particlePairsHandler->processPair(*m, dummy, distanceVector,
                    MOLECULE_HALOMOLECULE, dd, (dd < _LJCutoffRadiusSquare));
                //std::cout << dummy.F(0) << " "<<dummy.F(1) << " "<<dummy.F(2) << " -X"<< std::endl;

              }
          }

        mol.clear();
        /*	cornerA[X] = bBoxMin[X];
         cornerB[X] = bBoxMax[X];
         cornerB[Y] = bBoxMin[Y]+_borderSize[Y];

         _moleculeContainer->getRegion(cornerA, cornerB,mol);*/
        getLower(Y, mol);
        for (mi = mol.begin(); mi != mol.end(); mi++)
          {
            m = (*mi);
            f[X] = 0;
            f[Y] = calcFm(m->r(Y) - bBoxMin[Y]) * fmplus;
            m->Fadd(f);
            if (_RBinFB)
              {
                Molecule dummy(*m);
                dummy.move(Y, -2 * m->r(Y));
                double dd = dummy.dist2(*m, distanceVector);
                _particlePairsHandler->processPair(*m, dummy, distanceVector,
                    MOLECULE_HALOMOLECULE, dd, (dd < _LJCutoffRadiusSquare));
              }
          }

        mol.clear();
        /*	cornerA[Y] = bBoxMax[Y]-_borderSize[Y];
         cornerB[Y] = bBoxMax[Y];

         _moleculeContainer->getRegion(cornerA, cornerB,mol);*/
        getUpper(Y, mol);
        for (mi = mol.begin(); mi != mol.end(); mi++)
          {
            m = (*mi);
            f[Y] = -calcFm(bBoxMax[Y] - m->r(Y)) * fmplus;
            if (_streamOutDir == Y)
              f[Y] *= _fStreamDamping;
            if (!_fStream || _streamOutDir != Y)
              m->Fadd(f);
            if (_RBinFB && _streamOutDir != Y)
              {
                Molecule dummy(*m);
                dummy.move(Y, 2 * (m->r(Y) - _domain->getGlobalLength(Y)));
                double dd = dummy.dist2(*m, distanceVector);
                _particlePairsHandler->processPair(*m, dummy, distanceVector,
                    MOLECULE_HALOMOLECULE, dd, (dd < _LJCutoffRadiusSquare));
                //	 std::cout << dummy.F(0) << " "<<dummy.F(1) << " "<<dummy.F(2) << " -Y"<< std::endl;

              }
          }
        if (_dim == 3)
          {
            mol.clear();
            /*cornerA[Y] = bBoxMin[Y];
             cornerB[Y] = bBoxMax[Y];
             cornerB[Z] = bBoxMin[Z]+_borderSize[Z];

             _moleculeContainer->getRegion(cornerA, cornerB,mol);*/
            getLower(Z, mol);

            for (mi = mol.begin(); mi != mol.end(); mi++)
              {
                m = (*mi);
                f[Y] = 0;
                f[Z] = calcFm(m->r(Z) - bBoxMin[Z]) * fmplus;
                m->Fadd(f);
                if (_RBinFB)
                  {
                    Molecule dummy(*m);
                    dummy.move(Z, -2 * m->r(Z));
                    double dd = dummy.dist2(*m, distanceVector);
                    _particlePairsHandler->processPair(*m, dummy,
                        distanceVector, MOLECULE_HALOMOLECULE, dd, (dd
                            < _LJCutoffRadiusSquare));
                    // std::cout << dummy.F(0) << " "<<dummy.F(1) << " "<<dummy.F(2) << " "<< std::endl;
                  }
              }

            mol.clear();
            /*cornerA[Z] = bBoxMax[Z]-_borderSize[Z];
             cornerB[Z] = bBoxMax[Z];

             _moleculeContainer->getRegion(cornerA, cornerB,mol);*/
            getUpper(Z, mol);
            for (mi = mol.begin(); mi != mol.end(); mi++)
              {
                m = (*mi);
                f[Z] = -calcFm(bBoxMax[Z] - m->r(Z)) * fmplus;
                if (_streamOutDir == Z)
                  f[Z] *= _fStreamDamping;
                if (!_fStream || _streamOutDir != Z)
                  m->Fadd(f);
                if (_RBinFB && _streamOutDir != Z)
                  {
                    Molecule dummy(*m);
                    dummy.move(Z, 2 * (m->r(Z) - _domain->getGlobalLength(Z)));
                    double dd = dummy.dist2(*m, distanceVector);
                    _particlePairsHandler->processPair(*m, dummy,
                        distanceVector, MOLECULE_HALOMOLECULE, dd, (dd
                            < _LJCutoffRadiusSquare));

                  }
              }
          }

      }
    }
  }
}
