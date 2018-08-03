#include<iostream>
#include<vector>

using namespace std;

int main() {

	std::vector<int> v{ 1,2,3 };

	for (auto &e : v)
		cout << e << " ";
	cout << endl;
	return 0;
}