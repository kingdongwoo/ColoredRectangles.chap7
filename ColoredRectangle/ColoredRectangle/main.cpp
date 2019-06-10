#include <iostream>
#include "ColorRect.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;


int main() {

	ColorRect cr(10, 15, 5);//ostream overloading friend keyword로 header에 정의
	cout << cr << endl;





	system("pause");
	return 0;

}