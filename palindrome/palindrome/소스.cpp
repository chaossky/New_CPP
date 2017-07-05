#include<iostream>
#include<string>

bool checkPalindrome(std::string inputString) {
	bool result;
	int index = 0;
	if (inputString.length() <= 1) {
		result = true;
		return result;
	}

	while (inputString[index] == inputString[inputString.length() - index - 1]) {
		if (index > (inputString.length() / 2)) {
			result = true;
			return result;
		}
		else {
			index++;
		}
	}

	result = false;
	return result;
}

int main() {
	std::string str1 = "ABAA";
	std::cout << str1 << "is palindrome :" << checkPalindrome(str1) << std::endl;
	return 0;


}