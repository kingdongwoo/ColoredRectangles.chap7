#include "ColorRect.h"
#include <iostream>
using namespace std;




ColorRect::ColorRect(int b, int a, int c =4, int x = 0, int y = 0) : Rectangle(b, a, x, y),
color(c)
{}
ColorRect::~ColorRect()
{
}

void ColorRect::Color(int c)
{
	//set function
		color = c;
	
}

int ColorRect::Color()
{
	return color;
}
ostream& operator << (ostream& s, ColorRect cr) {
	// output the ColorRect as if it was a Rectangle
	s << (Rectangle)cr;

	// output the specific data (the color)
	s << "\tColor = " << cr.Color() << endl;
	return s;
}