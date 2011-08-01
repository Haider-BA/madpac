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

#include "ReflectingBoundary.h"
#include "molecules/Molecule.h"

namespace madpac
{
  namespace mardyncoupling
  {
    namespace boundary
    {

      ReflectingBoundary::ReflectingBoundary(
          ParticleContainer* moleculeContainer, Domain* domain,
          int streamOutDir, bool movingWall, int dim, bool streamOut) :
        Boundary(moleculeContainer), _domain(domain), _streamOutDir(
            streamOutDir), _movingWall(movingWall), _dim(dim)
      {
        _streamOut = !_movingWall || streamOut;
      }

      ReflectingBoundary::~ReflectingBoundary()
      {
      }

      void
      ReflectingBoundary::applyBoundary()
      {
        //assert(_insertMolecules == 0);
        Molecule* mo;
        std::list<Molecule *> mol;
        _moleculeContainer->getHaloParticles(mol);
        std::list<Molecule *>::iterator m;
        //std::cout<< "BORDER CHECK" << std::endl;
        double v[3];
        double newpos;
        bool setPos = false;
        for (m = mol.begin(); m != mol.end(); m++)
          {
            mo = (*m);

            //std::cout<< "RBOUND CHECKING"<< mo->id() << std::endl;
            setPos = false;
            for (int i = 0; i < _dim; i++)
              {
                if (mo->r(i) < 0.0)
                  {
                    //	std::cout << "dir "<< i << " pos:" <<mo->r(i);
                    v[X] = 0;
                    v[Y] = 0;
                    v[Z] = 0;
                    v[i] = -2.0 * mo->v(i);
                    mo->vadd(v[X], v[Y], v[Z]);
                    newpos = -mo->r(i) - 2 * mo->r(i);
                    setPos = true;
                    mo->move(i, newpos);
                    /*double pos[3];
                     for(int j=0;j<3;j++)
                     pos[j] = mo->r(j);
                     pos[i] =  - mo->r(i);
                     std::cout << "DEL " << mo->id() <<std::endl;
                     _moleculeContainer->deleteMolecule(mo->id(),mo->r(X),mo->r(Y),mo->r(Z));
                     for(int k=0;k<100 && !_dataContainer->addPp(_usherConnector, pos);k++);*/
                    //std::cout << "newpos " <<mo->r(i) << std::endl;
                  }
                else if (mo->r(i) > _domain->getGlobalLength(i))
                  {
                    //std::cout << "dir "<< i << " pos:" <<mo->r(i);
                    if (i != _streamOutDir || !_streamOut)
                      {

                        v[X] = 0;
                        v[Y] = 0;
                        v[Z] = 0;
                        v[i] = -2.0 * mo->v(i);
                        mo->vadd(v[X], v[Y], v[Z]);
                        newpos = -2 * (mo->r(i) - _domain->getGlobalLength(i));
                        setPos = true;

                        mo->move(i, newpos);
                        /*	double pos[3];
                         for(int j=0;j<3;j++)
                         pos[j] = mo->r(j);
                         pos[i] = 2*_domain->getGlobalLength(i) - mo->r(i);
                         std::cout << "DEL " << mo->id() <<std::endl;
                         _moleculeContainer->deleteMolecule(mo->id(),mo->r(X),mo->r(Y),mo->r(Z));
                         for(int k=0;k<100 && !_dataContainer->addPp(_usherConnector, pos);k++);*/

                      }
                    else
                      {
                        //TODO:
#ifdef HDEBUG
                        std::cout << "DELX " << mo->id() <<std::endl;
#endif
                        //newpos = -(mo->r(i)-_domain->getGlobalLength(i))-0.0001;//-2*(mo->r(i)-_domain->getGlobalLength(i));
                        //mo->move(i, newpos);
                        //_moleculeContainer->deleteMolecule(mo->id(),mo->r(X),mo->r(Y),mo->r(Z));
                        //	_dataContainer->incNumInsertMolecules();
                        _domain->setglobalNumMolecules(
                            _domain->getglobalNumMolecules() - 1);

                      }
                    //std::cout << " newpos " <<mo->r(i) << std::endl;


                  }
              }
            /*	if(setPos)
             for(int i=0;i<3;i++)
             mo->move(i,mo->v(i));*/
          }
        _domain->setglobalRho(_domain->getglobalNumMolecules()
            / (_domain->getGlobalLength(0) * _domain->getGlobalLength(1)
                * _domain->getGlobalLength(2)));
        _moleculeContainer->update();
        _moleculeContainer->updateMoleculeCaches();
      }
    }
  }
}
