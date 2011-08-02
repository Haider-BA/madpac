#ifndef _PEANO_APPLICATIONS_FAXEN_REPOSITORIES_FAXENBATCHJOBREPOSITORYSTATE_H
#define _PEANO_APPLICATIONS_FAXEN_REPOSITORIES_FAXENBATCHJOBREPOSITORYSTATE_H

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
         namespace repositories {
            class FaxenBatchJobRepositoryState;
            class FaxenBatchJobRepositoryStatePacked;
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
 * @date   06/05/2011 22:32
 */
class peano::applications::faxen::repositories::FaxenBatchJobRepositoryState { 
   
   public:
      
      typedef peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked Packed;
      
      enum Action {
         WriteCheckpoint = 0, ReadCheckpoint = 1, Terminate = 2, UseAdapterInitialize = 3, UseAdapterInitializeAndSetBoundary = 4, UseAdapterPlotGrid = 5, UseAdapterControlTimeStep = 6, UseAdapterSetVelocitiesBoundary = 7, UseAdapterSetScenarioBoundary = 8, UseAdapterComputeVelocitiesDerivatives = 9, UseAdapterComputeRightHandSide = 10, UseAdapterSetZeroPressureBoundary = 11, UseAdapterSetPressureBoundary = 12, UseAdapterSORStep = 13, UseAdapterComputeResidualNorm = 14, UseAdapterComputeVelocities = 15, UseAdapterPlotSolution = 16
      };
      
      struct PersistentRecords {
         Action _action;
         /**
          * Generated
          */
         PersistentRecords();
         
         /**
          * Generated
          */
         PersistentRecords(const Action& action);
         
         /**
          * Generated
          */
         Action getAction() const;
         
         /**
          * Generated
          */
         void setAction(const Action& action);
         
         
      };
      
   private: 
      PersistentRecords _persistentRecords;
      
   public:
      /**
       * Generated
       */
      FaxenBatchJobRepositoryState();
      
      /**
       * Generated
       */
      FaxenBatchJobRepositoryState(const PersistentRecords& persistentRecords);
      
      /**
       * Generated
       */
      FaxenBatchJobRepositoryState(const Action& action);
      
      /**
       * Generated
       */
      virtual ~FaxenBatchJobRepositoryState();
      
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
      FaxenBatchJobRepositoryStatePacked convert() const;
      
      
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
    * @date   06/05/2011 22:32
    */
   class peano::applications::faxen::repositories::FaxenBatchJobRepositoryStatePacked { 
      
      public:
         
         typedef peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::Action Action;
         
         struct PersistentRecords {
            Action _action;
            /**
             * Generated
             */
            PersistentRecords();
            
            /**
             * Generated
             */
            PersistentRecords(const Action& action);
            
            /**
             * Generated
             */
            Action getAction() const;
            
            /**
             * Generated
             */
            void setAction(const Action& action);
            
            
         };
         
      private: 
         PersistentRecords _persistentRecords;
         
      public:
         /**
          * Generated
          */
         FaxenBatchJobRepositoryStatePacked();
         
         /**
          * Generated
          */
         FaxenBatchJobRepositoryStatePacked(const PersistentRecords& persistentRecords);
         
         /**
          * Generated
          */
         FaxenBatchJobRepositoryStatePacked(const Action& action);
         
         /**
          * Generated
          */
         virtual ~FaxenBatchJobRepositoryStatePacked();
         
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
         FaxenBatchJobRepositoryState convert() const;
         
         
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
      
