#ifndef _TARCH_PARALLEL_MESSAGES_ACTIVATIONMESSAGE_H
#define _TARCH_PARALLEL_MESSAGES_ACTIVATIONMESSAGE_H

#ifdef Parallel
	#include <mpi.h>
#endif
#include "tarch/logging/Log.h"
#include "tarch/la/Vector.h"
#include <bitset>
#include <string>
#include <iostream>

namespace tarch {
   namespace parallel {
      namespace messages {
         class ActivationMessage;
         class ActivationMessagePacked;
      }
   }
}

/**
 * @author This class was autogenerated by DaStGen
 * 		   DataStructureGenerator (DaStGen), 2007-2009,
 * 		   by Wolfgang Eckhardt
 *
 * 		   build date: 17-10-2010 09:35
 *
 * @date   21/10/2010 09:03
 */
class tarch::parallel::messages::ActivationMessage { 
   
   public:
      
      typedef tarch::parallel::messages::ActivationMessagePacked Packed;
      
      struct PersistentRecords {
         int _newMaster;
         /**
          * Generated
          */
         PersistentRecords();
         
         /**
          * Generated
          */
         PersistentRecords(const int& newMaster);
         
         /**
          * Generated
          */
         int getNewMaster() const;
         
         /**
          * Generated
          */
         void setNewMaster(const int& newMaster);
         
         
      };
      
   private: 
      PersistentRecords _persistentRecords;
      
   public:
      /**
       * Generated
       */
      ActivationMessage();
      
      /**
       * Generated
       */
      ActivationMessage(const PersistentRecords& persistentRecords);
      
      /**
       * Generated
       */
      ActivationMessage(const int& newMaster);
      
      /**
       * Generated
       */
      virtual ~ActivationMessage();
      
      /**
       * Generated
       */
      int getNewMaster() const;
      
      /**
       * Generated
       */
      void setNewMaster(const int& newMaster);
      
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
      ActivationMessagePacked convert() const;
      
      
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
    * 		   build date: 17-10-2010 09:35
    *
    * @date   21/10/2010 09:03
    */
   class tarch::parallel::messages::ActivationMessagePacked { 
      
      public:
         
         struct PersistentRecords {
            int _newMaster;
            /**
             * Generated
             */
            PersistentRecords();
            
            /**
             * Generated
             */
            PersistentRecords(const int& newMaster);
            
            /**
             * Generated
             */
            int getNewMaster() const;
            
            /**
             * Generated
             */
            void setNewMaster(const int& newMaster);
            
            
         };
         
      private: 
         PersistentRecords _persistentRecords;
         
      public:
         /**
          * Generated
          */
         ActivationMessagePacked();
         
         /**
          * Generated
          */
         ActivationMessagePacked(const PersistentRecords& persistentRecords);
         
         /**
          * Generated
          */
         ActivationMessagePacked(const int& newMaster);
         
         /**
          * Generated
          */
         virtual ~ActivationMessagePacked();
         
         /**
          * Generated
          */
         int getNewMaster() const;
         
         /**
          * Generated
          */
         void setNewMaster(const int& newMaster);
         
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
         ActivationMessage convert() const;
         
         
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
      