#include <iostream>
#include "Gradebook.h"
using namespace std;

int main()
{
	Gradebook myGradeBook("<NO COURSE>");
	cout << "\n Current Course Name: " << myGradeBook.getCourseName() << endl;
	cout << "\n Enter new course name: ";
	string courseName;
	getline(cin, courseName);
	myGradeBook.setCourseName(courseName);
	cout << "\n New course name is: " << myGradeBook.getCourseName() << endl;
	getchar();
}