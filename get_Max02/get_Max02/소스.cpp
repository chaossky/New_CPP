#include <iostream>
#include <array>

int main() {
//���� ����
	/*int max, min;*/
	int	temp;
	unsigned int i;
	//�迭�� �����ϰ� ���Ҹ� ���� ���
	std::array<int, 13> myarray = { 37,200,35,1,2,40,60,55,3,8,4,7,199 };

	//���� �迭 ���� ���Ҹ� ���ʴ�� ���
	std::cout <<"�ʱ� �迭 :[ ";
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
	std::cout << "�ִ밪�� " << max << " �Դϴ�."<<std::endl;
	std::cout << "�ּҰ��� " << min << " �Դϴ�." << std::endl;
*/

	//���� ��Ʈ�� ����
	for (i = 0; i < myarray.size(); i++) {
		for (unsigned j = 1; j < myarray.size() - i; j++) {
			if (myarray[j] < myarray[j - 1]) {
				temp = myarray[j-1];
				myarray[j - 1] = myarray[j];
				myarray[j] = temp;
			}
		}
	}

	std::cout << "����(��������) �������� :[ ";
	for (i = 0; i < myarray.size(); i++) {
		std::cout << " " << myarray[i] << " ";
	}
	std::cout << " ]";
	std::cout << '\n';
	std::cout << "--------------------------------------------------------------------";
	std::cout << '\n';
	std::cout << "����(��������) �������� :[ ";
	
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