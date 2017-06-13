// STL_EXE01.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
	int n;//값을 입력 받을 벡터의 size를 정할 변수를 정의한다.
	cin >> n; // 값을 입력받을 벡터의 값을 입력받는다.

	vector<int>v; //벡터를 선언한다.
	
	// 벡터에 입력받는 사이즈 갯수만큼 값을 입력받아 벡터에 저장한다.
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		v.push_back(x);
	}

	//벡터에 저장된 값을 정렬한다.
	sort(v.begin(), v.end());

	// 정렬된 벡터의 값을 출력한다.
	for (int i = 0; i < n; ++i) {
		cout << v[i]<<" ";
	}
	cout << endl;

    return 0;
}

