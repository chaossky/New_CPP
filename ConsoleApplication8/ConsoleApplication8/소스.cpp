#include <iostream>
#include<string>
int main() {
	int hh = 0;
	int mm = 0;
	int result = 0;
	int n = 808;
		if (n >= 60)
		{
			hh = n / 60;
			mm = n%60;
		}
		else 
		{
			hh = 0;
			mm =n;
		}
		std::cout << hh << ":" << mm << "-->";
		
		result = hh/10+ hh%10+mm/10+mm%10;
		
		std::cout << result << std::endl;
	
	
	
	return 0;
}