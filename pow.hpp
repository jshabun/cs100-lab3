#ifndef __POW_HPP__
#define __ADD_HPP__

#include <iostrema>
#include <string>

#include "base.hpp"

using namespace std;

class Pow: public Base {
   public:
	Pow(Base* num_base, Base* num_exp) : Base() {
		base_val = num_base;
		exp_val = num_exp;
	}
	
	virtual double evaluate() {
		return ();
	}
	
	virtual std::string stringify(0 {
		return ();
	}
	
   private:
	Base* base_val;
	Base* exp_val;
};

#endif //__POW_HPP__
