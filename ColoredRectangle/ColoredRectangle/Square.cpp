#include "Square.h"
#include <iostream>
using namespace std;


Square::Square(int side, int x_pos = 0, int y_pos = 0) : Rectangle(side, side, x_pos, y_pos) { }


Square::~Square()
{
}

int Square::Perimeter()
{
	return  (Base() * 4);;
}

float Square::Diagonal()
{
	return  Base() * 1.4142;
}
ostream& operator << (ostream& s, Square sq) {
	s << "Square: Side = " << sq.Base() << endl;
	s << "\tDiagonal = " << sq.Diagonal() << endl;
	s << "\tArea = " << sq.Area() << endl;
	s << "\tPerimeter = " << sq.Perimeter() << endl;
	return s;
}