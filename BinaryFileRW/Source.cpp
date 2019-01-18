#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>

using namespace std;

struct Person
{
	char name[50];
	int age;
	double height;
};

void writeToFile(Person& x)
{
	fstream file;
	std::string fileName("testFile.bin");
	file.open(fileName, ios::binary | ios::out);

	if (file.is_open()) {
		file.write(reinterpret_cast<char *>(&x), sizeof(Person));
		file.close();
	}

	else
		cout << "\n Couldnt create file: " + fileName << endl;

}

void readFromFile(Person& x)
{
	fstream file;
	std::string fileName("testFile.bin");
	file.open(fileName, ios::binary | ios::in);

	if (file.is_open()) {
		file.read(reinterpret_cast<char *>(&x), sizeof(Person));
		file.close();
	}

	else
		cout << "\n Couldnt read file: " + fileName << endl;

}

int main()
{
	Person someOne = { "Haris",223,161.123 };
	writeToFile(someOne);

	Person someOneElse;
	readFromFile(someOneElse);

	cout << "\n Someone else's data: \n"
		<< "\n Name:\t\t" << someOneElse.name
		<< "\n Age:\t\t" << someOneElse.age
		<< "\n Height:\t" << someOneElse.height
		<< endl;

	_getch();
}
