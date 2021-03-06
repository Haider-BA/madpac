#ifndef _PEANO_APPLICATIONS_SHALLOWWATER_REPOSITORIES_SHALLOWWATERBATCHJOBREPOSITORYSTATE_H
#define _PEANO_APPLICATIONS_SHALLOWWATER_REPOSITORIES_SHALLOWWATERBATCHJOBREPOSITORYSTATE_H

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
      namespace shallowwater {
         namespace repositories {
            class ShallowWaterBatchJobRepositoryState;
            class ShallowWaterBatchJobRepositoryStatePacked;
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
 * @date   26/05/2011 08:53
 */
class peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState { 
   
   public:
      
      typedef peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked Packed;
      
      enum Action {
         WriteCheckpoint = 0, ReadCheckpoint = 1, Terminate = 2, UseAdapterSetupExperiment = 3, UseAdapterSetupExperimentAndPlotGrid = 4, UseAdapterSetupExperimentAndPlotStartSolution = 5, UseAdapterGodunovMethod = 6, UseAdapterGodunovMethodAndPlotSolution = 7, UseAdapterPlotSolution = 8
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
      ShallowWaterBatchJobRepositoryState();
      
      /**
       * Generated
       */
      ShallowWaterBatchJobRepositoryState(const PersistentRecords& persistentRecords);
      
      /**
       * Generated
       */
      ShallowWaterBatchJobRepositoryState(const Action& action);
      
      /**
       * Generated
       */
      virtual ~ShallowWaterBatchJobRepositoryState();
      
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
      ShallowWaterBatchJobRepositoryStatePacked convert() const;
      
      
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
    * @date   26/05/2011 08:53
    */
   class peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryStatePacked { 
      
      public:
         
         typedef peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::Action Action;
         
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
         ShallowWaterBatchJobRepositoryStatePacked();
         
         /**
          * Generated
          */
         ShallowWaterBatchJobRepositoryStatePacked(const PersistentRecords& persistentRecords);
         
         /**
          * Generated
          */
         ShallowWaterBatchJobRepositoryStatePacked(const Action& action);
         
         /**
          * Generated
          */
         virtual ~ShallowWaterBatchJobRepositoryStatePacked();
         
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
         ShallowWaterBatchJobRepositoryState convert() const;
         
         
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
      
