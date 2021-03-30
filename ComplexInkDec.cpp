//ComplexInkDec.cpp
#include "ComplexInkDec.h"

using namespace std;

ComplexInkDec::ComplexInkDec()
{
	x1 = 0;
	x2 = 0;
	y1 = 0;
	y2 = 0;
}
ComplexInkDec::ComplexInkDec(double x1, double y1, double x2, double y2)
{
	SetRe1(x1);
	SetRe2(x2);
	SetIm1(y1);
	SetIm2(y2);
}
ComplexInkDec::ComplexInkDec(const ComplexInkDec& a)
{
	x1 = a.x1;
	x2 = a.x2;
	y1 = a.y1;
	y2 = a.y2;
}
ComplexInkDec& ComplexInkDec::operator ++()
{
	++x1;
	return *this;
}
ComplexInkDec& ComplexInkDec::operator --()
{
	--x1;
	return *this;
}
ComplexInkDec ComplexInkDec::operator ++(int)
{
	y1++;
	return *this;
}
ComplexInkDec ComplexInkDec::operator --(int)
{
	y1--;
	return *this;
}