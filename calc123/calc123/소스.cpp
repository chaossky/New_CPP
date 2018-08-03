#include <iostream>

int main() {

	double seed = 1.0;

	for (int i = 0; i < 1000; i++) {
		seed +=seed*0.01;
	
		std::cout << i << "     " << seed << '\n';
	}

	return 0;

}