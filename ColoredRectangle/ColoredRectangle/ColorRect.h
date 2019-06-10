#pragma once
#include "Rectangle.h"
#include <iostream>

using namespace std;

class ColorRect : public Rectangle
{
private:
	int color;
public:
	
	

	ColorRect(int b, int a, int c, int x, int y);

	~ColorRect();
	void Color(int c);

	int	Color();
	friend ostream& operator << (ostream& s, ColorRect cr);

	
};

