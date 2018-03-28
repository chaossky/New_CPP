#include<iostream>
using namespace std;

class Rectangle {
	int width, height;


public:
	void set_value(int, int);

	int area() {
		return width*height;
	}

};
//using scope operator (::)
void Rectangle::set_value(int x, int y) {
	width = x;
	height = y;
}


int main() {
	Rectangle rect,rectb;
	rect.set_value(3, 4);
	rectb.set_value(5, 6);

	cout << "첫번째 면적 area : " << rect.area()<<endl;
	cout << "두번째 면적 area : " << rectb.area() << endl;

	
	return 0;
}