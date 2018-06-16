// constructing vectors
#include <iostream>
#include <vector>

int main()
{
	// constructors used in the same order as described above:
	std::vector<int> first;                                // empty vector of ints
	std::vector<int> second(4, 100);                       // four ints with value 100
	std::vector<int> third(second.begin(), second.end());  // iterating through second
	std::vector<int> fourth(third);                       // a copy of third

														  // the iterator constructor can also be used to construct from arrays:
	int myints[] = { 16,2,77,29 };
	std::vector<int> fifth(myints, myints + sizeof(myints) / sizeof(int));

	int length_of_array = fifth.size();

	for (auto i : fifth) // access by value, the type of i is int
		std::cout << i << ' ';
	std::cout << '\n';

	int temp=fifth.at(0);
	if (fifth.at(0) > fifth.at(1)) {
		temp = fifth.at(1);
		fifth.at(1) = fifth.at(0);
		fifth.at(0) = temp;
	}
	std::cout << "The first value of fifth vector is " << temp << std::endl;
	std::cout << "The length of vector is " << length_of_array << std::endl;

	/*
	std::cout << "The contents of first are:";
	for (std::vector<int>::iterator it = first.begin(); it != first.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';

	std::cout << "The contents of second are:";
	for (std::vector<int>::iterator it = second.begin(); it != second.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';

	std::cout << "The contents of third are:";
	for (std::vector<int>::iterator it = third.begin(); it != third.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';

	std::cout << "The contents of fourth are:";
	for (std::vector<int>::iterator it = fourth.begin(); it !=fourth.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';

	*/

/*
std::cout << "The contents of fifth are:";
for (std::vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
std::cout << ' ' << *it;
std::cout << '\n';

*/
	
	
	for (auto i : fifth) // access by value, the type of i is int
		std::cout << i << ' ';
	std::cout << '\n';
}