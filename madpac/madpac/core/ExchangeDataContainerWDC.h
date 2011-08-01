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

#ifndef MADPAC_EXCHANGEDATACONTAINERWDC_H_
#define MADPAC_EXCHANGEDATACONTAINERWDC_H_

#include "ExchangeDataContainer.h"
#include "madpac/mdcoupling/UsherAlgorithm.h"



class ExchangeDataContainerWDC : public ExchangeDataContainer
{
public:
  ExchangeDataContainerWDC(int dim,
      bool lb2md, bool md2lb, int mdIterations, int lbIterations);
  virtual
  ~ExchangeDataContainerWDC();



  /**
   * Adjusts the density of the md domain. Used if density coupling is disabled.
   */
  void
  adjustMDRho(madpac::mdcoupling::UsherAlgorithm* usher,
      int iteration, double md2ms);

  //bool addPp(UsherConnector* usher, double ppos[3]);

  /**
   * Adjusts the density of the md domain. Used if density coupling is enabled.
   */
  bool
  addPminLBrho(madpac::mdcoupling::UsherAlgorithm* usher,
      int iteration, double md2ms, double* BBMin, double* BBMax,
      double *vtmpG);

  /**
   * Initializes the md border region to zero.
   */
  virtual void
  setMDBorderZero();

protected:


  bool
  addP(madpac::mdcoupling::UsherAlgorithm* usher, int minPos[3],
      double vtmp[3], double* BBMin, double* BBMax);

  bool* _particleInserted;

};

#endif /* MADPAC_EXCHANGEDATACONTAINERWDC_H_ */
