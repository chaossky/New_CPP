#include<iostream>
#include<cmath>

using namespace std;
int main() {
	for (unsigned i = 1; i < 10; i++) {
		cout << pow(i,2) + pow(i - 1,2) << endl;
	}


	return 0;

}