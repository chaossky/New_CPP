#include <iostream>
/*
iostream은 C++에 있는 입출력을 위한 헤더 파일이다. 
이는 C++ 표준 라이브러리의 하나이다. 
Input/Output Stream(입출력 스트림)에서 이름을 따왔다. 
C 프로그래밍 언어의 stdio.h와 같은 역할을 한다.

*/




using namespace std;

/*
네임스페이스는 내부 식별자(형식, 함수, 변수 등의 이름)에 범위를 제공하는 선언적 영역입니다. 
네임스페이스는 코드를 논리 그룹으로 구성하고 특히 코드베이스에 여러 라이브러리가 포함된 경우 
발생할 수 있는 이름 충돌을 방지하는 데 사용됩니다. 
네임스페이스 범위에 있는 모든 식별자는 한정 없이 서로에게 표시됩니다. 
네임스페이스 외부 식별자는 각 식별자의 정규화된 이름
(예: std::vector<std::string> vec;)을 사용하거나, 
단일 식별자에 대한 선언 사용(using std::string) 또는 
네임스페이스의 모든 식별자에 대한 using 지시문(using namespace std;)을 통해 
멤버에 액세스할 수 있습니다. 
헤더 파일의 코드는 항상 정규화된 네임스페이스 이름을 사용해야 합니다.
*/

int factorial(int num) {
	int result = 1;

	for (int i = 1; i <= num; ++i) {
		result *= i;
	}
	return result;
}

int main() {
	int result;
	for (int j = 1; j < 20; j++) {
		result = factorial(j);
		cout << j<<"! 은 " << result << " 입니다." << endl;

	}
	
	return 0;
}