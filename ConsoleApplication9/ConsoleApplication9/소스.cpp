#include <iostream>
#include<vector>
using namespace std;

int main() {
	//int sum=0;
	int part_sum1=0;
	int part_sum2 = 0;
	int n = 1230;
	int i;
	int i_n,p_n;
	i_n = n;
	p_n = n;
	

	for ( i = 0; i_n / 10 != 0; i++) {
		i_n = i_n / 10;
	}
	int x = i + 1;
	
		cout << n<<" �� " <<x<<" �ڸ��� �����Դϴ�."  << endl;
	if (x%2==0){
		cout << "�ڸ����� ¦���Դϴ�." << endl;
		/*
		while (n != 0) {
		sum += n % 10;
		n = n / 10;
		}
		*/
		

		//cout << "��ü ������ ���� " << sum<<endl;
		for (int k=0; k<(x/2); k++) {
		//	cout << k << endl;
		//	cout << p_n << endl;
			part_sum1 += p_n % 10;
				p_n = p_n / 10;
		}
		cout << "�޺κ� �� " << part_sum1 << endl;
		for (int l = (x/2); l<x; l++) {		
			part_sum2 += p_n % 10;
			p_n = p_n / 10;
		}
		cout << "�պκ� �� " << part_sum2 << endl;
		/*
		if(part_sum1==part_sum2){
			return true;
		}
		else {
			return false;
		}
		*/
		
		
	//	cout << sum << endl;
		//cout << part_sum << endl;
	}
}
		
	