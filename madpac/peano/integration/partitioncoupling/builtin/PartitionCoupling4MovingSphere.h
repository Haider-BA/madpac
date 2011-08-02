// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_INTEGRATION_PARTITIONCOUPLING_BUILTIN_PARTITIONCOUPLING4MOVINGSPHERE_H_
#define _PEANO_INTEGRATION_PARTITIONCOUPLING_BUILTIN_PARTITIONCOUPLING4MOVINGSPHERE_H_

#include <fstream>
#include <sstream>

#include "tarch/la/Scalar.h"
#include "tarch/la/Matrix.h"
#include "tarch/la/Vector.h"
#include "tarch/la/MatrixMatrixOperations.h"
#include "tarch/la/MatrixVectorOperations.h"
#include "tarch/logging/Log.h"
#ifdef Parallel
#include "tarch/parallel/Node.h"
#endif

#include "peano/integration/partitioncoupling/CouplingManager.h"
#include "peano/integration/partitioncoupling/builtin/ReceiveDataFromMovingSphere.h"
#include "peano/integration/partitioncoupling/builtin/SendDataToMovingSphere.h"
#include "peano/integration/partitioncoupling/services/ReceiveDataService.h"
#include "peano/integration/partitioncoupling/services/SendDataService.h"


#include "peano/geometry/builtin/Sphere.h"
#include "peano/geometry/Intersection.h"
#include "peano/geometry/services/GeometryService.h"


namespace peano {
  namespace integration {
    namespace partitioncoupling {
      namespace builtin {
        class PartitionCoupling4MovingSphere;

        namespace tests {
          /** forward declaration */
          class PartitionCoupling4MovingSphereTest;
        }
      }
    }
  }
}



/** Implements the partition coupling for the builtin moving sphere scenario.
 *
 *  Does not go together with FunctionalGeometryService! TODO
 *
 *  @author Philipp Neumann
 */
class peano::integration::partitioncoupling::builtin::PartitionCoupling4MovingSphere:
public peano::integration::partitioncoupling::CouplingManager {
  public:
    PartitionCoupling4MovingSphere(
      // certain basic geometry, which remains unchanged during the whole simulation
      peano::geometry::Geometry *basicGeometry,
      // domain size
      tarch::la::Vector<DIMENSIONS,double> domainSize,
      // domain offset
      tarch::la::Vector<DIMENSIONS,double> domainOffset,
      // position of the sphere
      tarch::la::Vector<DIMENSIONS,double> position,
      // sphere radius
      double radius,
      // sphere density
      double sphereDensity,
      // plotting parameters
      int timestepsPerPlottingVTK,
      int timestepsPerPlottingPovray,
      std::string filename,
      int initTimestepCounter = 0
    ):
     peano::integration::partitioncoupling::CouplingManager(),
     _basicGeometry(basicGeometry),
     _domainSize(domainSize),
     _domainOffset(domainOffset),
     _radius(radius),
     _mass(sphereDensity*tarch::la::PI
#if (DIMENSIONS==3)
              *radius*radius*radius*4.0/3.0
#else
              *radius*radius
#endif
     ),
     _sphereDensity(sphereDensity),
     // I_body=eye()*2.0/5.0*mass*r^2
     _momentOfInertia(
        eye(2.0/5.0*sphereDensity*tarch::la::PI
#if (DIMENSIONS==3)
            *radius*radius*radius*4.0/3.0
#else
             *radius*radius
#endif
             *radius*radius)
     ),
     _spherePositionInIntersectionVector(0),
     _timestepsPerPlottingVTK(timestepsPerPlottingVTK),
     _timestepsPerPlottingPovray(timestepsPerPlottingPovray),
     _timestepCounter(initTimestepCounter),
     _plotVTK(_timestepsPerPlottingVTK>0),
     _plotPovray(_timestepsPerPlottingPovray>0),
     _angleForPovray(0.0),
     _filename(filename),
     _intersection(NULL),
     _receiveData(NULL),
     _sendData(NULL),
     _position(position),
     _orientation(eye(1.0)),
     _translationalMomentum(0.0),
     _angularMomentum(0.0),
     _translationalForce(0.0),
     _fixSphereForTimesteps(-2000)
     {
       assertion1(_basicGeometry != NULL, "Basic geometry is null!");
     }


    /** destructor: currently prints a list of all forces and velocity of the sphere
     *  to file for testing purposes
     */
    ~PartitionCoupling4MovingSphere(){
      // testing: write forces, velocities etc. to a file
      std::ofstream file("ForcesVelocitiesOverTime.dat");
      if (!file.is_open()){
        std::cout << "Error: Could not open file for force-velocity writing!" << std::endl;
        exit(EXIT_FAILURE);
      }

      file << "Timestep Force_X Force_Y Force_Z Torque_X Torque_Y Torque_Z Velocity_X Velocity_Y Velocity_Z AngVelocity_X AngVelocity_Y AngVelocity_Z" << std::endl;
      for (unsigned int i = 0; i < _translationalForces.size(); i++){
        file << i << " ";
        file << _translationalForces[i](0) << " " << _translationalForces[i](1) << " " << _translationalForces[i](2) << " ";
        file << _torques[i](0) << " " << _torques[i](1) << " " << _torques[i](2) << " ";
        file << _translationalVelocities[i](0) << " " << _translationalVelocities[i](1) << " " << _translationalVelocities[i](2) << " ";
        file << _angularVelocities[i](0) << " " << _angularVelocities[i](1) << " " << _angularVelocities[i](2) << std::endl;
      }
      file.close();
    }

    /** advances the structural solver one timestep dt */
    void advance(double dt);

    /** initialises the coupling */
    void initialize();

    /** called at the end of coupled simulation */
    void finalize();

  private:
    /** friend test class for testing purposes */
    friend class peano::integration::partitioncoupling::builtin::tests::PartitionCoupling4MovingSphereTest;

    /** for testing purposes */
    PartitionCoupling4MovingSphere(
      peano::integration::partitioncoupling::builtin::ReceiveDataFromMovingSphere &receiveData,
      peano::integration::partitioncoupling::builtin::SendDataToMovingSphere &sendData,
      peano::geometry::Geometry *basicGeometry,
      tarch::la::Vector<DIMENSIONS,double> domainSize,
      tarch::la::Vector<DIMENSIONS,double> domainOffset,
      tarch::la::Vector<DIMENSIONS,double> position,
      double radius,
      double sphereDensity,
      int timestepsPerPlottingVTK,
      int timestepsPerPlottingPovray,
      std::string filename
    ):
      peano::integration::partitioncoupling::CouplingManager(),
      _basicGeometry(basicGeometry),
      _domainSize(domainSize),
      _domainOffset(domainOffset),
      _radius(radius),
      _mass(sphereDensity*tarch::la::PI
    #if (DIMENSIONS==3)
               *radius*radius*radius*4.0/3.0
    #else
               *radius*radius
    #endif
      ),
      _sphereDensity(sphereDensity),
      // I_body=eye()*2.0/5.0*mass*r^2
      _momentOfInertia(
         eye(2.0/5.0*sphereDensity*tarch::la::PI
    #if (DIMENSIONS==3)
             *radius*radius*radius*4.0/3.0
    #else
             *radius*radius
    #endif
             *radius*radius)
      ),
      _spherePositionInIntersectionVector(0),
      _timestepsPerPlottingVTK(timestepsPerPlottingVTK),
      _timestepsPerPlottingPovray(timestepsPerPlottingPovray),
      _timestepCounter(0),
      _plotVTK(_timestepsPerPlottingVTK>0),
      _plotPovray(_timestepsPerPlottingPovray>0),
      _angleForPovray(0.0),
      _filename(filename),
      _intersection(NULL),
      _receiveData(&receiveData),
      _sendData(&sendData),
      _position(position),
      _orientation(eye(1.0)),
      _translationalMomentum(0.0),
      _angularMomentum(0.0),
      _translationalForce(0.0),
      _fixSphereForTimesteps(-2000){
      assertion1(_basicGeometry != NULL, "Basic geometry is null!");
    }


    /** writes VTK output */
    void plotVTK(const tarch::la::Vector<3,double>& omega) const;

    /** writes .pov files for POV-Ray visualisation */
    void plotPovray(const tarch::la::Vector<3,double>& omega,const double& dt);

    /** star-matrix derived from a vector, see rigid-body paper "Physically based modeling
     *  of rigid body simulation" by David Baraff
     */
    tarch::la::Matrix<3,3,double> starOp(const tarch::la::Vector<3,double> &vec) const;

    /** uses the current values from _orientation, _momentOfInertia and _angularMomentum to
     *  compute the angular velocity omega.
     */
    tarch::la::Vector<3,double> getOmega(
      const tarch::la::Matrix<3,3,double> &momentOfInertia,
      const tarch::la::Matrix<3,3,double> &orientation,
      const tarch::la::Vector<3,double> &angularMomentum
    ) const;

    /** returns a 3x3 diagonal matrix with entries diag on the diagonal */
    tarch::la::Matrix<3,3,double> eye(const double diag) const {
      tarch::la::Matrix<3,3,double> m(0.0);
      for (int i = 0; i < 3; i++){
        m(i,i) = diag;
      }
      return m;
    }

    /** basic static geometry */
    peano::geometry::Geometry *_basicGeometry;
    /** domain size */
    tarch::la::Vector<DIMENSIONS,double> _domainSize;
    /** domain offset */
    tarch::la::Vector<DIMENSIONS,double> _domainOffset;
    /** radius of the sphere */
    double _radius;
    /** mass of the sphere */
    double _mass;
    /** density of the sphere */
    double _sphereDensity;
    /** moment of inertia (-> = 2/5r^2 *eye-matrix for spheres */
    tarch::la::Matrix<3,3,double> _momentOfInertia;
    /** index of the sphere in the geometry intersection. As in each advance(dt) call,
     *  the sphere needs to be displaced, this index is needed to determine the
     *  sphere geometry object in the intersection, remove the old one and insert the
     *  new sphere object.
     */
    unsigned int _spherePositionInIntersectionVector;
    /** plotting parameters */
    int _timestepsPerPlottingVTK;
    int _timestepsPerPlottingPovray;
    int _timestepCounter;
    bool _plotVTK;
    bool _plotPovray;
    tarch::la::Vector<3,double> _angleForPovray;
    std::string _filename;

    /** total geometry. The intersection is going to hold one object for the basicGeometry
     *  and one object for the sphere. This is one of the reasons, why this coupling class
     *  may not work together with the FunctionalGeometryService part.
     */
    peano::geometry::Intersection *_intersection;

    /** pointer to receiveData object */
    peano::integration::partitioncoupling::builtin::ReceiveDataFromMovingSphere *_receiveData;
    /** pointer to sendData object */
    peano::integration::partitioncoupling::builtin::SendDataToMovingSphere *_sendData;

    /** sphere position */
    tarch::la::Vector<DIMENSIONS,double> _position;
    /** orientation (local coordinate system) of sphere */
    tarch::la::Matrix<3,3,double> _orientation;
    /** translational momentum */
    tarch::la::Vector<3,double> _translationalMomentum;
    /** angular momentum */
    tarch::la::Vector<3,double> _angularMomentum;
    /** translational force, for plotting purpose */
    tarch::la::Vector<3,double> _translationalForce;

    /** number of timesteps that the sphere is fixed at its initial location. This
     *  currently needs to be set 'by hand' in the constructor of this class.
     */
    const int _fixSphereForTimesteps;

    // for testing (store all forces and velocities acting on the sphere over time)
    std::vector<tarch::la::Vector<3,double> > _translationalForces;
    std::vector<tarch::la::Vector<3,double> > _torques;
    std::vector<tarch::la::Vector<3,double> > _translationalVelocities;
    std::vector<tarch::la::Vector<3,double> > _angularVelocities;

    static tarch::logging::Log _log;
};
#endif // _PEANO_INTEGRATION_PARTITIONCOUPLING_BUILTIN_PARTITIONCOUPLING4MOVINGSPHERE_H_
