#include<iostream>


int main() {
	int int1 = INT_MAX;//정수형의 최대값
	int int2 = INT_MIN;//정수형의 최소값
	
	//먼저 인티저(정수) 데이타 형의 최대값과 최소값을 출력해 보았다.
	std::cout << int1 << std::endl;
	std::cout << int2 << std::endl;


	//위의 값에 정수형 최대값에 1을 더하면 정수형의 최소값이 출력된다.
	//또한      정수형의 최소값에 1을 빼면 정수형의 최대값이 출력된다.
	std::cout << int1+1 << std::endl;
	std::cout << int2-1 << std::endl;



	return 0;

}