#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Person
{
public:
	Person() {}
	Person(string name, int age, int id) : name(name)
		, age(age)
		, id(id)
	{}

	virtual void getdata()
	{
	}

	virtual void putdata() const
	{

	}

	string name;
	int age;
	int id;
};

class Professor : public Person
{
public:

	Professor() : Person() {}
	void getdata()
	{
		std::cin >> name >> age >> publications;
		std::cin >> name >> age >> publications;
		id = Professor::next_id;
		++Professor::next_id;
	}

	void putdata() const
	{
		cout << name << " " << age << " " << publications << " " << id << endl;
	}

	static int next_id;
	int publications;

};

class Student : public Person
{
public:

	Student() : Person() {}

	void getdata()
	{
		cin >> name >> age;
		marks.clear();
		for (int i = 0; i < 6; ++i) {
			int x;
			cin >> x;
			marks.push_back(x);
		}
		id = Student::next_id;
		++Student::next_id;
	}

	void putdata() const
	{
		int s = 0;
		for (int i = 0; i < marks.size(); ++i) {
			s += marks[i];
		}
		cout << name << " " << age << " " << s << " " << id << endl;
	}

	static int next_id;
	vector<int> marks;
};

int Student::next_id = 1;
int Professor::next_id = 1;

int main() {

	
		int n, val;
	cin >> n; //The number of objects that is going to be created.
	Person *per[n];

	for (int i = 0; i < n; i++) {

		cin >> val;
		if (val == 1) {
			// If val is 1 current object is of type Professor
			per[i] = new Professor;

		}
		else per[i] = new Student; // Else the current object is of type Student

		per[i]->getdata(); // Get the data from the user.

	}

	for (int i = 0; i<n; i++)
		per[i]->putdata(); // Print the required output for each object.

	return 0;

}