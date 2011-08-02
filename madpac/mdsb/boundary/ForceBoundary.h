/*
 * ForceBoundary.h
 *
 *  Created on: 28.02.2011
 *      Author: ph
 */

#ifndef FORCEBOUNDARY_H_
#define FORCEBOUNDARY_H_

#include "Boundary.h"

class ForceBoundary : public Boundary
{
public:
      ForceBoundary(ParticleContainer& container, Boundary::axis_type axis,
          bool up);
  virtual
  ~ForceBoundary();
  virtual void
  applyBoundary();
  virtual void
  handleParticle(Particle& p);

  static double
  calcFm(double r)
  {
    double r_w = r;// / 2.95;
    double f_m = 0.0;
    if (r_w < 0.2975)
      {
        f_m = 10.8007 + 0.860717 * r_w - 172.468 * r_w * r_w + 86.9134 * r_w
            * r_w * r_w - 140.214 * r_w * r_w * r_w * r_w;
      }
    else if (r_w < 0.3475)
      {
        f_m = -3621.30 + 44657.4 * r_w - 204844.0 * r_w * r_w + 414123.0 * r_w
            * r_w * r_w - 311674.0 * r_w * r_w * r_w * r_w;
      }
    else if (r_w < 0.3975)
      {
        f_m = 4331.63 - 45188.5 * r_w + 176236.0 * r_w * r_w - 305157.0 * r_w
            * r_w * r_w + 198111.0 * r_w * r_w * r_w * r_w;
      }
    else if (r_w < 1.0)
      {
        f_m = -94.4796 + 576.282 * r_w - 1436.11 * r_w * r_w + 1804.53 * r_w
            * r_w * r_w - 1133.47 * r_w * r_w * r_w * r_w + 283.244 * r_w * r_w
            * r_w * r_w * r_w;
      }
    return f_m;
  }

  static double
  calcUm(double r)
  {
    double r_w = r;// / 2.95;
    double u_m = 0.0;
    if (r_w < 0.2975)
      {
        u_m = -3.61052 + 7.63385 * r_w;
      }
    else if (r_w < 0.4975)
      {
        u_m = 9.75231 - 137.022 * r_w + 571.665 * r_w * r_w - 970.06 * r_w
            * r_w * r_w + 589.472 * r_w * r_w * r_w * r_w;
      }
    else if (r_w < 1.0)
      {
        u_m = -3.45593 + 13.5024 * r_w - 20.1245 * r_w * r_w + 13.5656 * r_w
            * r_w * r_w - 3.48753 * r_w * r_w * r_w * r_w;
      }
    return u_m;
  }
private:
  enum state
  {
    COPY_HALO, COPY_BOUNDARY
  };
  state _state;
};

#endif /* FORCEBOUNDARY_H_ */
