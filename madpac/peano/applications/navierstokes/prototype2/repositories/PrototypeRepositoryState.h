#ifndef _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE2_REPOSITORIES_PROTOTYPEREPOSITORYSTATE_H
#define _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE2_REPOSITORIES_PROTOTYPEREPOSITORYSTATE_H

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
      namespace navierstokes {
         namespace prototype2 {
            namespace repositories {
               class PrototypeRepositoryState;
               class PrototypeRepositoryStatePacked;
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
 * 		   build date: 10-11-2010 16:05
 *
 * @date   31/01/2011 09:45
 */
class peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryState { 
   
   public:
      
      typedef peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryStatePacked Packed;
      
      enum Action {
         WriteCheckpoint = 0, ReadCheckpoint = 1, Terminate = 2
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
      PrototypeRepositoryState();
      
      /**
       * Generated
       */
      PrototypeRepositoryState(const PersistentRecords& persistentRecords);
      
      /**
       * Generated
       */
      PrototypeRepositoryState(const Action& action);
      
      /**
       * Generated
       */
      virtual ~PrototypeRepositoryState();
      
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
      PrototypeRepositoryStatePacked convert() const;
      
      
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
    * 		   build date: 10-11-2010 16:05
    *
    * @date   31/01/2011 09:45
    */
   class peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryStatePacked { 
      
      public:
         
         typedef peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryState::Action Action;
         
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
         PrototypeRepositoryStatePacked();
         
         /**
          * Generated
          */
         PrototypeRepositoryStatePacked(const PersistentRecords& persistentRecords);
         
         /**
          * Generated
          */
         PrototypeRepositoryStatePacked(const Action& action);
         
         /**
          * Generated
          */
         virtual ~PrototypeRepositoryStatePacked();
         
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
         PrototypeRepositoryState convert() const;
         
         
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
      