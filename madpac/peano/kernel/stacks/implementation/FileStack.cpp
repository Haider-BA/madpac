#include "peano/kernel/stacks/implementation/FileStack.h"

int peano::kernel::stacks::implementation::getUniqueGlobalStackNumber() {
  static int uniqueNumber = -1;
  uniqueNumber++;
  return uniqueNumber;
}
