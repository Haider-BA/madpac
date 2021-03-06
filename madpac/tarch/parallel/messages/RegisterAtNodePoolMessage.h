#ifndef _TARCH_PARALLEL_MESSAGES_REGISTERATNODEPOOLMESSAGE_H
#define _TARCH_PARALLEL_MESSAGES_REGISTERATNODEPOOLMESSAGE_H

#include "tarch/parallel/MPIConstants.h"
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
         class RegisterAtNodePoolMessage;
         class RegisterAtNodePoolMessagePacked;
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
class tarch::parallel::messages::RegisterAtNodePoolMessage { 
   
   public:
      
      typedef tarch::parallel::messages::RegisterAtNodePoolMessagePacked Packed;
      
      struct PersistentRecords {
         tarch::la::Vector<MPI_MAX_NAME_STRING_ADDED_ONE,short int> _nodeName;
         /**
          * Generated
          */
         PersistentRecords();
         
         /**
          * Generated
          */
         PersistentRecords(const tarch::la::Vector<MPI_MAX_NAME_STRING_ADDED_ONE,short int>& nodeName);
         
         /**
          * Generated
          */
         tarch::la::Vector<MPI_MAX_NAME_STRING_ADDED_ONE,short int> getNodeName() const;
         
         /**
          * Generated
          */
         void setNodeName(const tarch::la::Vector<MPI_MAX_NAME_STRING_ADDED_ONE,short int>& nodeName);
         
         
      };
      
   private: 
      PersistentRecords _persistentRecords;
      
   public:
      /**
       * Generated
       */
      RegisterAtNodePoolMessage();
      
      /**
       * Generated
       */
      RegisterAtNodePoolMessage(const PersistentRecords& persistentRecords);
      
      /**
       * Generated
       */
      RegisterAtNodePoolMessage(const tarch::la::Vector<MPI_MAX_NAME_STRING_ADDED_ONE,short int>& nodeName);
      
      /**
       * Generated
       */
      virtual ~RegisterAtNodePoolMessage();
      
      /**
       * Generated
       */
      tarch::la::Vector<MPI_MAX_NAME_STRING_ADDED_ONE,short int> getNodeName() const;
      
      /**
       * Generated
       */
      void setNodeName(const tarch::la::Vector<MPI_MAX_NAME_STRING_ADDED_ONE,short int>& nodeName);
      
      /**
       * Generated
       */
      short int getNodeName(int elementIndex) const;
      
      /**
       * Generated
       */
      void setNodeName(int elementIndex, const short int& nodeName);
      
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
      RegisterAtNodePoolMessagePacked convert() const;
      
      
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
   class tarch::parallel::messages::RegisterAtNodePoolMessagePacked { 
      
      public:
         
         struct PersistentRecords {
            tarch::la::Vector<MPI_MAX_NAME_STRING_ADDED_ONE,short int> _nodeName;
            /**
             * Generated
             */
            PersistentRecords();
            
            /**
             * Generated
             */
            PersistentRecords(const tarch::la::Vector<MPI_MAX_NAME_STRING_ADDED_ONE,short int>& nodeName);
            
            /**
             * Generated
             */
            tarch::la::Vector<MPI_MAX_NAME_STRING_ADDED_ONE,short int> getNodeName() const;
            
            /**
             * Generated
             */
            void setNodeName(const tarch::la::Vector<MPI_MAX_NAME_STRING_ADDED_ONE,short int>& nodeName);
            
            
         };
         
      private: 
         PersistentRecords _persistentRecords;
         
      public:
         /**
          * Generated
          */
         RegisterAtNodePoolMessagePacked();
         
         /**
          * Generated
          */
         RegisterAtNodePoolMessagePacked(const PersistentRecords& persistentRecords);
         
         /**
          * Generated
          */
         RegisterAtNodePoolMessagePacked(const tarch::la::Vector<MPI_MAX_NAME_STRING_ADDED_ONE,short int>& nodeName);
         
         /**
          * Generated
          */
         virtual ~RegisterAtNodePoolMessagePacked();
         
         /**
          * Generated
          */
         tarch::la::Vector<MPI_MAX_NAME_STRING_ADDED_ONE,short int> getNodeName() const;
         
         /**
          * Generated
          */
         void setNodeName(const tarch::la::Vector<MPI_MAX_NAME_STRING_ADDED_ONE,short int>& nodeName);
         
         /**
          * Generated
          */
         short int getNodeName(int elementIndex) const;
         
         /**
          * Generated
          */
         void setNodeName(int elementIndex, const short int& nodeName);
         
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
         RegisterAtNodePoolMessage convert() const;
         
         
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
      
