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

#ifndef MADPAC_EXCHANGEDATACONTAINER_H_
#define MADPAC_EXCHANGEDATACONTAINER_H_
#include "DataContainer.h"
#ifdef MADPAC_MARDYNCOUPLING
#include "parallel/DomainDecompBase.h"
#endif
#include "utils/Vector.h"

class ExchangeDataContainer : public DataContainer
{
public:

  ExchangeDataContainer(int dim, int mdIterations, int lbIterations);

  virtual
  ~ExchangeDataContainer();


  /**
   * Syncronizes the md data between the MPI processes.
   */
  void
  syncMD();

  /**
   * Syncronizes the lb data between the MPI processes.
   */
  void
  syncLB();
  /**
   * Returns if LB->MD coupling is enabled.
   */
  bool
  lb2md()
  {
	  bool b = false;

	  if(_ilb2md != 0 && _timestep%_ilb2md == 0)
		  b = true;
    return b;
  }

  /**
   * Returns if MD->LB coupling is enabled.
   */
  bool
  md2lb()
  {
	  bool b = false;

	  if(_imd2lb != 0)
		  b = true;
    return b;
  }

  /**
   * Adds the data/velocity of one particle at position pos to the corresponding cell.
   */
  void
  addMDRegion(double *data, double pos[3]);

  /**
   * Returns the lb data/velocity of the cell in which the position pos is.
   */
  bool
  getLBData4MD(double *data, double pos[3]);

  /**
   * Returns the md data/velocity of the cell in which the position pos is.
   */
  void
  getMDData4MD(double *data, double pos[3]);

  /**
   * Adds the lb velocity to the cell cellIndex.
   */
  virtual void
  setLBRegion(double *data, int cellIndex[3]);

  /**
   * Returns the md data/velocity of the cell cellIndex.
   */
  bool
  getMDData4LB(double *data, int cellIndex[3]);

  /**
   * Sets the velocities of the md border region to zero.
   */
  virtual void
  setMDBorderZero();


  /**
   * Syncronizes the global energy e between the md MPI processes.
   */
  void
  syncE(double *e);

  /**
   * Syncronizes the global velocity v and the number of samples numSamples between the (MarDyn) MPI processes.
   */
  unsigned long
  syncV(double *v, unsigned long numSamples);


  /**
   * Returns the rank of the (MarDyn) MPI process.
   */
  int
  getRank();

  void
  finishMDts();

protected:
#ifdef MADPAC_MARDYNCOUPLING
  DomainDecompBase* _domainDecomposition;
#endif

  double* _mdDataWriteTmp;
  double* _lbDataWrite;
  double* _mdDataRead;

  double* _lbDataRead;
  int _imd2lb;
  int _ilb2md;
  int _numProcs;
  int _rank;

  int _numMDiterations;
  int _numLBiterations;
  int _timestep;

  virtual void
  setZeroLB();

  virtual void
  setZeroMDSum();

  virtual void
  setZeroMDTmp();

private:

  double* _mdDataWriteSum;

};

#endif /* MADPAC_EXCHANGEDATACONTAINER_H_ */
