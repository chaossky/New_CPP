#include <iostream>
int main()
{
	int N = 5; //�迭�� ����
	int i, j, temp;//������ �����Ѵ�.
	int data[] = { 5, 3, 7, 9, 1 };//����Ÿ�� �Է��Ѵ�.

	// Bubble Sort 
	for (i = 0; i < N; i++) { //�迭�� ���� ��ŭ ������ �ǽ��Ѵ�.
		for (j = 0; j < N - (i + 1); j++) { //�迭�� ���̺��ٴ� �۰� ������ �ǽ��Ѵ�.

			if (data[j] > data[j + 1]) { // ���� �ΰ��� ���� ���غ��� ���� ũ�ٸ� �ڸ��� �ٲ۴�.
				// �ڸ���ȯ
				temp = data[j + 1];
				data[j + 1] = data[j];
				data[j] = temp;
			}
		}
	}
}
