#include "Rectangle.h"

Rectangle::Rectangle()
	: a(0), b(0)
{}

Rectangle::Rectangle(int a, int b)
	: a(a), b(b)
{}


double Rectangle::Perimeter()
{
	double P = 2 * (a + b);
	return P;
}

ostream& Rectangle::Print(ostream& out) const
{
	out << "Wide = " << a << endl;
	out << "Length = " << b << endl;
	out << "Rectangle is visible" << endl;
	return out;
}