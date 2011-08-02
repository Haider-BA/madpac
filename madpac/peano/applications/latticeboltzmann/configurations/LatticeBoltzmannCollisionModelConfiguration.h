// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _LATTICEBOLTZMANN_LATTICEBOLTZMANNCOLLISIONMODELCONFIGURATION_H_
#define _LATTICEBOLTZMANN_LATTICEBOLTZMANNCOLLISIONMODELCONFIGURATION_H_
#include "tarch/logging/Log.h"
//#include "tarch/la/Utilities.h"

#include "peano/utils/Dimensions.h"
#include "tarch/irr/XML.h"
#include "peano/applications/latticeboltzmann/LatticeBoltzmannDefinitions.h"
#include <vector>


namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace configurations {
        class LatticeBoltzmannCollisionModelConfiguration;
      }
    }
  }
}


/**
 * reads in the configuration of the collision model. Since there are different collision models (i.e. BGK, Fluctuating
 * lattice Boltzmann model etc), different sorts of definitions have to be examined. Take care: The relaxation time tau
 * which originally is used for BGK is already read in during the main lattice Boltzmann configuration part (since there
 * is a direct relation to the viscosities)!
 *
 * @author Philipp Neumann
 *
 */
class peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration{
  public:

    LatticeBoltzmannCollisionModelConfiguration();
    virtual ~LatticeBoltzmannCollisionModelConfiguration();


    /** handles the corresponding tag (sam as parseSubtag, but shall not be overloaded) */
    void handleSubtag(tarch::irr::io::IrrXMLReader* xmlReader);

    /** parses the configuration input */
    virtual void parseSubtag(tarch::irr::io::IrrXMLReader* xmlReader);

    /** computes all new parameters that have not been read in so far; this function also triggers which collision-model-parameters have
     *  to be computed
     */
    void computeUndefinedValues();

    /** checks the configuration and sets the _isValid variable */
    void checkConfiguration() const;

    /** returns the name of the specified collision model */
    std::string getCollisionModelName() const;

    // -------------------- BGK input ----------------------------- //
    /** true if this is a BGK configuration and false otherwise */
    bool isBGKConfiguration() const;

    // --------------------- BGK input (end) --------------------- //

    // -------------------- Fluctuating lattice Boltzmann input -------------------//

    /** true if this is a fluctuating lattice Boltzmann configuration and false otherwise */
    bool isFluctuatingLatticeBoltzmannConfiguration() const;

    /** parses the configuration input in case that the fluctuating lattice Boltzmann model is defined */
    void parseFluctuatingLatticeBoltzmannConfiguration(tarch::irr::io::IrrXMLReader* xmlReader);

    /** computes parameters for the fluctuating lattice Boltzmann model that have not been defined yet */
    void computeUndefinedFluctuatingLatticeBoltzmannValues();

    /** checks the configuration, i.e. if all parameters could be set and respectively sets the class variable _isValid */
    void checkFluctuatingLatticeBoltzmannConfiguration() const;

    /** initialise mesh size */
    void setDx(double val);

    /** initialise timestep */
    void setDt(double val);

    /** initialise density */
    void setDensity(double val);

    /** returns relaxation time of ghost mode @param i in the fluctuating lattice Boltzmann model */
    double getFluctuatingLatticeBoltzmannRelaxationTime(int i) const;

    /** returns the number of ghost mode relaxation times for the fluctuating lattice Boltzmann model */
    int getFluctuatingLatticeBoltzmannNumberRelaxationTimes() const;

    /** set/ get Boltzmann's constant */
    void setBoltzmannConstant(double val);
    double getBoltzmannConstant() const;

    /** set/get nondimensionalised Boltzmann constant */
    void setBoltzmannConstantL(double val);
    double getBoltzmannConstantL() const;

    /** set/get temperature */
    void setTemperature(double val);
    double getTemperature() const;

    /** get nondimensionalised temperature */
    double getTemperatureL() const;

    /** set/ get bulk viscosity */
    void setBulkViscosity(double val);
    double getBulkViscosity() const;

    /** set/ get nondimensionalised bulk viscosity */
    void setBulkViscosityL(double val);
    double getBulkViscosityL() const;

    // -------------------- Fluctuating lattice Boltzmann input (end) -------------//

    // -------------------- multiple-relaxation-time model from d'Humieres et al. (start) --------------- //
    /** true if this is a multiple-relaxation-time model configuration as defined by d'Humieres; false otherwise */
    bool isMRTHumieresConfiguration() const;

    /** parses the configuration input in case that the MRT model is defined */
    void parseMRTHumieresConfiguration(tarch::irr::io::IrrXMLReader* xmlReader);

    /** computes parameters for the MRT model that have not been defined yet */
    void computeUndefinedMRTHumieresValues();

    /** checks the configuration, i.e. if all parameters could be set and respectively sets the class variable _isValid */
    void checkMRTHumieresConfiguration() const;

    /** returns relaxation time of ghost mode @param i in the MRT model */
    double getMRTHumieresRelaxationTime(int i) const;

    /** returns the number of ghost mode relaxation times for the MRT model */
    int getMRTHumieresNumberRelaxationTimes() const;

    // ---------------------- multiple-relaxation-time model definition (end) ---------------------- //



    /** @returns the _isValid flag */
    bool isValid() const;

    std::string toXMLString() const;

    std::string getTag() const;

  public:
    static const std::string TAG;
    /** name of the collision model */
    static const std::string COLLISION_MODEL_NAME;

    // -------------------- BGK input -------------------//

    /** name of the BGK-collision model */
    static const std::string BGK_NAME;


    // -------------------- BGK input (end) -------------------//

    // -------------------- Fluctuating lattice Boltzmann input -------------------//

    /** name of the fluctuating lattice Boltzmann collision model */
    static const std::string FLUCTUATING_LATTICE_BOLTZMANN_NAME;

    /** ghost-mode relaxation times */
    static const std::string FLUCTUATING_LATTICE_BOLTZMANN_RELAXATION_TIMES;

    static const std::string TEMPERATURE;
    static const std::string TEMPERATURE_L;
    static const std::string BOLTZMANN_CONSTANT;
    static const std::string BOLTZMANN_CONSTANT_L;
    static const std::string BULK_VISCOSITY;
    static const std::string BULK_VISCOSITY_L;

    /** number of unknown parameters for fluctuating lattice Boltzmann simulations; this number incl.
     *  functionality has to be added for EACH NEW collision model!
     */
    static const int _numberOfVariablesForFluctuatingLatticeBoltzmann;

    // -------------------- Fluctuating lattice Boltzmann input (end) -------------------//

    // -------------------- multiple-relaxation-time input (start) ----------------- //

    /** name of the fluctuating lattice Boltzmann collision model */
    static const std::string MRT_HUMIERES_NAME;

    /** ghost-mode relaxation times */
    static const std::string MRT_HUMIERES_RELAXATION_TIMES;

    /** number of unknown parameters for fluctuating lattice Boltzmann simulations; this number incl.
     *  functionality has to be added for EACH NEW collision model!
     */
    static const int _numberOfVariablesForMRTHumieres;

    // -------------------- multiple-relaxation-time input (end) ----------------- //

  protected:
    /** true if collision model configuration is valid and false otherwise */
    bool _isValid;

    /** name of the collision model */
    std::string _name;

    // -------------------- BGK input --------------------------- //

    /** true if the current configuration corresponds to the input of the BGK scheme
     *  and false otherwise
     */

    bool _isBGKConfiguration;

    // -------------------- Fluctuating lattice Boltzmann input -------------------//

    /** true if the current configuration corresponds to the input of the fluctuating lattice Boltzmann scheme
     *  and false otherwise
     */
    bool _isFluctuatingLatticeBoltzmannConfiguration;

    /** stores relaxation times for the fluctuating lattice Boltzmann model, i.e. for the
     *  corresponding ghost modes
     */
    std::vector<double> _fluctuating_LB_relaxationTimes;
    /** the number of additional relaxation times in the fluctuating lattice Boltzmann model */
    int _fluctuating_LB_numberRelaxationTimes;

    double _dx;
    bool _isDefinedDx;
    double _dt;
    bool _isDefinedDt;
    double _density;
    bool _isDefinedDensity;

    /** Boltzmann's constant */
    double _k_B;
    bool _isDefinedKB;

    /** nondimensionalised lattice Boltzmann constant */
    double _k_B_L;
    bool _isDefinedKBL;

    /** temperature */
    double _temp;
    bool _isDefinedTemperature;

    /** nondimensionalised temperature (scaled to 1.0) */
    static const double _temp_L;

    /** bulk viscosity */
    double _bulk_viscosity;
    bool _isDefinedBulkViscosity;

    /** nondimensionalised bulk viscosity */
    double _bulk_viscosity_L;
    bool _isDefinedBulkViscosityL;

    // help variables
    // dx*dx/dt
    double _dx2Dt;
    // dt*dt/(dx*dx*dx*dx*dx)
    double _dt2Dx2PlusD;
    bool _isDefinedDxDt;
    // dt*dt/(dx*dx*dx*dx*dx*density)
    double _dt2Dx2PlusDDensity;
    bool _isDefinedDt2Dx2PlusDDensity;

    // k_B*T
    double _kBT;
    bool _isDefinedKBT;

    // -------------------- Fluctuating lattice Boltzmann input (end) -------------------//


    // -------------------- multiple-relaxation-time input -------------------//

    /** true if the current configuration corresponds to the input of the MRT scheme
     *  and false otherwise
     */
    bool _isMRTHumieresConfiguration;

    /** stores relaxation times for the MRT model, i.e. for the
     *  corresponding ghost modes
     */
    std::vector<double> _MRT_Humieres_relaxationTimes;
    /** the number of additional relaxation times in the MRT model */
    int _MRT_Humieres_numberRelaxationTimes;

    // -------------------- multiple-relaxation-time input (end) -------------------//


  private:
    /** for logging */
    static tarch::logging::Log _log;
};
#endif // _LATTICEBOLTZMANN_LATTICEBOLTZMANNCOLLISIONMODELCONFIGURATION_H_
