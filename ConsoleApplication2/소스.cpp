#include <iostream>

using namespace std;

int main() {
	int i, S;
	i = 0;
	S = 0;
	while (i < 100) {
		S = S + i;
		i = i + 2;
		cout << "i=" << i << "   ������" << S << endl;
	}
	
	cout << "¦���� �� " <<S<< endl;

	return 0;
}