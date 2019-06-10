#pragma once
#include <iostream>
using namespace std;

class Rectangle
{
private:
	int base, height;
	int x_pos, y_pos;
public:
	Rectangle(int b, int h, int x, int y);
	~Rectangle();
	int Base();
	int Height();
	int Perimeter();
	int Area();
	void Moves(int delta_x, int delta_y);
	void Scale(float scale);
	friend ostream& operator << (ostream& s, Rectangle r);

};

