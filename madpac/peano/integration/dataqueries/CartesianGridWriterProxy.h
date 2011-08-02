// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_INTEGRATION_DATAQUERIES_CARTESIAN_GRID_WRITER_PROXY_H_
#define _PEANO_INTEGRATION_DATAQUERIES_CARTESIAN_GRID_WRITER_PROXY_H_


#include "tarch/plotter/griddata/regular/CartesianGridWriter.h"
#include "tarch/la/DynamicVector.h"
#include "tarch/logging/Log.h"

namespace peano {
  namespace integration {
    namespace dataqueries {
      class CartesianGridWriterProxy;
    }
  }
}


/**
 * Proxy for Cartesian Grid Writer
 *
 * Queries are always answered with a Cartesian grid writer. This writer is
 * passed to the service when the query is added, and, thus, the server knows
 * to which query which writer has to be used. This does not hold for the
 * workers, i.e. ranks other then 0. Those ranks have to forward data to be
 * written to the writer to rank 0. The implementation of this forwarding is
 * straightforward:
 *
 * - The root node's query service is added a new query.
 * - It stores this query locally, and
 * - informs all other busy nodes (workers) that there's a new query.
 * - Each worker copies the query data and creates a proxy.
 * - The worker stores the query-proxy pair into the set of queries.
 *
 * If a mapping wants to write query data, it get the writer from the query
 * service. On rank 0, the serice delivers directly the data writer. On all
 * other ranks, the mapping receives the proxy which forwards all calls
 * to rank 0.
 *
 * @author Tobias Weinzierl
 */

class peano::integration::dataqueries::CartesianGridWriterProxy:
public tarch::plotter::griddata::regular::CartesianGridWriter::VertexDataWriter {
private:
  /**
   * Logging device.
   */
  static tarch::logging::Log _log;
  int                                                     _tag;
  int                                                     _bufferSize;
  std::vector<double> _positionList;
  double*                                                 _data;

  int    _recordsPerEntry;
  double _minValue;
  double _maxValue;

  int    _id;

  void releaseMessages();
public:
  /**
   * Checks whether there's data pending. If there is data, it returns the
   * query id of this data. Otherwise it returns -1.
   */
  static void checkForPendingData(int dataTag, int& queryId, int& source);

  static void sendFinishedAcknowledgment(int dataTag);

  static void receiveQueryData(
      int dataTag,
      int source,
      tarch::plotter::griddata::regular::CartesianGridWriter::VertexDataWriter& vertexDataWriter,
      int recordsPerEntry
  );

  CartesianGridWriterProxy(int tag, int bufferSize, int recordsPerEntry, int id);
  virtual ~CartesianGridWriterProxy();
#if defined(Parallel)
  virtual void sendId(int *id);
  virtual void sendDataArray(double* array,const int length);
#endif
  virtual int getVertexIndex( const tarch::la::Vector<2,double>& position );
  virtual int getVertexIndex( const tarch::la::Vector<3,double>& position );

  /**
   * Well this is an operation the vertex cannot answer right now. So it
   * returns true all the time.
   */
  virtual bool containsVertex( const tarch::la::Vector<3,double>& position ) const;

  /**
   * Well this is an operation the vertex cannot answer right now. So it
   * returns true all the time.
   */
  virtual bool containsVertex( const tarch::la::Vector<2,double>& position ) const;
  virtual void plotVertex( int index, double value );
  virtual void plotVertex( int index, const tarch::la::Vector<2,double>& value );
  virtual void plotVertex( int index, const tarch::la::Vector<3,double>& value );

  /**
   * Has a slightly different semantics. As the proxy implement a fire&forget
   * semantics, this is only the local min value, i.e. the minimum off all
   * the data written on this node.
   */
  virtual double getMinValue() const;
  virtual tarch::la::Vector<3,double> getH() const;
  /**
   * Has a slightly different semantics. As the proxy implement a fire&forget
   * semantics, this is only the local min value, i.e. the minimum off all
   * the data written on this node.
   */
  virtual double getMaxValue() const;
  virtual void close();
};

#endif
