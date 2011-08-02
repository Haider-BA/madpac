#ifndef _PEANO_APPLICATIONS_HEATEQUATION_TIMESTEPPING_RECORDS_REGULARGRIDSTATE_H
#define _PEANO_APPLICATIONS_HEATEQUATION_TIMESTEPPING_RECORDS_REGULARGRIDSTATE_H

#ifdef Parallel
	#include <mpi.h>
#endif
#include "tarch/logging/Log.h"
#include "tarch/la/Vector.h"
#include <bitset>
#include <string>
#include <iostream>
#include "peano/utils/Globals.h"

namespace peano {
   namespace applications {
      namespace heatequation {
         namespace timestepping {
            namespace records {
               class RegularGridState;
               class RegularGridStatePacked;
            }
         }
      }
   }
}

/**
 * @author This class was autogenerated by DaStGen
 * 		   DataStructureGenerator (DaStGen), 2007-2009,
 * 		   by Wolfgang Eckhardt
 *
 * 		   build date: 09-12-2010 17:47
 *
 * @date   28/06/2011 13:55
 */
class peano::applications::heatequation::timestepping::records::RegularGridState { 
   
   public:
      
      typedef peano::applications::heatequation::timestepping::records::RegularGridStatePacked Packed;
      
      struct PersistentRecords {
         double _omega;
         double _updateUMax;
         double _updateUH;
         double _uMax;
         double _uH;
         double _uGlobalMax;
         double _uGlobalH;
         int _timeStep;
         double _timeStepSize;
         double _time;
         double _numberOfStencilUpdates;
         double _minimalAllowedMeshSize;
         double _maximalAllowedMeshSize;
         int _activeLevel;
         tarch::la::Vector<DIMENSIONS,double> _meshWidth;
         double _numberOfInnerVertices;
         double _numberOfBoundaryVertices;
         double _numberOfOuterVertices;
         double _numberOfInnerCells;
         double _numberOfOuterCells;
         bool _gridIsStationary;
         /**
          * Generated
          */
         PersistentRecords();
         
         /**
          * Generated
          */
         PersistentRecords(const double& omega, const double& updateUMax, const double& updateUH, const double& uMax, const double& uH, const double& uGlobalMax, const double& uGlobalH, const int& timeStep, const double& timeStepSize, const double& time, const double& numberOfStencilUpdates, const double& minimalAllowedMeshSize, const double& maximalAllowedMeshSize, const int& activeLevel, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary);
         
         /**
          * Generated
          */
         double getOmega() const;
         
         /**
          * Generated
          */
         void setOmega(const double& omega);
         
         /**
          * Generated
          */
         double getUpdateUMax() const;
         
         /**
          * Generated
          */
         void setUpdateUMax(const double& updateUMax);
         
         /**
          * Generated
          */
         double getUpdateUH() const;
         
         /**
          * Generated
          */
         void setUpdateUH(const double& updateUH);
         
         /**
          * Generated
          */
         double getUMax() const;
         
         /**
          * Generated
          */
         void setUMax(const double& uMax);
         
         /**
          * Generated
          */
         double getUH() const;
         
         /**
          * Generated
          */
         void setUH(const double& uH);
         
         /**
          * Generated
          */
         double getUGlobalMax() const;
         
         /**
          * Generated
          */
         void setUGlobalMax(const double& uGlobalMax);
         
         /**
          * Generated
          */
         double getUGlobalH() const;
         
         /**
          * Generated
          */
         void setUGlobalH(const double& uGlobalH);
         
         /**
          * Generated
          */
         int getTimeStep() const;
         
         /**
          * Generated
          */
         void setTimeStep(const int& timeStep);
         
         /**
          * Generated
          */
         double getTimeStepSize() const;
         
         /**
          * Generated
          */
         void setTimeStepSize(const double& timeStepSize);
         
         /**
          * Generated
          */
         double getTime() const;
         
         /**
          * Generated
          */
         void setTime(const double& time);
         
         /**
          * Generated
          */
         double getNumberOfStencilUpdates() const;
         
         /**
          * Generated
          */
         void setNumberOfStencilUpdates(const double& numberOfStencilUpdates);
         
         /**
          * Generated
          */
         double getMinimalAllowedMeshSize() const;
         
         /**
          * Generated
          */
         void setMinimalAllowedMeshSize(const double& minimalAllowedMeshSize);
         
         /**
          * Generated
          */
         double getMaximalAllowedMeshSize() const;
         
         /**
          * Generated
          */
         void setMaximalAllowedMeshSize(const double& maximalAllowedMeshSize);
         
         /**
          * Generated
          */
         int getActiveLevel() const;
         
         /**
          * Generated
          */
         void setActiveLevel(const int& activeLevel);
         
         /**
          * Generated
          */
         tarch::la::Vector<DIMENSIONS,double> getMeshWidth() const;
         
         /**
          * Generated
          */
         void setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth);
         
         /**
          * Generated
          */
         double getNumberOfInnerVertices() const;
         
         /**
          * Generated
          */
         void setNumberOfInnerVertices(const double& numberOfInnerVertices);
         
         /**
          * Generated
          */
         double getNumberOfBoundaryVertices() const;
         
         /**
          * Generated
          */
         void setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices);
         
         /**
          * Generated
          */
         double getNumberOfOuterVertices() const;
         
         /**
          * Generated
          */
         void setNumberOfOuterVertices(const double& numberOfOuterVertices);
         
         /**
          * Generated
          */
         double getNumberOfInnerCells() const;
         
         /**
          * Generated
          */
         void setNumberOfInnerCells(const double& numberOfInnerCells);
         
         /**
          * Generated
          */
         double getNumberOfOuterCells() const;
         
         /**
          * Generated
          */
         void setNumberOfOuterCells(const double& numberOfOuterCells);
         
         /**
          * Generated
          */
         bool getGridIsStationary() const;
         
         /**
          * Generated
          */
         void setGridIsStationary(const bool& gridIsStationary);
         
         
      };
      
   private: 
      PersistentRecords _persistentRecords;
      
   public:
      /**
       * Generated
       */
      RegularGridState();
      
      /**
       * Generated
       */
      RegularGridState(const PersistentRecords& persistentRecords);
      
      /**
       * Generated
       */
      RegularGridState(const double& omega, const double& updateUMax, const double& updateUH, const double& uMax, const double& uH, const double& uGlobalMax, const double& uGlobalH, const int& timeStep, const double& timeStepSize, const double& time, const double& numberOfStencilUpdates, const double& minimalAllowedMeshSize, const double& maximalAllowedMeshSize, const int& activeLevel, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary);
      
      /**
       * Generated
       */
      virtual ~RegularGridState();
      
      /**
       * Generated
       */
      double getOmega() const;
      
      /**
       * Generated
       */
      void setOmega(const double& omega);
      
      /**
       * Generated
       */
      double getUpdateUMax() const;
      
      /**
       * Generated
       */
      void setUpdateUMax(const double& updateUMax);
      
      /**
       * Generated
       */
      double getUpdateUH() const;
      
      /**
       * Generated
       */
      void setUpdateUH(const double& updateUH);
      
      /**
       * Generated
       */
      double getUMax() const;
      
      /**
       * Generated
       */
      void setUMax(const double& uMax);
      
      /**
       * Generated
       */
      double getUH() const;
      
      /**
       * Generated
       */
      void setUH(const double& uH);
      
      /**
       * Generated
       */
      double getUGlobalMax() const;
      
      /**
       * Generated
       */
      void setUGlobalMax(const double& uGlobalMax);
      
      /**
       * Generated
       */
      double getUGlobalH() const;
      
      /**
       * Generated
       */
      void setUGlobalH(const double& uGlobalH);
      
      /**
       * Generated
       */
      int getTimeStep() const;
      
      /**
       * Generated
       */
      void setTimeStep(const int& timeStep);
      
      /**
       * Generated
       */
      double getTimeStepSize() const;
      
      /**
       * Generated
       */
      void setTimeStepSize(const double& timeStepSize);
      
      /**
       * Generated
       */
      double getTime() const;
      
      /**
       * Generated
       */
      void setTime(const double& time);
      
      /**
       * Generated
       */
      double getNumberOfStencilUpdates() const;
      
      /**
       * Generated
       */
      void setNumberOfStencilUpdates(const double& numberOfStencilUpdates);
      
      /**
       * Generated
       */
      double getMinimalAllowedMeshSize() const;
      
      /**
       * Generated
       */
      void setMinimalAllowedMeshSize(const double& minimalAllowedMeshSize);
      
      /**
       * Generated
       */
      double getMaximalAllowedMeshSize() const;
      
      /**
       * Generated
       */
      void setMaximalAllowedMeshSize(const double& maximalAllowedMeshSize);
      
      /**
       * Generated
       */
      int getActiveLevel() const;
      
      /**
       * Generated
       */
      void setActiveLevel(const int& activeLevel);
      
      /**
       * Generated
       */
      tarch::la::Vector<DIMENSIONS,double> getMeshWidth() const;
      
      /**
       * Generated
       */
      void setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth);
      
      /**
       * Generated
       */
      double getMeshWidth(int elementIndex) const;
      
      /**
       * Generated
       */
      void setMeshWidth(int elementIndex, const double& meshWidth);
      
      /**
       * Generated
       */
      double getNumberOfInnerVertices() const;
      
      /**
       * Generated
       */
      void setNumberOfInnerVertices(const double& numberOfInnerVertices);
      
      /**
       * Generated
       */
      double getNumberOfBoundaryVertices() const;
      
      /**
       * Generated
       */
      void setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices);
      
      /**
       * Generated
       */
      double getNumberOfOuterVertices() const;
      
      /**
       * Generated
       */
      void setNumberOfOuterVertices(const double& numberOfOuterVertices);
      
      /**
       * Generated
       */
      double getNumberOfInnerCells() const;
      
      /**
       * Generated
       */
      void setNumberOfInnerCells(const double& numberOfInnerCells);
      
      /**
       * Generated
       */
      double getNumberOfOuterCells() const;
      
      /**
       * Generated
       */
      void setNumberOfOuterCells(const double& numberOfOuterCells);
      
      /**
       * Generated
       */
      bool getGridIsStationary() const;
      
      /**
       * Generated
       */
      void setGridIsStationary(const bool& gridIsStationary);
      
      /**
       * Generated
       */
      std::string toString() const;
      
      /**
       * Generated
       */
      void toString(std::ostream& out) const;
      
      
      PersistentRecords getPersistentRecords() const;
      /**
       * Generated
       */
      RegularGridStatePacked convert() const;
      
      
   #ifdef Parallel
      protected:
         static tarch::logging::Log _log;
         
         int _senderRank;
         
      public:
         
         /**
          * Global that represents the mpi datatype.
          */
         static MPI_Datatype Datatype;
         
         /**
          * Initializes the data type for the mpi operations. Has to be called
          * before the very first send or receive operation is called.
          */
         static void initDatatype();
         
         static void shutdownDatatype();
         
         void send(int destination, int tag);
         
         void receive(int source, int tag);
         
         static bool isMessageInQueue(int tag);
         
         int getSenderRank() const;
         
   #endif
      
   };
   
   /**
    * @author This class was autogenerated by DaStGen
    * 		   DataStructureGenerator (DaStGen), 2007-2009,
    * 		   by Wolfgang Eckhardt
    *
    * 		   build date: 09-12-2010 17:47
    *
    * @date   28/06/2011 13:55
    */
   class peano::applications::heatequation::timestepping::records::RegularGridStatePacked { 
      
      public:
         
         struct PersistentRecords {
            double _omega;
            double _updateUMax;
            double _updateUH;
            double _uMax;
            double _uH;
            double _uGlobalMax;
            double _uGlobalH;
            int _timeStep;
            double _timeStepSize;
            double _time;
            double _numberOfStencilUpdates;
            double _minimalAllowedMeshSize;
            double _maximalAllowedMeshSize;
            int _activeLevel;
            tarch::la::Vector<DIMENSIONS,double> _meshWidth;
            double _numberOfInnerVertices;
            double _numberOfBoundaryVertices;
            double _numberOfOuterVertices;
            double _numberOfInnerCells;
            double _numberOfOuterCells;
            
            /** mapping of records:
            || Member 	|| startbit 	|| length
             |  gridIsStationary	| startbit 0	| #bits 1
             */
            short int _packedRecords0;
            
            /**
             * Generated
             */
            PersistentRecords();
            
            /**
             * Generated
             */
            PersistentRecords(const double& omega, const double& updateUMax, const double& updateUH, const double& uMax, const double& uH, const double& uGlobalMax, const double& uGlobalH, const int& timeStep, const double& timeStepSize, const double& time, const double& numberOfStencilUpdates, const double& minimalAllowedMeshSize, const double& maximalAllowedMeshSize, const int& activeLevel, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary);
            
            /**
             * Generated
             */
            double getOmega() const;
            
            /**
             * Generated
             */
            void setOmega(const double& omega);
            
            /**
             * Generated
             */
            double getUpdateUMax() const;
            
            /**
             * Generated
             */
            void setUpdateUMax(const double& updateUMax);
            
            /**
             * Generated
             */
            double getUpdateUH() const;
            
            /**
             * Generated
             */
            void setUpdateUH(const double& updateUH);
            
            /**
             * Generated
             */
            double getUMax() const;
            
            /**
             * Generated
             */
            void setUMax(const double& uMax);
            
            /**
             * Generated
             */
            double getUH() const;
            
            /**
             * Generated
             */
            void setUH(const double& uH);
            
            /**
             * Generated
             */
            double getUGlobalMax() const;
            
            /**
             * Generated
             */
            void setUGlobalMax(const double& uGlobalMax);
            
            /**
             * Generated
             */
            double getUGlobalH() const;
            
            /**
             * Generated
             */
            void setUGlobalH(const double& uGlobalH);
            
            /**
             * Generated
             */
            int getTimeStep() const;
            
            /**
             * Generated
             */
            void setTimeStep(const int& timeStep);
            
            /**
             * Generated
             */
            double getTimeStepSize() const;
            
            /**
             * Generated
             */
            void setTimeStepSize(const double& timeStepSize);
            
            /**
             * Generated
             */
            double getTime() const;
            
            /**
             * Generated
             */
            void setTime(const double& time);
            
            /**
             * Generated
             */
            double getNumberOfStencilUpdates() const;
            
            /**
             * Generated
             */
            void setNumberOfStencilUpdates(const double& numberOfStencilUpdates);
            
            /**
             * Generated
             */
            double getMinimalAllowedMeshSize() const;
            
            /**
             * Generated
             */
            void setMinimalAllowedMeshSize(const double& minimalAllowedMeshSize);
            
            /**
             * Generated
             */
            double getMaximalAllowedMeshSize() const;
            
            /**
             * Generated
             */
            void setMaximalAllowedMeshSize(const double& maximalAllowedMeshSize);
            
            /**
             * Generated
             */
            int getActiveLevel() const;
            
            /**
             * Generated
             */
            void setActiveLevel(const int& activeLevel);
            
            /**
             * Generated
             */
            tarch::la::Vector<DIMENSIONS,double> getMeshWidth() const;
            
            /**
             * Generated
             */
            void setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth);
            
            /**
             * Generated
             */
            double getNumberOfInnerVertices() const;
            
            /**
             * Generated
             */
            void setNumberOfInnerVertices(const double& numberOfInnerVertices);
            
            /**
             * Generated
             */
            double getNumberOfBoundaryVertices() const;
            
            /**
             * Generated
             */
            void setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices);
            
            /**
             * Generated
             */
            double getNumberOfOuterVertices() const;
            
            /**
             * Generated
             */
            void setNumberOfOuterVertices(const double& numberOfOuterVertices);
            
            /**
             * Generated
             */
            double getNumberOfInnerCells() const;
            
            /**
             * Generated
             */
            void setNumberOfInnerCells(const double& numberOfInnerCells);
            
            /**
             * Generated
             */
            double getNumberOfOuterCells() const;
            
            /**
             * Generated
             */
            void setNumberOfOuterCells(const double& numberOfOuterCells);
            
            /**
             * Generated
             */
            bool getGridIsStationary() const;
            
            /**
             * Generated
             */
            void setGridIsStationary(const bool& gridIsStationary);
            
            
         };
         
      private: 
         PersistentRecords _persistentRecords;
         
      public:
         /**
          * Generated
          */
         RegularGridStatePacked();
         
         /**
          * Generated
          */
         RegularGridStatePacked(const PersistentRecords& persistentRecords);
         
         /**
          * Generated
          */
         RegularGridStatePacked(const double& omega, const double& updateUMax, const double& updateUH, const double& uMax, const double& uH, const double& uGlobalMax, const double& uGlobalH, const int& timeStep, const double& timeStepSize, const double& time, const double& numberOfStencilUpdates, const double& minimalAllowedMeshSize, const double& maximalAllowedMeshSize, const int& activeLevel, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary);
         
         /**
          * Generated
          */
         virtual ~RegularGridStatePacked();
         
         /**
          * Generated
          */
         double getOmega() const;
         
         /**
          * Generated
          */
         void setOmega(const double& omega);
         
         /**
          * Generated
          */
         double getUpdateUMax() const;
         
         /**
          * Generated
          */
         void setUpdateUMax(const double& updateUMax);
         
         /**
          * Generated
          */
         double getUpdateUH() const;
         
         /**
          * Generated
          */
         void setUpdateUH(const double& updateUH);
         
         /**
          * Generated
          */
         double getUMax() const;
         
         /**
          * Generated
          */
         void setUMax(const double& uMax);
         
         /**
          * Generated
          */
         double getUH() const;
         
         /**
          * Generated
          */
         void setUH(const double& uH);
         
         /**
          * Generated
          */
         double getUGlobalMax() const;
         
         /**
          * Generated
          */
         void setUGlobalMax(const double& uGlobalMax);
         
         /**
          * Generated
          */
         double getUGlobalH() const;
         
         /**
          * Generated
          */
         void setUGlobalH(const double& uGlobalH);
         
         /**
          * Generated
          */
         int getTimeStep() const;
         
         /**
          * Generated
          */
         void setTimeStep(const int& timeStep);
         
         /**
          * Generated
          */
         double getTimeStepSize() const;
         
         /**
          * Generated
          */
         void setTimeStepSize(const double& timeStepSize);
         
         /**
          * Generated
          */
         double getTime() const;
         
         /**
          * Generated
          */
         void setTime(const double& time);
         
         /**
          * Generated
          */
         double getNumberOfStencilUpdates() const;
         
         /**
          * Generated
          */
         void setNumberOfStencilUpdates(const double& numberOfStencilUpdates);
         
         /**
          * Generated
          */
         double getMinimalAllowedMeshSize() const;
         
         /**
          * Generated
          */
         void setMinimalAllowedMeshSize(const double& minimalAllowedMeshSize);
         
         /**
          * Generated
          */
         double getMaximalAllowedMeshSize() const;
         
         /**
          * Generated
          */
         void setMaximalAllowedMeshSize(const double& maximalAllowedMeshSize);
         
         /**
          * Generated
          */
         int getActiveLevel() const;
         
         /**
          * Generated
          */
         void setActiveLevel(const int& activeLevel);
         
         /**
          * Generated
          */
         tarch::la::Vector<DIMENSIONS,double> getMeshWidth() const;
         
         /**
          * Generated
          */
         void setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth);
         
         /**
          * Generated
          */
         double getMeshWidth(int elementIndex) const;
         
         /**
          * Generated
          */
         void setMeshWidth(int elementIndex, const double& meshWidth);
         
         /**
          * Generated
          */
         double getNumberOfInnerVertices() const;
         
         /**
          * Generated
          */
         void setNumberOfInnerVertices(const double& numberOfInnerVertices);
         
         /**
          * Generated
          */
         double getNumberOfBoundaryVertices() const;
         
         /**
          * Generated
          */
         void setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices);
         
         /**
          * Generated
          */
         double getNumberOfOuterVertices() const;
         
         /**
          * Generated
          */
         void setNumberOfOuterVertices(const double& numberOfOuterVertices);
         
         /**
          * Generated
          */
         double getNumberOfInnerCells() const;
         
         /**
          * Generated
          */
         void setNumberOfInnerCells(const double& numberOfInnerCells);
         
         /**
          * Generated
          */
         double getNumberOfOuterCells() const;
         
         /**
          * Generated
          */
         void setNumberOfOuterCells(const double& numberOfOuterCells);
         
         /**
          * Generated
          */
         bool getGridIsStationary() const;
         
         /**
          * Generated
          */
         void setGridIsStationary(const bool& gridIsStationary);
         
         /**
          * Generated
          */
         std::string toString() const;
         
         /**
          * Generated
          */
         void toString(std::ostream& out) const;
         
         
         PersistentRecords getPersistentRecords() const;
         /**
          * Generated
          */
         RegularGridState convert() const;
         
         
      #ifdef Parallel
         protected:
            static tarch::logging::Log _log;
            
            int _senderRank;
            
         public:
            
            /**
             * Global that represents the mpi datatype.
             */
            static MPI_Datatype Datatype;
            
            /**
             * Initializes the data type for the mpi operations. Has to be called
             * before the very first send or receive operation is called.
             */
            static void initDatatype();
            
            static void shutdownDatatype();
            
            void send(int destination, int tag);
            
            void receive(int source, int tag);
            
            static bool isMessageInQueue(int tag);
            
            int getSenderRank() const;
            
      #endif
         
      };
      
      #endif
      