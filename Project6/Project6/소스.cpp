#include <stdio.h>
#define N 5

void swap(int * a, int * b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void) {
	int i, j;
	int arr[N] = { 2, 4, 1, 3, 5 };

	printf("Before : ");
	for (i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");


	//bubble sort.
	for (i = 0; i < N - 1; i++) {
		for (j = 0; j < N - 1 - i; j++) {

			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
			}

		}
	}


	printf("After  : ");
	for (i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}