#include<iostream>


int main() {
	int int1 = INT_MAX;//�������� �ִ밪
	int int2 = INT_MIN;//�������� �ּҰ�
	
	//���� ��Ƽ��(����) ����Ÿ ���� �ִ밪�� �ּҰ��� ����� ���Ҵ�.
	std::cout << int1 << std::endl;
	std::cout << int2 << std::endl;


	//���� ���� ������ �ִ밪�� 1�� ���ϸ� �������� �ּҰ��� ��µȴ�.
	//����      �������� �ּҰ��� 1�� ���� �������� �ִ밪�� ��µȴ�.
	std::cout << int1+1 << std::endl;
	std::cout << int2-1 << std::endl;



	return 0;

}