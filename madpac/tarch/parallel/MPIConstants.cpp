#include "tarch/parallel/MPIConstants.h"

#include <sstream>

std::string tarch::parallel::StringTools::convert(const tarch::la::Vector<MPI_MAX_NAME_STRING_ADDED_ONE,short int>& value ) {
  std::ostringstream result;

  std::string::size_type i=0;
  while (i<MPI_MAX_NAME_STRING && value(i)!=0 ) {
    result << static_cast<char>(value(i));
    i++;
  }

  return result.str();
}


tarch::la::Vector<MPI_MAX_NAME_STRING_ADDED_ONE,short int> tarch::parallel::StringTools::convert( const std::string& value ) {
  tarch::la::Vector<MPI_MAX_NAME_STRING_ADDED_ONE,short int> result;
  assertion( value.length() <= MPI_MAX_NAME_STRING );
  std::string::size_type i=0;
  while (i<value.length()) {
    result(i) = value.at(i);
    i++;
  }
  result(i) = 0;
  return result;
}
