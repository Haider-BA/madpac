#ifndef _PEANO_APPLICATIONS_PUREGRID_RECORDS_REGULARGRIDCELL_H
#define _PEANO_APPLICATIONS_PUREGRID_RECORDS_REGULARGRIDCELL_H

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
      namespace puregrid {
         namespace records {
            class RegularGridCell;
            class RegularGridCellPacked;
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
 * @date   28/06/2011 13:47
 */
class peano::applications::puregrid::records::RegularGridCell { 
   
   public:
      
      typedef peano::applications::puregrid::records::RegularGridCellPacked Packed;
      
      struct PersistentRecords {
         bool _isInside;
         /**
          * Generated
          */
         PersistentRecords();
         
         /**
          * Generated
          */
         PersistentRecords(const bool& isInside);
         
         /**
          * Generated
          */
         bool getIsInside() const;
         
         /**
          * Generated
          */
         void setIsInside(const bool& isInside);
         
         
      };
      
   private: 
      PersistentRecords _persistentRecords;
      
   public:
      /**
       * Generated
       */
      RegularGridCell();
      
      /**
       * Generated
       */
      RegularGridCell(const PersistentRecords& persistentRecords);
      
      /**
       * Generated
       */
      RegularGridCell(const bool& isInside);
      
      /**
       * Generated
       */
      virtual ~RegularGridCell();
      
      /**
       * Generated
       */
      bool getIsInside() const;
      
      /**
       * Generated
       */
      void setIsInside(const bool& isInside);
      
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
      RegularGridCellPacked convert() const;
      
      
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
    * @date   28/06/2011 13:47
    */
   class peano::applications::puregrid::records::RegularGridCellPacked { 
      
      public:
         
         struct PersistentRecords {
            
            /** mapping of records:
            || Member 	|| startbit 	|| length
             |  isInside	| startbit 0	| #bits 1
             */
            long int _packedRecords0;
            
            /**
             * Generated
             */
            PersistentRecords();
            
            /**
             * Generated
             */
            PersistentRecords(const bool& isInside);
            
            /**
             * Generated
             */
            bool getIsInside() const;
            
            /**
             * Generated
             */
            void setIsInside(const bool& isInside);
            
            
         };
         
      private: 
         PersistentRecords _persistentRecords;
         
      public:
         /**
          * Generated
          */
         RegularGridCellPacked();
         
         /**
          * Generated
          */
         RegularGridCellPacked(const PersistentRecords& persistentRecords);
         
         /**
          * Generated
          */
         RegularGridCellPacked(const bool& isInside);
         
         /**
          * Generated
          */
         virtual ~RegularGridCellPacked();
         
         /**
          * Generated
          */
         bool getIsInside() const;
         
         /**
          * Generated
          */
         void setIsInside(const bool& isInside);
         
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
         RegularGridCell convert() const;
         
         
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
      
