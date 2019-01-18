#include<iostream>
#include<string>
using namespace std;

class Gradebook
{
private:
	string courseName;
public:
	void setCourseName(string name)
	{
		courseName = name;
	}
	void display(string name)
	{
		cout << "\n The Course Name is " << name << endl;
	}
};
void main(void)
{
	Gradebook myGradeBook;
	cout << "\n Enter the Course Name:\n ";
	string nameOfCourse;
	getline(cin, nameOfCourse);
	myGradeBook.setCourseName(nameOfCourse);
	myGradeBook.display(nameOfCourse);
	puts("");
	system("pause");
}
