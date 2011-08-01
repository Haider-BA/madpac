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

#include "MarDynMain.h"
#include "utils/Logger.h"
#include "utils/compile_info.h"
#include "parallel/DomainDecompBase.h"
#include "madpac/PeanoCouplingService.h"

madpac::mardyncoupling::MarDynMain::MarDynMain()
{
  config
      = madpac::PeanoCouplingService::getInstance().getConfig()->getMarDynConfig();

  configfileName = config->getMardynConfig();
  logfileName = config->getMardynLog();
  _console = config->getConsole();
  _thermostat = config->getThermostat();
  std::cout << "CFG " << configfileName << " LOG " << logfileName << " T "
      << _thermostat << " C " << _console << std::endl;

}

madpac::mardyncoupling::MarDynMain::~MarDynMain()
{

}

mardyn::MarDynSimulation*
madpac::mardyncoupling::MarDynMain::init(int numberOfTimesteps)
{
  //INIT MARDYN

  if (!_console)
    Log::global_log = new Log::Logger(Log::MARDYN_Info, logfileName);
  else
    Log::global_log = new Log::Logger(Log::MARDYN_Info);
  std::string compile_flags = getCompileFlags();
  Log::global_log->info() << "Compile-flags: " << compile_flags << std::endl;

  char *info_str = new char[MAX_INFO_STRING_LENGTH];
  get_compiler_info(&info_str);
  Log::global_log->info() << "Compiler: " << info_str << std::endl;
  get_compile_time(&info_str);
  Log::global_log->info() << "Compiled: " << info_str << std::endl;

#ifdef ENABLE_MPI
  get_mpi_info(&info_str);
  Log::global_log->info() << "MPI library: " << info_str << std::endl;
#endif
  get_timestamp(&info_str);
  Log::global_log->info() << "Started: " << info_str << std::endl;
  get_host(&info_str);
  Log::global_log->info() << "Execution host: " << info_str << std::endl;
#ifdef ENABLE_MPI
  int world_size = 1;
  MPI_CHECK(MPI_Comm_size(MPI_COMM_WORLD, &world_size));
  Log::global_log->info() << "Running with " << world_size << " processes."
      << std::endl;
#endif
  delete[] info_str;
  std::cout.precision(6);

  _mdSimulation = new mardyn::MarDynSimulation(numberOfTimesteps,
      configfileName);
  _mdSimulation->prepare_start();
  _runtime = double(clock()) / CLOCKS_PER_SEC;
  //END INIT MARDYN

  return _mdSimulation;
}

void
madpac::mardyncoupling::MarDynMain::shutdown()
{
  _mdSimulation->simulateFinish();
  _runtime = double(clock()) / CLOCKS_PER_SEC - _runtime;
  std::cout << "main: used " << std::fixed << std::setprecision(2) << _runtime
      << " s" << std::endl;
#ifdef ENABLE_MPI
  MPI_Finalize();
#endif
  delete _mdSimulation;
}

void
madpac::mardyncoupling::MarDynMain::simStep(int _numMdIterations)
{
  if (_thermostat == 0)
    _mdSimulation->thermostatOff();
  _mdSimulation->firstMDstep();
  for (int i = 0; i < _numMdIterations; i++)
    {
      if (_thermostat != 1 && _thermostat != 0)
        {
          if (i % _thermostat == 0)
            _mdSimulation->thermostatOn();
          else
            _mdSimulation->thermostatOff();
        }

      _mdSimulation->simulateStep();
    }
  _mdSimulation->finishFirstStep();
}

