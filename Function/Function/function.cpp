// function example
// 함수를 만들어 보자
//입출력 스트림 파일을 인쿠르드 하고
#include <iostream>
// 네임 스페이스를 스탠다드로 ㅋㅋ
using namespace std;


//두개의 숫자를 더하는 함수
int addition(int a, int b)
{

	int r;
	r = a + b;
	return r;
}

//두개의 숫자 중에서 큰 숫자에서 작은 숫자를 빼는 함수를 정의 한다.
int subtraction(int x, int y)
{
	int z;
	if (x > y) {
		z = x - y;

	}
	else if(x<y) {
		z = y - x;
	}
	else {
		z = 0;
	}
	return z;
}

int main()
{
	int add;
	int sub;
	add= addition(50, 123);
	sub = subtraction(56, 40);
	cout << "The additon is " << add<<endl;
	cout << "The subtraction is " << sub << endl;
}