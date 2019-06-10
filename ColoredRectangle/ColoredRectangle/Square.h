#pragma once
#include "Rectangle.h"


class Square : public Rectangle
{
public:
	Square(int side, int x_pos , int y_pos);
	~Square();
	int Perimeter();
	float Diagonal();
	friend ostream& operator << (ostream& s, Square sq);
	
};

