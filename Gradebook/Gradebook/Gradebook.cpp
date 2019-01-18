#include <string>
#include <iostream>
#include "Gradebook.h"
using namespace std;

Gradebook::Gradebook(string name)
{
	setCourseName(name);
}
void Gradebook::setCourseName(string name)
{
	if (name.length() <= 25)
		courseName = name;
	else
	{
		cout << "\n Entered course name exceeds 25 Characters.\n Storing the first 25 characters.";
		setCourseName(name.substr(0, 25));
	}
}
string Gradebook::getCourseName()
{
	return courseName;
}