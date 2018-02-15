#include <iostream>
int main()
{
	int N = 5; //배열의 길이
	int i, j, temp;//변수를 정의한다.
	int data[] = { 5, 3, 7, 9, 1 };//데이타를 입력한다.

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
}
