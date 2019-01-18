#include <iostream>
#include "Gradebook.h"

using namespace std;
int main()
{
	Gradebook x("<NO STRING>");
	x.setCourseName("Yo hoooo");
	cout << "\n Existing course name: " << x.getCourseName() << endl;
	x.setCourseName("CS 113");
	cout << "New course name: " << x.getCourseName() << endl;
	getchar();

}