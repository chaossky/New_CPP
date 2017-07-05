#include<iostream>
using namespace std;
int CenturyFromYear(int year) {
	int cent;
	cent = ((year - 1) / 100) + 1;
	return cent;
}

int main() {
	for (int i = 0; i < 3000; i++) {
		std::cout << "The year " << i << " is " << CenturyFromYear(i) << "c." << std::endl;
	}
	return 0;
}