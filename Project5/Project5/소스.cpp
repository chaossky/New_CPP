#include <iostream>
#include <vector>

int main()
{
	// int N = 5; //배열의 길이
	 int i, j, temp;
	int data[] = { 5, 3, 7, 9, 1 };
	int N = sizeof(data);

	std::cout << N << std::endl;

	std::cout << "Before ->";

	for (int x : data)	
		std::cout << x << " ";
		
	std::cout << std::endl;
	
		// Bubble Sort 
		 for (i = 0; i < N; i++) {
		 for (j = 0; j < N - (i + 1); j++) {
			 if (data[j] > data[j + 1]) {
				 // 자리교환
					 temp = data[j + 1];
				data[j + 1] = data[j];
				data[j] = temp;
				
			}
			
		}
		
	}
		 std::cout << "After ->";
		 for (int x : data)
			 std::cout << x << " ";
		 
		 std::cout<<std::endl;
	}

