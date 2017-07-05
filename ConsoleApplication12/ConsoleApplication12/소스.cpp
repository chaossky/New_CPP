#include<iostream>
#include<vector>
int adjacentElementsProduct(std::vector<int> inputArray) {
	int max = 0;
	int temp=0;
	for (int i = 0; i < inputArray.size() - 1; ++i)
	temp= inputArray.at(i)*inputArray.at(i + 1);
	if (temp > max) {
		max = temp;
	}
	return max;
}

int main() {
	std::vector<int> inputArr1;
	//3, 6, -2, -5, 7, 3
	inputArr1.push_back(3);
	inputArr1.push_back(6);
	inputArr1.push_back(-2);
	inputArr1.push_back(5);
	inputArr1.push_back(7);
	inputArr1.push_back(3);

	std::cout << adjacentElementsProduct(inputArr1) << std::endl;


}