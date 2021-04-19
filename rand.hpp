#ifndef __RAND_HPP__ 
#define __RAND_HPP__

#include "base.hpp"
#include <stdlib.h>

class Rand : public Base {
      protected:
	double val;
	std::string str;
		
      public: 
	Rand() : Base () {
	srand(time(NULL));      
	val = rand() % 100 + 1;
      	str = std::to_string(val);
      	str.erase(str.find_last_not_of('0') + 1, std::string::npos);
      	str.erase(str.find_last_not_of('.') + 1, std::string::npos);
      	}
      double evaluate() { return val; }
      std::string stringify() {return str;}
};

#endif //__RAND_HPP__
