// STL_EXE01.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
	int n;//���� �Է� ���� ������ size�� ���� ������ �����Ѵ�.
	cin >> n; // ���� �Է¹��� ������ ���� �Է¹޴´�.

	vector<int>v; //���͸� �����Ѵ�.
	
	// ���Ϳ� �Է¹޴� ������ ������ŭ ���� �Է¹޾� ���Ϳ� �����Ѵ�.
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		v.push_back(x);
	}

	//���Ϳ� ����� ���� �����Ѵ�.
	sort(v.begin(), v.end());

	// ���ĵ� ������ ���� ����Ѵ�.
	for (int i = 0; i < n; ++i) {
		cout << v[i]<<" ";
	}
	cout << endl;

    return 0;
}

