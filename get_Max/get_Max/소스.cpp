#include <iostream>
#include <array>
using namespace std;

 

 int main() {
	 std::array<int,5> myarray= { 20,30,10,3,2 };
	 int max, min;
	 int i;
	 
	 max = myarray[0];
	 min = myarray[0];

	 for (i = 0; i < 5; i++) {
		 if (myarray[i] > max) {
			 max = myarray[i];
		 }
		 if (myarray[i] < min) {
			 min = myarray[i];
		 
		 }

	 }

	 /*
	 for (auto i = myarray.begin(); i != myarray.end(); ++i)
	 {
		 cout << *i << endl;
	 }
	 */

	 cout << "max= " << max << endl;
	 cout << "min= " << min << endl;


	 return 0;
 
 }