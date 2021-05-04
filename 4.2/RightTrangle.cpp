#include "RightTrangle.h"


RightTrangle::RightTrangle()
	: a(0), b(0), c(0)
{}

RightTrangle::RightTrangle(int a, int b, int c)
	: a(a), b(b), c(0)
{}

double RightTrangle::Perimeter()
{
	double P = a + b + c;
	return P;
}

ostream& RightTrangle::Print(ostream& out) const
{
	out << "Katet = " << a << endl;
	out << "Katet = " << b << endl;
	out << "Hipotenus = " << c << endl;
	out << "Rectangle is visible" << endl;
	return out;
}