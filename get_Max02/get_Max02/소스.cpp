#include <iostream>
#include <array>

int main() {
//변수 선언
	/*int max, min;*/
	int	temp;
	unsigned int i;
	std::array<int, 10> myarray = { 37,200,35,1,2,40,60,55,3,8 };

	//먼저 배열을 출력해 본다.
	std::cout <<"초기 배열 :[ ";
	for (i = 0; i < myarray.size();i++) {
		std::cout << " " << myarray[i] << " ";
	}
	
	std::cout<<" ]"<<'\n';
	
	/*
	max = myarray[0];
	min = myarray[0];

	for (i = 0; i < myarray.size(); i++) {
		if (myarray[i] > max) {

			max = myarray[i];

		}
	}

	for (i = 0; i < myarray.size(); i++) {
		if (myarray[i] < min) {

			min = myarray[i];

		}
	}



	std::cout << "최대값은 " << max << " 입니다."<<std::endl;
	std::cout << "최소값은 " << min << " 입니다." << std::endl;

*/
	for (i = 0; i < myarray.size(); i++) {
		for (unsigned j = 1; j < myarray.size() - i; j++) {
			if (myarray[j] < myarray[j - 1]) {
				temp = myarray[j-1];
				myarray[j - 1] = myarray[j];
				myarray[j] = temp;
			}
		}
	}
	std::cout << "정렬(버블정렬) 오름차순 :[ ";
	for (i = 0; i < myarray.size(); i++) {
		std::cout << " " << myarray[i] << " ";
	}
	std::cout << " ]";

	std::cout << '\n';
	std::cout << "--------------------------------------------------------------------";
	std::cout << '\n';
	std::cout << "정렬(버블정렬) 내림차순 :[ ";
	

	for (i = 0; i < myarray.size(); i++) {
		for (unsigned j = 1; j < myarray.size() - i; j++) {
			if (myarray[j] > myarray[j - 1]) {
				temp = myarray[j - 1];
				myarray[j - 1] = myarray[j];
				myarray[j] = temp;
			}
		}
	}

	for (i = 0; i < myarray.size(); i++) {
		std::cout << " " << myarray[i] << " ";
	}

	std::cout << " ]";

	std::cout << '\n';
	return 0;
}