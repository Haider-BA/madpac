#ifndef _PEANO_APPLICATIONS_PIC_DEMO_REPOSITORIES_PICBATCHJOBREPOSITORYSTATE_H
#define _PEANO_APPLICATIONS_PIC_DEMO_REPOSITORIES_PICBATCHJOBREPOSITORYSTATE_H

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
      namespace pic {
         namespace demo {
            namespace repositories {
               class PICBatchJobRepositoryState;
               class PICBatchJobRepositoryStatePacked;
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
 * @date   14/06/2011 15:46
 */
class peano::applications::pic::demo::repositories::PICBatchJobRepositoryState { 
   
   public:
      
      typedef peano::applications::pic::demo::repositories::PICBatchJobRepositoryStatePacked Packed;
      
      enum Action {
         WriteCheckpoint = 0, ReadCheckpoint = 1, Terminate = 2, UseAdapterSetupExperiment = 3, UseAdapterSetupExperimentAndPlot = 4
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
      PICBatchJobRepositoryState();
      
      /**
       * Generated
       */
      PICBatchJobRepositoryState(const PersistentRecords& persistentRecords);
      
      /**
       * Generated
       */
      PICBatchJobRepositoryState(const Action& action);
      
      /**
       * Generated
       */
      virtual ~PICBatchJobRepositoryState();
      
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
      PICBatchJobRepositoryStatePacked convert() const;
      
      
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
    * @date   14/06/2011 15:46
    */
   class peano::applications::pic::demo::repositories::PICBatchJobRepositoryStatePacked { 
      
      public:
         
         typedef peano::applications::pic::demo::repositories::PICBatchJobRepositoryState::Action Action;
         
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
         PICBatchJobRepositoryStatePacked();
         
         /**
          * Generated
          */
         PICBatchJobRepositoryStatePacked(const PersistentRecords& persistentRecords);
         
         /**
          * Generated
          */
         PICBatchJobRepositoryStatePacked(const Action& action);
         
         /**
          * Generated
          */
         virtual ~PICBatchJobRepositoryStatePacked();
         
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
         PICBatchJobRepositoryState convert() const;
         
         
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
      
