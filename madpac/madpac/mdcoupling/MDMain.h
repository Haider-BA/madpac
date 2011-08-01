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

#ifndef MDMAIN_H_
#define MDMAIN_H_
namespace madpac {
  namespace mdcoupling {
template <typename type>
class MDMain;
}}

template <typename type>
class madpac::mdcoupling::MDMain
{
public:

  virtual
  type*
  init(int numberOfTimesteps) = 0;

  virtual
  void
  shutdown() = 0;

  virtual
  void
  simStep(int _numMdIterations) = 0;

  virtual
  type*
  getSimulation() = 0;


};

#endif /* MDMAIN_H_ */
