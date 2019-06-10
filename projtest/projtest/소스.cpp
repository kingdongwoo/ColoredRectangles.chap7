#include <iostream>

using namespace std;


class Rectangle {
private:
	int base, height;
	int x_pos, y_pos;

public:
	Rectangle(int b, int h, int x = 0, int y = 0) {
		base = b;
		height = h;
		x_pos = x;
		y_pos = y;
	}

	int Base() {
		return base;
	}
	int Height() {
		return height;
	}
	int Perimeter() {
		return ((base + height) * 2);
	}
	int Area() {
		return (base * height);
	}

	void Moves(int delta_x, int delta_y) {
		x_pos += delta_x;
		y_pos += delta_y;
	}

	void Scale(float scale) {
		base *= scale;
		height *= scale;
	}
};
ostream& operator << (ostream& s, Rectangle r) {
	s << "Rectangle: Base = " << r.Base() << ", Height = "
		<< r.Height() << endl;
	s << "\tArea = " << r.Area() << ", Perimeter = " << r.Perimeter() << endl;
	return s;
}

class Square : public Rectangle {
public:
	Square(int side, int x_pos = 0, int y_pos = 0) : Rectangle(side, side, x_pos, y_pos) { }
	int Perimeter() {
		return (Base() * 4);
	}
	float Diagonal() {
		return Base() * 1.4142;
	}
};

ostream& operator << (ostream& s, Square sq) {
	s << "Square: Side = " << sq.Base() << endl;
	s << "\tDiagonal = " << sq.Diagonal() << endl;
	s << "\tArea = " << sq.Area() << endl;
	s << "\tPerimeter = " << sq.Perimeter() << endl;
	return s;
}

class ColorRect : public Rectangle {

	int	color;	// the color stands for a color number

public:
	ColorRect(int b, int a, int c = 4, int x = 0, int y = 0) : Rectangle(b, a, x, y),
		color(c)
	{ }

	void Color(int c) {//set function
		color = c;
	}

	int	Color() {//get function
		return color;
	}
};

ostream& operator << (ostream& s, ColorRect cr) {
	// output the ColorRect as if it was a Rectangle
	s << (Rectangle)cr;

	// output the specific data (the color)
	s << "\tColor = " << cr.Color() << endl;
	return s;
}

int main() {

	ColorRect cr(10, 15, 5);//ostream overloading friend keyword�� header�� ����
	cout << cr << endl;





	system("pause");
	return 0;

}