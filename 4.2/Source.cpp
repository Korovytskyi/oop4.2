#include "Circle.h"
#include "Rectangle.h"
#include "Trapeze.h"
#include "RightTrangle.h"

ostream& operator << (ostream& out, const Figure& r)
{
	return r.Print(out);
}

int main()
{
	Circle A(4);
	cout << A;
	cout << "Perimeter of Circle = " << A.Perimeter() << endl << endl;

	Rectangle B(4, 5);
	cout << B;
	cout << "Perimeter of Rectangle = " << B.Perimeter() << endl << endl;

	RightTrangle C(4, 5, 6);
	cout << C;
	cout << "Perimeter of RightTrangle = " << C.Perimeter() << endl << endl;

	Trapeze D(7, 5, 3, 4);
	cout << D;
	cout << "Perimeter of Trapeze = " << D.Perimeter() << endl << endl;

	Figure* pa = new Circle();
	Figure* pb = new Rectangle();
	Figure* pc = new RightTrangle();
	Figure* pd = new Trapeze();

	cout << typeid(pa).name() << endl;
	cout << typeid(*pa).name() << endl;
	cout << typeid(pb).name() << endl;
	cout << typeid(*pb).name() << endl;
	cout << typeid(pc).name() << endl;
	cout << typeid(*pc).name() << endl;
	cout << typeid(pd).name() << endl;
	cout << typeid(*pd).name() << endl << endl << endl;

	delete pa;
	delete pb;
	delete pc;
	delete pd;

	Figure* N[4];

	N[0] = &A;
	N[1] = &B;
	N[2] = &C;
	N[3] = &D;
	cout << "Perimter of N[0] = " << N[0]->Perimeter() << endl;
	cout << "Perimeter of N[1] = " << N[1]->Perimeter() << endl;
	cout << "Perimeter of N[2] = " << N[2]->Perimeter() << endl;
	cout << "Perimeter of N[3] = " << N[3]->Perimeter() << endl;
}
