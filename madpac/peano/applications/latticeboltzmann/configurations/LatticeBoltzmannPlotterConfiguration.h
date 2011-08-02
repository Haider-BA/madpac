// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _LATTICEBOLTZMANN_LATTICEBOLTZMANNPLOTTERCONFIGURATION_H_
#define _LATTICEBOLTZMANN_LATTICEBOLTZMANNPLOTTERCONFIGURATION_H_
#include "peano/utils/Dimensions.h"
#include "tarch/logging/Log.h"
#include "tarch/irr/XML.h"
#include "string.h"
#include "peano/applications/latticeboltzmann/LatticeBoltzmannDefinitions.h"


namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace configurations {
        class LatticeBoltzmannPlotterConfiguration;
      }
    }
  }
}


/**
 * reads in the configuration of the plotter. At the moment, only VTK-Writer is supported.
 *
 * @author Philipp Neumann
 *
 */
class peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannPlotterConfiguration{
  public:

    LatticeBoltzmannPlotterConfiguration();
    ~LatticeBoltzmannPlotterConfiguration();

    /** true, if VTK-files have to be plotted */
    bool plotVTK() const;

    int getNumberTimestepsPerPlotting() const;

    /** parses the configuration input */
    void parseSubtag(tarch::irr::io::IrrXMLReader* xmlReader);

    /** returns the base of the vtk-filenames */
    std::string getVTKWriterBaseName() const;

    /** returns the _isValid flag */
    bool isValid() const;

    std::string toXMLString() const;

    std::string getTag() const;

  public:
    static const std::string TAG;
    static const std::string VTKWRITER_BASENAME;
    static const std::string VTKWRITER_TIMESTEPSPERPLOTTING;


  private:
    /** true if plotter configuration is valid and false otherwise */
    bool _isValid;

    /** for logging */
    static tarch::logging::Log _log;

  protected:
    /** base name of the VTK-output files */
    std::string _vtkWriterBaseName;
    bool _isDefinedVtkWriter;

    /** stores the number of outputs, e.g. '10' means one plot per
     *  10 timesteps
     */
    int _vtkWriterTimestepsPerPlotting;
};
#endif // _LATTICEBOLTZMANN_LATTICEBOLTZMANNPLOTTERCONFIGURATION_H_
