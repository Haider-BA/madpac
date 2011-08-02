#ifndef _PEANO_SCENARIO_SHALLOWWATER_OUTPUT_H_
#define _PEANO_SCENARIO_SHALLOWWATER_OUTPUT_H_

#include <string>

namespace scenario {
  namespace shallowwater {
    class Output;
  }
}

class scenario::shallowwater::Output {
  public:
    virtual std::string getOutputFile() const = 0;
    virtual int getOutputTimeDistance() const = 0;
};

#endif
