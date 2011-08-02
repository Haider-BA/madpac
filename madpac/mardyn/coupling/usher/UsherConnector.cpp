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

#include "UsherConnector.h"
//#include "Usher.h"
#ifdef MADPAC_LBMD_COUPLING
#include "mardyn/coupling/MarDynCoupling.h"
#endif
//#include "utils/Vector.h"
#include "MaxwellBoltzmannDistribution.h"
//#include "molecules/Molecule.h"

namespace madpac
{
  namespace mardyncoupling
  {
    namespace usher
    {
      UsherConnector::UsherConnector(Domain* domain,
          ParticleContainer* moleculeContainer, int rank, double temp, int cdim) :
        _domain(domain), _moleculeContainer(moleculeContainer)
      {
        double sigma = 1.0;
        int dim = 3;
        _couplingDim = cdim;
        _usher = new Usher(this, sigma, dim);
        double tmp = _moleculeContainer->getCutoff();
        _cutoffRadiusSquare = tmp * tmp;
        tmp = _moleculeContainer->getLJCutoff();
        _LJCutoffRadiusSquare = tmp * tmp;
        _uid = 1000000 * (rank + 1);
        _temperature = temp;
        _particlePairsHandler = _moleculeContainer->getPairHandler();
      }

      UsherConnector::~UsherConnector()
      {
        delete _usher;
      }

      bool
      UsherConnector::delP(double* minX, double* maxX)
      {
        std::list<Molecule *> mol;
        std::list<Molecule *>::iterator mi;
        int numPart = 0;
        _moleculeContainer->getRegion(minX, maxX, mol);
        for (mi = mol.begin(); mi != mol.end(); mi++)
          {
            numPart++;
          }
        int index = floor(((double) rand() / (double) RAND_MAX
            * (double) (numPart)));
        mi = mol.begin();
        for (int i = 0; i < index; i++)
          {
            _moleculeContainer->deleteMolecule((*mi)->id(), (*mi)->r(0),
                (*mi)->r(1), (*mi)->r(2));
            mi++;
          }
        return true;
      }

      bool
      UsherConnector::addP(double* minX, double* maxX, double* v)
      {
        bool test = false;
        if (_moleculeContainer->getBoundingBoxMin(0) <= minX[0] / 2.0 + maxX[0]
            / 2.0 && minX[0] / 2.0 + maxX[0] / 2.0
            < _moleculeContainer->getBoundingBoxMax(0)
            && _moleculeContainer->getBoundingBoxMin(1) <= minX[1] / 2.0
                + maxX[1] / 2.0 && minX[1] / 2.0 + maxX[1] / 2.0
            < _moleculeContainer->getBoundingBoxMax(1)
            && _moleculeContainer->getBoundingBoxMin(2) <= minX[2] / 2.0
                + maxX[2] / 2.0 && minX[2] / 2.0 + maxX[2] / 2.0
            < _moleculeContainer->getBoundingBoxMax(2))
          {
            _vtmp = v;
            mol.clear();
            bool setmolh = false;
            ;
            double cutoff = _moleculeContainer->getCutoff();
            double _minX[3];
            double _maxX[3];
            for (int i = 0; i < 3; i++)
              {
                if (minX[i] - cutoff < _moleculeContainer->getBoundingBoxMin(i))
                  {
                    _minX[i] = _moleculeContainer->getBoundingBoxMin(i);
                    setmolh = true;
                  }
                else
                  _minX[i] = minX[i] - cutoff;
                if (maxX[i] + cutoff > _moleculeContainer->getBoundingBoxMax(i))
                  {
                    _maxX[i] = _moleculeContainer->getBoundingBoxMax(i);
                    setmolh = true;
                  }
                else
                  _maxX[i] = maxX[i] + cutoff;

              }
            _moleculeContainer->getRegion(_minX, _maxX, mol);

#ifdef MADPAC_UDEBUG
            std::list<Molecule *>::iterator molIter1;
            for(molIter1=mol.begin(); molIter1!=mol.end(); molIter1++)
              {
                Molecule& molecule2 = **molIter1;
                for(int i=0;i<3;i++)
                  {
                    assert(_minX[i]<=molecule2.r(i));
                    assert(_maxX[i]>=molecule2.r(i));
                  }

              }

#endif

            if (setmolh)
              _moleculeContainer->getHaloParticles(mol);

            Molecule p(*(_moleculeContainer->begin()));
            p.scale_v(0);
            p.setid(_uid);
            p.clearD();

            test = _usher->addP(p, minX, maxX);

            if (test)
              {
                p.setXY();
                p.clearFM();
                p.clearD();
                p.clearTersoffNeighbourList();
                p.checkZero();

                //std::cout << "usherConnector::addP: SUCCED "  << p.r(0) << " "<< p.r(1) << " "<< p.r(2)<< " "<< minX[0] << " "<<maxX[0] << " "<<minX[1] << " " << " "<<maxX[1] << " "<<minX[2] << " " << " "<<maxX[2] << " "<< std::endl;
                _moleculeContainer->addParticle(p);

#ifdef MADPAC_UDEBUG
                for(int i=0;i<3;i++)
                  {
                    assert(p.D(i) ==0);
                    assert(p.M(i) == 0);
                    assert(p.F(i) == 0);
                  }
#endif

                _uid++;
              }

            Molecule *mo;

#ifdef MADPAC_UDEBUG
            if(test)
              {
                double u = calcF(p,minX,maxX);
                //	std::cout << "Uhser.add " << u <<   " addPar " << p.r(0) << " "<< p.r(1) << " "<< p.r(2)<< " " << std::endl;
                std::cout << "Usher.add ID: " << p.id() << " U: " << u << " R: " << p.r(0) << " "<< p.r(1) << " "<< p.r(2)<< " V: "<< p.v(0) << " "<< p.v(1) << " "<< p.v(2)<< " F: "<< p.F(0) << " "<< p.F(1) << " "<< p.F(2)<< " " << std::endl;
                //std::cout << "addP " << p.id() << std::endl;
                p.clearFM();
                p.clearD();
                p.setF(zeroVec);
                p.setM(zeroVec);
                p.clearTersoffNeighbourList();
                p.checkZero();
              }
#endif

            for (mo = _moleculeContainer->begin(); mo
                != _moleculeContainer->end(); mo = _moleculeContainer->next())
              {
                Molecule& molecule1 = *mo;

#ifdef MADPAC_UDEBUG
                if(test)
                  {
                    double distanceVector[3];
                    double dd = molecule1.dist2(p, distanceVector);
                    if(dd < 1.0 && molecule1.id() != p.id())
                      {
                        _particlePairsHandler->processPair(p, molecule1, distanceVector, MOLECULE_HALOMOLECULE, dd, (dd < _LJCutoffRadiusSquare));
                        double tmp = _particlePairsHandler->processPair(p, molecule1, distanceVector, MOLECULE_MOLECULE_FLUID, dd, (dd < _LJCutoffRadiusSquare));
                        p.calcFM();
                        std::cout << "Neighbor Molecule: ID: "<< molecule1.id() << " DD: "<< dd << " R: "<< molecule1.r(0) << " "<< molecule1.r(1) << " "<< molecule1.r(2) << " V: "<< molecule1.v(0) << " "<< molecule1.v(1) << " "<< molecule1.v(2)<< "          ///INSERT ID: " << p.id() <<" U: " <<tmp<< " F: "<< p.F(0) << " "<< p.F(1) << " "<< p.F(2) <<std::endl;
                        p.clearFM();
                        p.setF(zeroVec);
                        p.setM(zeroVec);
                        p.clearTersoffNeighbourList();
                      }
                  }
#endif

                molecule1.clearFM();
                molecule1.clearTersoffNeighbourList();
              }

          }
        else
          std::cout << "usherConnector::addP: Out off BBox " << " " << minX[0]
              << " " << maxX[0] << " " << minX[1] << " " << " " << maxX[1]
              << " " << minX[2] << " " << " " << maxX[2] << " " << std::endl;

        return test;
      }

      double
      UsherConnector::calcF(Molecule& p, double *minX, double *maxX)
      {
        double distanceVector[3];
        double zeroVec[3] =
          { 0.0, 0.0, 0.0 };
        std::list<Molecule *>::iterator molIter1;

        p.setF(zeroVec);
        p.setM(zeroVec);
        p.clearTersoffNeighbourList();
        double e = 0.0;

        for (molIter1 = mol.begin(); molIter1 != mol.end(); molIter1++)
          {
            Molecule& molecule2 = **molIter1;
            double dd = molecule2.dist2(p, distanceVector);
            if (dd < _cutoffRadiusSquare)
              {
                double tmp1 = _particlePairsHandler->processPair(p, molecule2,
                    distanceVector, MOLECULE_HALOMOLECULE, dd, (dd
                        < _LJCutoffRadiusSquare));
                //double tmp2 =  _particlePairsHandler->processPair(p, molecule2, distanceVector, MOLECULE_MOLECULE_FLUID, dd, (dd < _LJCutoffRadiusSquare));
                // assert(tmp1 == tmp2);
                e += tmp1;
#ifdef MADPAC_LBMD_COUPLING
                double u = 0;
                double ftmp[3];
                ftmp[2] = 0;
                for (int i = 0; i < _couplingDim; i++)
                  {
                    ftmp[i]
                        = madpac::mardyncoupling::boundary::ForceBoundary::calcFm(
                            p.r(i));
                    ftmp[i]
                        = -madpac::mardyncoupling::boundary::ForceBoundary::calcFm(
                            std::abs(_domain->getGlobalLength(i) - p.r(i)));
                    u
                        += madpac::mardyncoupling::boundary::ForceBoundary::calcUm(
                            p.r(i));
                    u
                        += madpac::mardyncoupling::boundary::ForceBoundary::calcUm(
                            std::abs(_domain->getGlobalLength(i) - p.r(i)));
                    // u+= madpac::mardyncoupling::boundary::ForceBoundary::calcFm(p.r(i));
                    //u+= madpac::mardyncoupling::boundary::ForceBoundary::calcFm(std::abs(_domain->getGlobalLength(i)-p.r(i)));
                  }
                e += u;
                // std::cout << p.r(0) << " "<< p.r(1) << " "<< p.r(2)<<  " "<< u << " " << e << " " << ftmp[0] << " " <<ftmp[1] << " "<< ftmp[2] << std::endl;
                p.Fadd(ftmp);
#endif

              }
          }
        p.calcFM();
        //std::cout << "Usher.fcalc " << e << " " << p.F(0) << " " << p.F(1)<< " " <<p.F(2) << std::endl;
        return e;
      }

      void
      UsherConnector::calcV(Molecule& p)
      {
        //double e = _domain->getGlobalCurrentTemperature();// _energyCalculator.calculateEnergy(*this);
        MaxwellBoltzmannDistribution(p, _vtmp, _temperature);

      }
      double
      UsherConnector::getRho()
      {
        unsigned long numP;
        numP = _moleculeContainer->getNumberOfParticles();

        double v = 1.0;
        for (int i = 0; i < 3; i++)
          v *= _moleculeContainer->getBoundingBoxMax(0)
              - _moleculeContainer->getBoundingBoxMin(0);
        return (double) numP / v;
      }
    }
  }
}
