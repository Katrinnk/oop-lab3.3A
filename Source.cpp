//Source.cpp
#include "Complex.h"
#include "ComplexInkDec.h"
#include "ComplexDiy.h"
#include <iostream>

using namespace std;

int main()
{
	Complex k;
	cin >> k;
	cout << k;
	cout << "matematychni dii vykonuiutsia dlia takyh znachen: x1=2, y1=4, x2=5, y2=6" << endl;
	ComplexDiy b(2,4,5,6);
	b.Sub();
	b.Div();
	b.Conj1();
	b.Conj2();
	ComplexInkDec l(2,4,5,6);
	cout << endl;
	cout << "inkrement(prefiksna forma)" << endl;
	++l; cout << l;
	cout << "dykryment(prefiksna forma)" << endl;
	--l; cout << l;
	cout << "inkryment(postfiksna forma)" << endl;
	l++; cout << l;
	cout << "dykrement(postfiksna forma)" << endl;
	l--; cout << l;
	return 0;
}