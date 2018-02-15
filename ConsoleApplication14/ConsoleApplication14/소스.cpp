#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int makeArrayConsecutive2(std::vector<int> statues) {
	int temp = 0;
	int max = 0;

	sort(statues.begin(), statues.end());

	for (unsigned i = 0; i < statues.size() - 1; i++) {
		cout << statues[i + 1] - statues[i] << endl;
		if (statues[i + 1] - statues[i] > 1) {
			//return st1[i] - st1[i + 1];
			temp = statues[i + 1] - statues[i];
			if (temp>max) {
				max = temp;
			}
		}
	}

	return max;
}


int main() {
	vector<int> st1;
	
	st1.push_back(6);
	st1.push_back(2);
	st1.push_back(3);
	st1.push_back(8);
	/*
	for (unsigned i = 0; i < st1.size(); i++) {
		cout << st1[i] << " ";
	}
	cout << endl;
	sort(st1.begin(), st1.end());

	for (unsigned i = 0; i < st1.size(); i++) {
		cout << st1[i] << " ";
	}
	cout << endl;
	*/
	
	cout << "Â÷ÀÌ´Â"<< makeArrayConsecutive2(st1) << endl;

	return 0;

}