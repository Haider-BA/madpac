#ifndef _PEANO_SCENARIO_SHALLOWWATER_INPUT_H_
#define _PEANO_SCENARIO_SHALLOWWATER_INPUT_H_

#include <string>

namespace scenario {
  namespace shallowwater {
    class Input;
  }
}

class scenario::shallowwater::Input {
  public:
    virtual std::string getBathymetryFile() const = 0;
    virtual std::string getDisplacementFile() const = 0;
};

#endif
