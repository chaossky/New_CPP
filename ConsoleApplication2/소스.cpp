#include <iostream>

using namespace std;

int main() {
	int i, S;
	i = 0;
	S = 0;
	while (i < 100) {
		S = S + i;
		i = i + 2;
		cout << "i=" << i << "   ÃÑÇÕÀº" << S << endl;
	}
	
	cout << "Â¦¼öÀÇ ÇÕ " <<S<< endl;

	return 0;
}