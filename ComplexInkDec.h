//ComplexInkDec.h
#pragma once
#include "Complex.h"
class ComplexInkDec:public Complex
{
public:
	ComplexInkDec();
	ComplexInkDec(double, double, double, double);
	ComplexInkDec(const ComplexInkDec&);

	ComplexInkDec& operator ++();
	ComplexInkDec& operator --();
	ComplexInkDec operator ++(int);
	ComplexInkDec operator --(int);
};

