#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int matrixElementsSum(std::vector<std::vector<int>> matrix) {
	
	int cost = 0;

	for (int i = 0; i < matrix[0].size(); i++)
	{
		for (int j = 0; j < matrix.size(); j++)
		{
			if (matrix[j][i] == 0)
				break;
			else
				cost += matrix[j][i];
		}
	}
	return cost;

}

int main() {
	/*
	vector<int> vector1;
	vector1.push_back(2);
	vector1.push_back(1);
	vector1.push_back(1);
	vector1.push_back(0);

	for (auto a = vector1.begin(); a != vector1.end(); a++) {
		cout << *a << endl;
	}
	*/
	

	matrixElementsSum([{ 0, 1, 1, 2 }, { 0, 5, 0, 0 }, { 2, 0, 3, 3 }]);

}