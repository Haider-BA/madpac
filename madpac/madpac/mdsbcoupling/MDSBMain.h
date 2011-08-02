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

#ifndef MDSBMAIN_H_
#define MDSBMAIN_H_
#include "madpac/mdcoupling/MDMain.h"
#include "madpac/mdsb/MDSB.h"
#include "MDSBSetVelocity.h"
#include "MDSBGetVelocity.h"
#include "configurations/MDSBConfiguration.h"


namespace madpac
{
  namespace mdsbcoupling
  {

    class MDSBMain : public madpac::mdcoupling::MDMain<MDSBMain>
    {
    public:
      MDSBMain(ExchangeDataContainerWDCwithOutput* dc, int dim, MDSBConfiguration *mdsbConfig);
      virtual
      ~MDSBMain();

      virtual MDSBMain*
      init(int numberOfTimesteps);

      virtual
      void
      shutdown();

      virtual
      void
      simStep(int _numMdIterations);

      virtual MDSBMain*
      getSimulation();

    private:
      int iteration;
      log4cxx::LoggerPtr logger;
      MDSB *_mdsb;
      MDSBSetVelocity *_setV;
      MDSBGetVelocity *_getV;
      ExchangeDataContainerWDCwithOutput *_dc;

    };

  }
}
#endif /* MDSBMAIN_H_ */
