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

#ifndef MADPAC_FORCEBOUNDARY_H_
#define MADPAC_FORCEBOUNDARY_H_

#include <iostream>
#include <iomanip>
#include <ctime>

#include "utils/OptionParser.h"
#include "utils/Logger.h"
#include "utils/Testing.h"

#include "parallel/DomainDecompBase.h"
#include "FBoundary.h"

namespace madpac
{
  namespace mardyncoupling
  {
    namespace boundary
    {

      class ForceBoundary : public FBoundary
      {
      public:
        ForceBoundary(ParticleContainer* moleculeContainer, Domain* domain,
            double cutoffRadius, int streamOutDir, int dim);
        virtual
        ~ForceBoundary();

        /**
         * Applies the force boundary to the md domain.
         */
        void
        applyBoundary();

        static double
        calcFm(double r)
        {
          double r_w = r / 2.95;
          double f_m = 0.0;
          if (r_w < 0.2975)
            {
              f_m = 10.8007 + 0.860717 * r_w - 172.468 * r_w * r_w + 86.9134
                  * r_w * r_w * r_w - 140.214 * r_w * r_w * r_w * r_w;
            }
          else if (r_w < 0.3475)
            {
              f_m = -3621.30 + 44657.4 * r_w - 204844.0 * r_w * r_w + 414123.0
                  * r_w * r_w * r_w - 311674.0 * r_w * r_w * r_w * r_w;
            }
          else if (r_w < 0.3975)
            {
              f_m = 4331.63 - 45188.5 * r_w + 176236.0 * r_w * r_w - 305157.0
                  * r_w * r_w * r_w + 198111.0 * r_w * r_w * r_w * r_w;
            }
          else if (r_w < 1.0)
            {
              f_m = -94.4796 + 576.282 * r_w - 1436.11 * r_w * r_w + 1804.53
                  * r_w * r_w * r_w - 1133.47 * r_w * r_w * r_w * r_w + 283.244
                  * r_w * r_w * r_w * r_w * r_w;
            }
          return f_m;
        }

        static double
        calcUm(double r)
        {
          double r_w = r / 2.95;
          double u_m = 0.0;
          if (r_w < 0.2975)
            {
              u_m = -3.61052 + 7.63385 * r_w;
            }
          else if (r_w < 0.4975)
            {
              u_m = 9.75231 - 137.022 * r_w + 571.665 * r_w * r_w - 970.06
                  * r_w * r_w * r_w + 589.472 * r_w * r_w * r_w * r_w;
            }
          else if (r_w < 1.0)
            {
              u_m = -3.45593 + 13.5024 * r_w - 20.1245 * r_w * r_w + 13.5656
                  * r_w * r_w * r_w - 3.48753 * r_w * r_w * r_w * r_w;
            }
          return u_m;
        }

      private:
        //ParticleContainer* _moleculeContainer;

        int _streamOutDir;
        int _dim;

        ParticlePairsHandler* _particlePairsHandler;
        double _LJCutoffRadiusSquare;

        /*		double bBoxMin[3];
         double bBoxMax[3];
         double _borderSize[3];
         */
        bool _fStream;
        bool _RBinFB;
        double _fStreamDamping;

      };
    }
  }
}
#endif /* MADPAC_FORCEBOUNDARY_H_ */
