#include<iostream>

using namespace std;

int main() {
	cout << "Please enter expression (we can handle + and -) :";
	int lval = 0;
	int rval;
	char op;
	int res;
	cin >> lval >> op >> rval;

	if (op == '+') { res = lval + rval; }
	else if (op == '-') { res = lval - rval; }
	else if (op == '*') { res = lval*rval; }
	else if (op == '/') {
		if (rval == 0) { cout << "if devider is zero, we cannot divie!!!!" << endl;
		res = 0;
		}
		else { res = lval / rval; }
	
	}

	cout << "RESULT : " << res << '\n';

	return 0;
}