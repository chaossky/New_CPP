#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	vector <string> words;

	for (string temp; cin >> temp; )
		
		words.push_back(temp);
		
	cout << "Number of words:" << words.size() << '\n';

	cout << endl;
	cout << "*********Before Sorting **********" << endl;
	for (auto it = begin(words); it != end(words); ++it) {
		cout << "[" << *it << "]";
	}
	cout << endl;

	sort(words.begin(),words.end());

	cout << endl;
	cout << "*********After Sorting ****" << endl; 
	cout << "Number of words:" << words.size() << '\n';
	for (size_t i = 0; i < words.size(); ++i)
		if (i == 0 || words[i - 1] != words[i])
			cout << words[i] << "\n";




}