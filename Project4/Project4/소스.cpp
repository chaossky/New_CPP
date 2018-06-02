#include <iostream>
/*
Author | Date | Email
Arrays are statically implemented data structures by some
programming languages like C and C++. Array size in a static program
must be known at compile time and cannot be altered at run time. In dynamic programming
languages arrays are objects and give the
programmer a way to alter the array size at run time.
*/
int main() {
	//we must know the size prior to run time
	int array[5];
	for (int i = 0; i < 5; i++) {
		array[i] = i * i;
		printf("array[%d]: %d\n", i, i*i);
	}
	//in order to add to array, we can use
	//individual indices
	array[0] = 100;//was 0
	printf("array[0]: %d\n", array[0]);
	//in order to resize array we must create a new array
	int arrayTwo[10];
	for (int i = 0; i<10; i++) {
		arrayTwo[i] = (i<5) ? array[i] : i * 2;
		printf("arrayTwo[%d]: %d\n", i, arrayTwo[i]);
	}
	/*
	Arrays are "easy" to implement, access, and delete members.
	As such, they are the most widely used data structure. However,
	if you want to insert an element at an already given position,
	you must create a new array one size bigger, shift everything,
	and initialize the given index. This is a time consuming task,
	especially if the array is of large size. The same is true about
	deleting a member.
	*/
	//we want to add 7 to "array", at index 3, without
	//altering the rest of the members
	int arrayThree[6];
	for (int i = 0; i < 6; i++) {
		if (i == 3)
			arrayThree[i] = 7;
		else
			arrayThree[i] = (i<3) ? array[i] : array[i - 1];
		printf("arrayThree[%d]: %d\n", i, arrayThree[i]);
	}
	/*
	Searching for a member in an unsorted array, can at worst take
	O(n) running time to finish, where n is the size of the array.
	However if array is sorted, you can use logic to find members
	more quickly. In this case O(logN) is the worst case running time.
	*/
	//we want to see if 9 is in our array
	//since we know our array is sorted we
	//can deal with it as such
	int target = 9;
	int size = sizeof(array) / sizeof(int);
	int middle = (int)(size / 2);
	bool b = array[middle] > target;
	int index = -1; //we will init to -1 so
					//if this returns we will know we didn¡¯t find it
	if (b) {
		for (int i = 0; i <= middle; i++)
			if (array[i] == target)
				index = i;
	}
	else {
		for (int i = middle; i < size; i++)
			if (array[i] == target)
				index = i;
	}
	printf("Index where target was found: %d\n", index);
	return 0;
}