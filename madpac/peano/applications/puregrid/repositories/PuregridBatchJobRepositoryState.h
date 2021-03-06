#ifndef _PEANO_APPLICATIONS_PUREGRID_REPOSITORIES_PUREGRIDBATCHJOBREPOSITORYSTATE_H
#define _PEANO_APPLICATIONS_PUREGRID_REPOSITORIES_PUREGRIDBATCHJOBREPOSITORYSTATE_H

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
      namespace puregrid {
         namespace repositories {
            class PuregridBatchJobRepositoryState;
            class PuregridBatchJobRepositoryStatePacked;
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
 * @date   28/06/2011 13:45
 */
class peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState { 
   
   public:
      
      typedef peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked Packed;
      
      enum Action {
         WriteCheckpoint = 0, ReadCheckpoint = 1, Terminate = 2, UseAdapterSetupGrid = 3
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
      PuregridBatchJobRepositoryState();
      
      /**
       * Generated
       */
      PuregridBatchJobRepositoryState(const PersistentRecords& persistentRecords);
      
      /**
       * Generated
       */
      PuregridBatchJobRepositoryState(const Action& action, const bool& reduceState);
      
      /**
       * Generated
       */
      virtual ~PuregridBatchJobRepositoryState();
      
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
      PuregridBatchJobRepositoryStatePacked convert() const;
      
      
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
    * @date   28/06/2011 13:45
    */
   class peano::applications::puregrid::repositories::PuregridBatchJobRepositoryStatePacked { 
      
      public:
         
         typedef peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState::Action Action;
         
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
         PuregridBatchJobRepositoryStatePacked();
         
         /**
          * Generated
          */
         PuregridBatchJobRepositoryStatePacked(const PersistentRecords& persistentRecords);
         
         /**
          * Generated
          */
         PuregridBatchJobRepositoryStatePacked(const Action& action, const bool& reduceState);
         
         /**
          * Generated
          */
         virtual ~PuregridBatchJobRepositoryStatePacked();
         
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
         PuregridBatchJobRepositoryState convert() const;
         
         
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
      
