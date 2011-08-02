#ifndef _PEANO_APPLICATIONS_FAXEN_LBF_REPOSITORIES_LBFBATCHJOBREPOSITORYSTATE_H
#define _PEANO_APPLICATIONS_FAXEN_LBF_REPOSITORIES_LBFBATCHJOBREPOSITORYSTATE_H

#ifdef Parallel
	#include <mpi.h>
#endif
#include "tarch/logging/Log.h"
#include "tarch/la/Vector.h"
#include <bitset>
#include <string>
#include <iostream>

namespace peano {
   namespace applications {
      namespace faxen {
         namespace lbf {
            namespace repositories {
               class LBFBatchJobRepositoryState;
               class LBFBatchJobRepositoryStatePacked;
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
 * @date   23/07/2011 08:27
 */
class peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState { 
   
   public:
      
      typedef peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked Packed;
      
      enum Action {
         WriteCheckpoint = 0, ReadCheckpoint = 1, Terminate = 2, UseAdapterInitialize = 3, UseAdapterInitializeAndSetBoundary = 4, UseAdapterPlotGrid = 5, UseAdapterControlTimeStep = 6, UseAdapterSetVelocitiesBoundary = 7, UseAdapterSetScenarioBoundary = 8, UseAdapterComputeVelocitiesDerivatives = 9, UseAdapterComputeRightHandSide = 10, UseAdapterSetZeroPressureBoundary = 11, UseAdapterSetPressureBoundary = 12, UseAdapterSORStep = 13, UseAdapterComputeResidualNorm = 14, UseAdapterComputeVelocities = 15, UseAdapterPlotSolution = 16, UseAdapterMoveParticles = 17, UseAdapterSwitchFromLB2NSE = 18, UseAdapterExtractDataNSE2LB = 19, UseAdapterCorrectDensityAndComputeEqPDF4LB = 20, UseAdapterRegularBlockSolverAdapter = 21, UseAdapterInitialiseSpacetreeGridAdapter = 22, UseAdapterBlockCCAOutputAdapter = 23, UseAdapterDynamicRefinementForSpacetreeGridAdapter = 24, UseAdapterBlockVTKOutputAdapter = 25, UseAdapterRegularBlockSolverAndVTKOutputAdapter = 26, UseAdapterTraceNSEData = 27, UseAdapterTraceLBData = 28
      };
      
      struct PersistentRecords {
         Action _action;
         bool _reduceState;
         /**
          * Generated
          */
         PersistentRecords();
         
         /**
          * Generated
          */
         PersistentRecords(const Action& action, const bool& reduceState);
         
         /**
          * Generated
          */
         Action getAction() const;
         
         /**
          * Generated
          */
         void setAction(const Action& action);
         
         /**
          * Generated
          */
         bool getReduceState() const;
         
         /**
          * Generated
          */
         void setReduceState(const bool& reduceState);
         
         
      };
      
   private: 
      PersistentRecords _persistentRecords;
      
   public:
      /**
       * Generated
       */
      LBFBatchJobRepositoryState();
      
      /**
       * Generated
       */
      LBFBatchJobRepositoryState(const PersistentRecords& persistentRecords);
      
      /**
       * Generated
       */
      LBFBatchJobRepositoryState(const Action& action, const bool& reduceState);
      
      /**
       * Generated
       */
      virtual ~LBFBatchJobRepositoryState();
      
      /**
       * Generated
       */
      Action getAction() const;
      
      /**
       * Generated
       */
      void setAction(const Action& action);
      
      /**
       * Generated
       */
      bool getReduceState() const;
      
      /**
       * Generated
       */
      void setReduceState(const bool& reduceState);
      
      /**
       * Generated
       */
      static std::string toString(const Action& param);
      
      /**
       * Generated
       */
      static std::string getActionMapping();
      
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
      LBFBatchJobRepositoryStatePacked convert() const;
      
      
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
    * @date   23/07/2011 08:27
    */
   class peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryStatePacked { 
      
      public:
         
         typedef peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::Action Action;
         
         struct PersistentRecords {
            Action _action;
            bool _reduceState;
            /**
             * Generated
             */
            PersistentRecords();
            
            /**
             * Generated
             */
            PersistentRecords(const Action& action, const bool& reduceState);
            
            /**
             * Generated
             */
            Action getAction() const;
            
            /**
             * Generated
             */
            void setAction(const Action& action);
            
            /**
             * Generated
             */
            bool getReduceState() const;
            
            /**
             * Generated
             */
            void setReduceState(const bool& reduceState);
            
            
         };
         
      private: 
         PersistentRecords _persistentRecords;
         
      public:
         /**
          * Generated
          */
         LBFBatchJobRepositoryStatePacked();
         
         /**
          * Generated
          */
         LBFBatchJobRepositoryStatePacked(const PersistentRecords& persistentRecords);
         
         /**
          * Generated
          */
         LBFBatchJobRepositoryStatePacked(const Action& action, const bool& reduceState);
         
         /**
          * Generated
          */
         virtual ~LBFBatchJobRepositoryStatePacked();
         
         /**
          * Generated
          */
         Action getAction() const;
         
         /**
          * Generated
          */
         void setAction(const Action& action);
         
         /**
          * Generated
          */
         bool getReduceState() const;
         
         /**
          * Generated
          */
         void setReduceState(const bool& reduceState);
         
         /**
          * Generated
          */
         static std::string toString(const Action& param);
         
         /**
          * Generated
          */
         static std::string getActionMapping();
         
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
         LBFBatchJobRepositoryState convert() const;
         
         
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
      