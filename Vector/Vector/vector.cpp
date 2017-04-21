// constructing vectors
#include <iostream>
#include <vector>

int main()
{
	// constructors used in the same order as described above:
	// 비어있는 벡터 정의
	std::vector<int> first;                                // empty vector of ints
	//2개의 크기, 값은 모두 100dmfh gkfekd
	std::vector<int> second(6, 100);                       // four ints with value 100
	
	std::vector<int> third(second.begin(), second.end());  // iterating through second

	std::vector<int> fourth(third);                       // a copy of third

														  // the iterator constructor can also be used to construct from arrays:
	int myints[] = { 16,2,77,29 };
	std::vector<int> fifth(myints, myints + sizeof(myints) / sizeof(int));

	
	for (std::vector<int>::iterator it1 = second.begin(); it1 != second.end(); ++it1) {
		//벡터 연산에서 인덱스를 구하는 방법 구현 
		//스택 오버 플로우에서 발견
		int index = std::distance(second.begin(), it1);
		std::cout << "second["<< index <<"] = "<<*it1 << std::endl;
		
	}
		

	//std::cout << str << std::endl;
	/* 
	std::cout << "The contents of fifth are:";
	for (std::vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';
	*/
	return 0;
}