// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _LATTICEBOLTZMANN_LATTICEBOLTZMANNCONFIGURATION_H_
#define _LATTICEBOLTZMANN_LATTICEBOLTZMANNCONFIGURATION_H_

#include "peano/utils/Dimensions.h"
#include "tarch/logging/Log.h"
#include "tarch/irr/XML.h"
#include "peano/applications/latticeboltzmann/LatticeBoltzmannDefinitions.h"
#include "string.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace configurations {

        class LatticeBoltzmannConfiguration;
      }
    }
  }
}


/** reads basic lattice Boltzmann configuration tags
 *
 * @author Philipp Neumann
 *
 */
class peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration {
  public:

    LatticeBoltzmannConfiguration();
    ~LatticeBoltzmannConfiguration();

    /** parses the configuration input */
    void parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader);

    /** set mesh size on reference level */
    void setDx(double dx);

    /** tries to compute values that have not been defined yet. At this, several equations defining relations between different
     *  parameters are taken and broken up into new equations of the form c = f(a,b). Thus, it is determined wether a and b are
     *  already defined and - if yes - value c is computed. In addition, a = g(b,c) and b = h(a,c) are examined. Since it might
     *  happen that some values cannot be computed in the first run since some others are still missing, the parseSubtag() function
     *  iterates over this function n-times where n is (approx.) the number of unkown parameters.
     */
    bool computeUndefinedValues();

    /** returns the _isValid flag */
    bool isValid() const;

    /** checks the configuration after input (-> parseSubtag() ) and parameter computation (-> computeUndefinedValues) */
    void checkConfiguration();

    // get()-functions
    double getTau() const;
    double getViscosity() const;
    double getViscosityL() const;
    double getDensity() const;
    tarch::la::Vector<DIMENSIONS,double> getGravity() const;
    tarch::la::Vector<DIMENSIONS,double> getGravityL() const;
    double getDx() const;
    double getDt() const;
    int getNumberOfTimesteps() const;
    double getTimeInterval() const;

    // check if the corresponding parameters have already been defined
    bool isDefinedDx() const;
    bool isDefinedDt() const;
    bool isDefinedDensity() const;

    /** true if performance shall be measured for each timestep */
    bool measurePerformance() const;

  public:
    static const std::string TAG;
    static const std::string TAU;
    static const std::string VISCOSITY;
    static const std::string VISCOSITY_L;
    static const std::string DENSITY;
    static const std::string GRAVITY;
    static const std::string GRAVITY_L;
    static const std::string DT;
    static const std::string NUMBER_OF_TIMESTEPS;
    static const std::string TIME_INTERVAL;
    static const std::string PERFORMANCE_MEASUREMENT;

  private:
    /** true, if configuration is valid and false otherwise */
    bool _isValid;

    /** relaxation time */
    double _tau;

    bool _isDefinedTau;

    /** fluid viscosity */
    double _viscosity;

    bool _isDefinedViscosity;

    /** nondimensionalised lattice viscosity */
    double _viscosity_L;

    bool _isDefinedViscosityL;

    /** fluid density */
    double _density;

    bool _isDefinedDensity;

    /** physical meshsize */
    double _dx;

    bool _isDefinedDx;

    /** physical timestep */
    double _dt;

    bool _isDefinedDt;

    /** number of timesteps */
    int _numberOfTimesteps;

    bool _isDefinedNumberOfTimesteps;

    /** time interval to be simulated */
    double _timeInterval;

    bool _isDefinedTimeInterval;

    /** mesh size in lattice units (always scaled to 1.0 on trivialgrid) */
    static const double _dx_L;

    /** timestep size in lattice units (always scaled to 1.0 on trivialgrid) */
    static const double _dt_L;

    /** nondimensionalised density (always scaled to 1.0 on trivialgrid) */
    static const double _density_L;

    // equations the variables are based on...
    //     v_L = 1/3 * (tau - 0.5)
    //       v = v_L * dx * dx / dt
    //       u = u_L * dx / dt
    //       Re = u * L / v
    //       L = L_L * dx
    //       t = numberTimesteps * dt

    // help variable declarations
    double _viscosity_L_DxDx;
    bool _isDefinedViscosityLDxDx;

    // gravity
    bool _isDefinedGravityL;
    bool _isDefinedGravity;
    tarch::la::Vector<DIMENSIONS,double> _gravity;
    tarch::la::Vector<DIMENSIONS,double> _gravity_L;

    /** true if the performance shall be measured */
    bool _measurePerformance;

    /** for logging */
    static tarch::logging::Log _log;
};



#endif // _LATTICEBOLTZMANN_LATTICEBOLTZMANNCONFIGURATION_H_

