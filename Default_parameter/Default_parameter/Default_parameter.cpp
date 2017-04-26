// default values in functions
#include <iostream>
using namespace std;
//In this case the variable b is set to 2 as a default,
//  If you don't specify the value of b it is set to 2
int divide(int a, int b = 2)
{
	int r;
	r = a / b;
	return (r);
}

int main()
{
	//Second parameter is not set so it will use 2 as a default value.
	cout << divide(12) << '\n';
	//Second parameter is set to 4
	cout << divide(200, 4) << '\n';
	return 0;
}