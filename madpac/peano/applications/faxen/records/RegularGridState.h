#ifndef _PEANO_APPLICATIONS_FAXEN_RECORDS_REGULARGRIDSTATE_H
#define _PEANO_APPLICATIONS_FAXEN_RECORDS_REGULARGRIDSTATE_H

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
      namespace faxen {
         namespace records {
            class RegularGridState;
            class RegularGridStatePacked;
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
class peano::applications::faxen::records::RegularGridState { 
   
   public:
      
      typedef peano::applications::faxen::records::RegularGridStatePacked Packed;
      
      struct PersistentRecords {
         double _xlength;
         double _ylength;
         double _delx;
         double _dely;
         double _t;
         double _tEnd;
         double _delt;
         double _tau;
         int _itermax;
         double _res;
         double _eps;
         double _omega;
         double _gamma;
         double _Re;
         double _GX;
         double _GY;
         double _UI;
         double _VI;
         double _PI;
         int _fileNumber;
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
         PersistentRecords(const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& delt, const double& tau, const int& itermax, const double& res, const double& eps, const double& omega, const double& gamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const int& fileNumber, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary);
         
         /**
          * Generated
          */
         double getXlength() const;
         
         /**
          * Generated
          */
         void setXlength(const double& xlength);
         
         /**
          * Generated
          */
         double getYlength() const;
         
         /**
          * Generated
          */
         void setYlength(const double& ylength);
         
         /**
          * Generated
          */
         double getDelx() const;
         
         /**
          * Generated
          */
         void setDelx(const double& delx);
         
         /**
          * Generated
          */
         double getDely() const;
         
         /**
          * Generated
          */
         void setDely(const double& dely);
         
         /**
          * Generated
          */
         double getT() const;
         
         /**
          * Generated
          */
         void setT(const double& t);
         
         /**
          * Generated
          */
         double getTEnd() const;
         
         /**
          * Generated
          */
         void setTEnd(const double& tEnd);
         
         /**
          * Generated
          */
         double getDelt() const;
         
         /**
          * Generated
          */
         void setDelt(const double& delt);
         
         /**
          * Generated
          */
         double getTau() const;
         
         /**
          * Generated
          */
         void setTau(const double& tau);
         
         /**
          * Generated
          */
         int getItermax() const;
         
         /**
          * Generated
          */
         void setItermax(const int& itermax);
         
         /**
          * Generated
          */
         double getRes() const;
         
         /**
          * Generated
          */
         void setRes(const double& res);
         
         /**
          * Generated
          */
         double getEps() const;
         
         /**
          * Generated
          */
         void setEps(const double& eps);
         
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
         double getGamma() const;
         
         /**
          * Generated
          */
         void setGamma(const double& gamma);
         
         /**
          * Generated
          */
         double getRe() const;
         
         /**
          * Generated
          */
         void setRe(const double& Re);
         
         /**
          * Generated
          */
         double getGX() const;
         
         /**
          * Generated
          */
         void setGX(const double& GX);
         
         /**
          * Generated
          */
         double getGY() const;
         
         /**
          * Generated
          */
         void setGY(const double& GY);
         
         /**
          * Generated
          */
         double getUI() const;
         
         /**
          * Generated
          */
         void setUI(const double& UI);
         
         /**
          * Generated
          */
         double getVI() const;
         
         /**
          * Generated
          */
         void setVI(const double& VI);
         
         /**
          * Generated
          */
         double getPI() const;
         
         /**
          * Generated
          */
         void setPI(const double& PI);
         
         /**
          * Generated
          */
         int getFileNumber() const;
         
         /**
          * Generated
          */
         void setFileNumber(const int& fileNumber);
         
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
      RegularGridState(const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& delt, const double& tau, const int& itermax, const double& res, const double& eps, const double& omega, const double& gamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const int& fileNumber, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary);
      
      /**
       * Generated
       */
      virtual ~RegularGridState();
      
      /**
       * Generated
       */
      double getXlength() const;
      
      /**
       * Generated
       */
      void setXlength(const double& xlength);
      
      /**
       * Generated
       */
      double getYlength() const;
      
      /**
       * Generated
       */
      void setYlength(const double& ylength);
      
      /**
       * Generated
       */
      double getDelx() const;
      
      /**
       * Generated
       */
      void setDelx(const double& delx);
      
      /**
       * Generated
       */
      double getDely() const;
      
      /**
       * Generated
       */
      void setDely(const double& dely);
      
      /**
       * Generated
       */
      double getT() const;
      
      /**
       * Generated
       */
      void setT(const double& t);
      
      /**
       * Generated
       */
      double getTEnd() const;
      
      /**
       * Generated
       */
      void setTEnd(const double& tEnd);
      
      /**
       * Generated
       */
      double getDelt() const;
      
      /**
       * Generated
       */
      void setDelt(const double& delt);
      
      /**
       * Generated
       */
      double getTau() const;
      
      /**
       * Generated
       */
      void setTau(const double& tau);
      
      /**
       * Generated
       */
      int getItermax() const;
      
      /**
       * Generated
       */
      void setItermax(const int& itermax);
      
      /**
       * Generated
       */
      double getRes() const;
      
      /**
       * Generated
       */
      void setRes(const double& res);
      
      /**
       * Generated
       */
      double getEps() const;
      
      /**
       * Generated
       */
      void setEps(const double& eps);
      
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
      double getGamma() const;
      
      /**
       * Generated
       */
      void setGamma(const double& gamma);
      
      /**
       * Generated
       */
      double getRe() const;
      
      /**
       * Generated
       */
      void setRe(const double& Re);
      
      /**
       * Generated
       */
      double getGX() const;
      
      /**
       * Generated
       */
      void setGX(const double& GX);
      
      /**
       * Generated
       */
      double getGY() const;
      
      /**
       * Generated
       */
      void setGY(const double& GY);
      
      /**
       * Generated
       */
      double getUI() const;
      
      /**
       * Generated
       */
      void setUI(const double& UI);
      
      /**
       * Generated
       */
      double getVI() const;
      
      /**
       * Generated
       */
      void setVI(const double& VI);
      
      /**
       * Generated
       */
      double getPI() const;
      
      /**
       * Generated
       */
      void setPI(const double& PI);
      
      /**
       * Generated
       */
      int getFileNumber() const;
      
      /**
       * Generated
       */
      void setFileNumber(const int& fileNumber);
      
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
    * @date   06/05/2011 22:32
    */
   class peano::applications::faxen::records::RegularGridStatePacked { 
      
      public:
         
         struct PersistentRecords {
            double _xlength;
            double _ylength;
            double _delx;
            double _dely;
            double _t;
            double _tEnd;
            double _delt;
            double _tau;
            int _itermax;
            double _res;
            double _eps;
            double _omega;
            double _gamma;
            double _Re;
            double _GX;
            double _GY;
            double _UI;
            double _VI;
            double _PI;
            int _fileNumber;
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
            PersistentRecords(const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& delt, const double& tau, const int& itermax, const double& res, const double& eps, const double& omega, const double& gamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const int& fileNumber, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary);
            
            /**
             * Generated
             */
            double getXlength() const;
            
            /**
             * Generated
             */
            void setXlength(const double& xlength);
            
            /**
             * Generated
             */
            double getYlength() const;
            
            /**
             * Generated
             */
            void setYlength(const double& ylength);
            
            /**
             * Generated
             */
            double getDelx() const;
            
            /**
             * Generated
             */
            void setDelx(const double& delx);
            
            /**
             * Generated
             */
            double getDely() const;
            
            /**
             * Generated
             */
            void setDely(const double& dely);
            
            /**
             * Generated
             */
            double getT() const;
            
            /**
             * Generated
             */
            void setT(const double& t);
            
            /**
             * Generated
             */
            double getTEnd() const;
            
            /**
             * Generated
             */
            void setTEnd(const double& tEnd);
            
            /**
             * Generated
             */
            double getDelt() const;
            
            /**
             * Generated
             */
            void setDelt(const double& delt);
            
            /**
             * Generated
             */
            double getTau() const;
            
            /**
             * Generated
             */
            void setTau(const double& tau);
            
            /**
             * Generated
             */
            int getItermax() const;
            
            /**
             * Generated
             */
            void setItermax(const int& itermax);
            
            /**
             * Generated
             */
            double getRes() const;
            
            /**
             * Generated
             */
            void setRes(const double& res);
            
            /**
             * Generated
             */
            double getEps() const;
            
            /**
             * Generated
             */
            void setEps(const double& eps);
            
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
            double getGamma() const;
            
            /**
             * Generated
             */
            void setGamma(const double& gamma);
            
            /**
             * Generated
             */
            double getRe() const;
            
            /**
             * Generated
             */
            void setRe(const double& Re);
            
            /**
             * Generated
             */
            double getGX() const;
            
            /**
             * Generated
             */
            void setGX(const double& GX);
            
            /**
             * Generated
             */
            double getGY() const;
            
            /**
             * Generated
             */
            void setGY(const double& GY);
            
            /**
             * Generated
             */
            double getUI() const;
            
            /**
             * Generated
             */
            void setUI(const double& UI);
            
            /**
             * Generated
             */
            double getVI() const;
            
            /**
             * Generated
             */
            void setVI(const double& VI);
            
            /**
             * Generated
             */
            double getPI() const;
            
            /**
             * Generated
             */
            void setPI(const double& PI);
            
            /**
             * Generated
             */
            int getFileNumber() const;
            
            /**
             * Generated
             */
            void setFileNumber(const int& fileNumber);
            
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
         RegularGridStatePacked(const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& delt, const double& tau, const int& itermax, const double& res, const double& eps, const double& omega, const double& gamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const int& fileNumber, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary);
         
         /**
          * Generated
          */
         virtual ~RegularGridStatePacked();
         
         /**
          * Generated
          */
         double getXlength() const;
         
         /**
          * Generated
          */
         void setXlength(const double& xlength);
         
         /**
          * Generated
          */
         double getYlength() const;
         
         /**
          * Generated
          */
         void setYlength(const double& ylength);
         
         /**
          * Generated
          */
         double getDelx() const;
         
         /**
          * Generated
          */
         void setDelx(const double& delx);
         
         /**
          * Generated
          */
         double getDely() const;
         
         /**
          * Generated
          */
         void setDely(const double& dely);
         
         /**
          * Generated
          */
         double getT() const;
         
         /**
          * Generated
          */
         void setT(const double& t);
         
         /**
          * Generated
          */
         double getTEnd() const;
         
         /**
          * Generated
          */
         void setTEnd(const double& tEnd);
         
         /**
          * Generated
          */
         double getDelt() const;
         
         /**
          * Generated
          */
         void setDelt(const double& delt);
         
         /**
          * Generated
          */
         double getTau() const;
         
         /**
          * Generated
          */
         void setTau(const double& tau);
         
         /**
          * Generated
          */
         int getItermax() const;
         
         /**
          * Generated
          */
         void setItermax(const int& itermax);
         
         /**
          * Generated
          */
         double getRes() const;
         
         /**
          * Generated
          */
         void setRes(const double& res);
         
         /**
          * Generated
          */
         double getEps() const;
         
         /**
          * Generated
          */
         void setEps(const double& eps);
         
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
         double getGamma() const;
         
         /**
          * Generated
          */
         void setGamma(const double& gamma);
         
         /**
          * Generated
          */
         double getRe() const;
         
         /**
          * Generated
          */
         void setRe(const double& Re);
         
         /**
          * Generated
          */
         double getGX() const;
         
         /**
          * Generated
          */
         void setGX(const double& GX);
         
         /**
          * Generated
          */
         double getGY() const;
         
         /**
          * Generated
          */
         void setGY(const double& GY);
         
         /**
          * Generated
          */
         double getUI() const;
         
         /**
          * Generated
          */
         void setUI(const double& UI);
         
         /**
          * Generated
          */
         double getVI() const;
         
         /**
          * Generated
          */
         void setVI(const double& VI);
         
         /**
          * Generated
          */
         double getPI() const;
         
         /**
          * Generated
          */
         void setPI(const double& PI);
         
         /**
          * Generated
          */
         int getFileNumber() const;
         
         /**
          * Generated
          */
         void setFileNumber(const int& fileNumber);
         
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
      
