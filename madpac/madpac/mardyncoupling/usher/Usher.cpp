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

#include "Usher.h"
#include <cmath>
#include <cstdlib>
#include "molecules/Molecule.h"
#include "utils/Logger.h"

//using namespace std;
namespace madpac
{
  namespace mardyncoupling
  {
    namespace usher
    {
      Usher::Usher(UsherContainer *container, double sigma, int dim) :
        _container(container), _sigma(sigma)
      {
        _maxInnerIterations = 100; //todo: config
        _maxOuterIterations = 10000;
        r_sigma = 1.2 * _sigma; //c //todo: 1.2->config
        Uovlp = pow(10.0, 4.0); //k
        srand(time(NULL));
      }

      Usher::~Usher()
      {
      }

      void
      Usher::setU0(double u0)
      {
        _U0 = u0;
      }

      double*
      Usher::getRandPoint(double *x, double *minX, double *maxX)
      {
        x[0] = ((double) rand() * (maxX[0] - minX[0]) / (double) RAND_MAX)
            + minX[0];
        x[1] = ((double) rand() * (maxX[1] - minX[1]) / (double) RAND_MAX)
            + minX[1];
        x[2] = ((double) rand() * (maxX[2] - minX[2]) / (double) RAND_MAX)
            + minX[2];
        return x;
      }

      void
      Usher::setPos(Molecule& p, double pos[3])
      {
        for (int i = 0; i < 3; i++)
          p.setr(i, pos[i]);
      }

      bool
      Usher::addP(Molecule& p, double *minX, double *maxX)
      {
        //double v[] = {0.0,0.0,0.0};
        double x[3];
        setPos(p, getRandPoint(x, minX, maxX));

        //double U0 = _U0; //c


        //double rho = 0.4; //c
        double deltaS0 = 0.1 * pow(_container->getRho(), -1.5); //c
        double u = pow(10.0, 10.0);
        double u_old = u * 10;
        double mf = 0;
        madpac::core::utils::Vector<double, 3> f = 0.1;
        double deltaS = 0.0;
        bool first = true;

        int n = 0;
        int nx = 0;
        //int Nmax = 10000;
        double xi0 = 0.03;
        double xi = 0.5;
        int tries = 0;
        double zeroVec[3] =
          { 0.0, 0.0, 0.0 };

        while (xi > xi0 && n < _maxOuterIterations)
          {
            if (u_old < u || p.r(0) < minX[0] || p.r(0) > maxX[0] || p.r(1)
                < minX[1] || p.r(1) > maxX[1] || p.r(2) < minX[2] || p.r(2)
                > maxX[2] || nx > _maxInnerIterations)
              {

                setPos(p, getRandPoint(x, minX, maxX));

                u_old = 10 * u;
                first = true;
                nx = 0;
                tries++;

              }
            else
              {
                nx++;

                p.clearFM();
                p.clearTersoffNeighbourList();

                u_old = u;
                u = _container->calcF(p, minX, maxX);

                xi = (u - _U0) / abs(_U0);
                for (int i = 0; i < 3; i++)
                  f[i] = p.F(i);
                mf = f.L2Norm();

                if (u < Uovlp || !first)
                  deltaS = std::min(deltaS0,
                      std::max((u - _U0) / mf, 0.0000001)); //c
                else
                  deltaS = r_sigma - pow(4.0 / u, 1.0 / 12.0); //deltaSovlp //k
                first = false;
                for (int i = 0; i < 3; i++)
                  p.setr(i, p.r(i) + f[i] * (deltaS / mf));
              }
            n++;
          }

        _container->calcV(p);
        p.clearFM();
        p.setF(zeroVec);
        p.setM(zeroVec);
        p.clearTersoffNeighbourList();
        /***	p.setU(0);****/

        if (n < _maxOuterIterations)
          {
            //std::cout <<  "P: "<<p.toString()<< " T: "<<tries<< " N: "<<n << std::endl;

            //u = _container->calcF(p,minX,maxX);
            Log::global_log->info() << "Uhser.add " << u << " addPar "
                << p.id() << " " << p.r(0) << " " << p.r(1) << " " << p.r(2)
                << " " << p.v(0) << " " << p.v(1) << " " << p.v(2) << " "
                << std::endl;

            /*p.clearFM();
             p.setF(zeroVec);
             p.setM(zeroVec);
             p.clearTersoffNeighbourList();*/

            return true;
          }
        else
          {

            Log::global_log->info() << "Uhser.add failed " << u << " addPar "
                << p.r(0) << " " << p.r(1) << " " << p.r(2) << " " << p.F(0)
                << " " << p.F(1) << " " << p.F(2) << " " << std::endl;
            return false;
          }

      }
    }
  }
}
