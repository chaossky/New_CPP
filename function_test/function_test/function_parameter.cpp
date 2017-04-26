// passing parameters by reference
#include <iostream>
using namespace std;
/*
In C++, references are indicated with an ampersand (&) 
following the parameter type, as in the parameters taken by duplicate 
in the example above.

When a variable is passed by reference, 
what is passed is no longer a copy, but the variable itself, 
the variable identified by the function parameter, 
becomes somehow associated with the argument passed to the function,
and any modification on their corresponding local variables 
within the function are reflected in the variables passed as 
arguments in the call.
*/
void duplicate(int& a, int& b, int& c)
{
	a *= 3;
	b *= 3;
	c *= 3;
}

int main()
{
	int x = 1, y = 3, z = 7;
	duplicate(x, y, z);
	cout << "x=" << x << ", y=" << y << ", z=" << z << endl;
	return 0;
}

