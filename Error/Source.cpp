#include<iostream>
#include<vector>

using namespace std;

//caluculate area of rectangle
int area(int length, int width) {
	return length*width;
}
double area(double length, double width) {
	return length*width;
}

int framed_area(int x, int y) {
	return area(x - 2, y - 2);
}

int main() {
	int x = -1;
	int y = 2;
	int z = 4;

	int area1 = area(x, y);
	int area2 = framed_area(1, z);
	int area3 = framed_area(y, z);

	cout << area1 << endl;
	cout << area2 << endl;
	cout << area3 << endl;
	


	return 0;

}