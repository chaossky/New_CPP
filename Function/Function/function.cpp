// function example
#include <iostream>
using namespace std;

int addition(int a, int b)
{
	int r;
	r = a + b;
	return r;
}

int subtraction(int x, int y)
{
	int z;
	if (x > y) {
		z = x - y;

	}
	else if(x<y) {
		z = y - x;
	}
	else {
		z = 0;
	}
	return z;
}

int main()
{
	int add;
	int sub;
	add= addition(50, 123);
	sub = subtraction(56, 40);
	cout << "The additon is " << add<<endl;
	cout << "The subtraction is " << sub << endl;
}