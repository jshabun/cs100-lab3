#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

class Op : public Base {
  protected:
        double val;
        std::string str;

  public:
        Op(double value) : Base() {
        val = value;
        str = std::to_string(value);
        str.erase(str.find_last_not_of('0') + 1, std::string::npos);
        str.erase(str.find_last_not_of('.') + 1, std::string::npos);
}
        double evaluate() {return val; }
        std::string stringify() { return str; }
};


#endif //__OP_HPP__
