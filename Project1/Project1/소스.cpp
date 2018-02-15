#include <iostream>
using namespace std;

int main()
{
	int N = 5; //배열의 길이
	int i, j, temp;//변수를 정의한다.
	int data[] = { 5, 3, 7, 9, 1 };//데이타를 입력한다.

	cout << "처음 배열안에 들어 있는 것은 " << endl;
	for (int a = 0; a < 5; ++a) {
		cout << data[a] << " , ";
	}
	cout << endl;
	cout << "--------" << endl;
								   // Bubble Sort 
	for (i = 0; i < N; i++) { //배열의 길이 만큼 정렬을 실시한다.
		for (j = 0; j < N - (i + 1); j++) { //배열의 길이보다는 작게 정렬을 실시한다.

			if (data[j] > data[j + 1]) { // 만일 두개의 값을 비교해보고 값이 크다면 자리를 바꾼다.
										 // 자리교환
				temp = data[j + 1];
				data[j + 1] = data[j];
				data[j] = temp;
			}
		}
	}
	cout << "정렬을 한후에네" << endl;
	for (int a = 0; a < 5; ++a) {
		cout << data[a] << " , ";
	}
	cout << endl;
}
