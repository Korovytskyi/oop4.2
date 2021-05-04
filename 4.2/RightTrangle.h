#pragma once
#include "Figure.h"

class RightTrangle : public Figure
{
private:
	int a, b, c;

public:
	RightTrangle();
	RightTrangle(int a, int b, int c);

	int GetA() { return a; }
	int GetB() { return b; }
	int GetC() { return c; }
	void SetA(int value) { a = value; }
	void SetB(int value) { b = value; }
	void SetC(int value) { c = value; }

	virtual double Perimeter();
	virtual ostream& Print(ostream& out) const;
};