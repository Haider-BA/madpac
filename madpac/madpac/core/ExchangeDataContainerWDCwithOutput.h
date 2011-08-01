/***************************************************************************
 *   Copyright (C) 2011 by Peter Hoffmann <peter.hoffmann@mytum.de>        *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef MADPAC_EXCHANGEDATACONTAINERWDCWITHOUTPUT_H_
#define MADPAC_EXCHANGEDATACONTAINERWDCWITHOUTPUT_H_

#include "ExchangeDataContainerWDC.h"

class ExchangeDataContainerWDCwithOutput : public ExchangeDataContainerWDC
{
public:
  ExchangeDataContainerWDCwithOutput(int dim, bool lb2md, bool md2lb,
      int mdIterations, int lbIterations);
  virtual
  ~ExchangeDataContainerWDCwithOutput();

  /**
   * Writes the output.
   */
  void
  output(int iteration);

  virtual void
  setLBRegion(double *data, int cellIndex[3]);

protected:
  double* _output;
  double *_voutput;
  bool _bvoutput;
  int _outputRate;
  std::string _outputFile;
  void
  writeOutput(const std::string& filename, int iteration);
  void
  writeVOutput(const std::string& filename, int iteration);
};

#endif /* MADPAC_EXCHANGEDATACONTAINERWDCWITHOUTPUT_H_ */
