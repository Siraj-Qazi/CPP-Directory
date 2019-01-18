#include <iostream>
#include <string>
#include <map>
#include <conio.h>

using namespace std;

class Person
{
public:
	string _name;
	int _age;

	Person(string name = "", int age = 0) : _name(name), _age(age) {}

	void display() const
	{
		cout << "\n Name: " << _name << " Age: " << _age << endl;
	}

	bool operator<(const Person& other) const
	{
		return _name < other._name;
	}
};

int main()
{
	map<Person, int> faculty;

	faculty[Person("Zaidi", 41)] = 342;
	faculty[Person("Imran", 38)] = 218;
	faculty[Person("Saeed", 45)] = 182;

	for (map<Person, int>::iterator it = faculty.begin(); it != faculty.end(); ++it)
		it->first.display();

	_getch();
}