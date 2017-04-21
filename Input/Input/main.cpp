#include <iostream>
#include "std_lib_facilities.h"


void main() {
	std::cout << "What is your first Name? \n";

	string first_name;

	std::cin >> first_name;
	std::cout << "Hello," << first_name << "!\n";

}