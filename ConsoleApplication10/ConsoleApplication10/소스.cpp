#include<iostream>
#include<vector>
#include<algorithm>

/*
std::vector<int> sortByHeight(std::vector<int> a) {

}
*/
int main() {
	std::vector<int> a;
	std::vector<int> b;
	std::vector<int> c;
	int count = 0;
	//a = [-1, 150, 190, 170, -1, -1, 160, 180];
	a.push_back(-1);
	a.push_back(150);
	a.push_back(170);
	a.push_back(-1);
	a.push_back(-1);
	a.push_back(160);
	a.push_back(180);

	b = a;
	//Print Vector a
	/*
	for (unsigned i = 0; i < a.size(); i++) {
		std::cout << a.at(i);
		if (i == a.size() - 1) {
		}
		else {
			std::cout << ",";
		}
	}
	std::cout << std::endl;

	for (unsigned i = 0; i < b.size(); i++) {
	std::cout << b.at(i);
	if (i == b.size() - 1) {
	}
	else {
	std::cout << ",";
	}
	}
	std::cout << std::endl;
	*/

	//-1인자리 기억

	/*
	for (unsigned i = 0; i < b.size(); i++) {
		std::cout << b.at(i) << " ,";
	}
	*/

	sort(a.begin(), a.end());

	a.erase(a.begin(), a.begin() + count);
	int num1 = 0;
	for (unsigned i = 0; i < b.size(); i++) {		
		if (b.at(i) == -1) {
		
		}
		else {
			b.at(i) = a.at(num1);
			num1 = num1 + 1;
		}
		
	}
	for (unsigned i = 0; i < b.size(); i++) {
		std::cout << b.at(i);
		if (i == b.size() - 1) {
		}
		else {
			std::cout << ",";
		}
	}
	std::cout << std::endl;
}