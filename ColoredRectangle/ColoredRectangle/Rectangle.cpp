#include "Rectangle.h"
#include <iostream>

using namespace std;



Rectangle::Rectangle(int b, int h, int x = 0, int y = 0)
{
	base = b;
	height = h;
	x_pos = x;
	y_pos = y;
}

Rectangle::~Rectangle()
{
}

int Rectangle::Base()
{
	return base;
}

int Rectangle::Height()
{
	return height;
}

int Rectangle::Perimeter()
{
	return ((base + height) * 2);
}

int Rectangle::Area()
{
	return ((base + height));
}

void Rectangle::Moves(int delta_x, int delta_y)
{
	x_pos += delta_x;
	y_pos += delta_y;
}

void Rectangle::Scale(float scale)
{
	base *= scale;
	height *= scale;
}
ostream& operator << (ostream& s, Rectangle r) {
	s << "Rectangle: Base = " << r.Base() << ", Height = "
		<< r.Height() << endl;
	s << "\tArea = " << r.Area() << ", Perimeter = " << r.Perimeter() << endl;
	return s;
}