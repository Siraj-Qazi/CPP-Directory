#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

int main()
{
	std::vector<std::string>vecOfStrings(3);

	// Initial vector of 3 strings
	for (int i = 0; i < vecOfStrings.size(); ++i)
		vecOfStrings[i] = std::string("Statically Pushed value");

	for (int i = 0; i < vecOfStrings.size(); ++i)
		std::cout << vecOfStrings[i] << std::endl;

	//Adding more items to the vector dynamically via push_back()
	for (int i = 0; i < 10; ++i)
		vecOfStrings.push_back("Value pushed dynamically");

	//iterator
	for (std::vector<std::string>::iterator it = vecOfStrings.begin(); it != vecOfStrings.end();it++)
		std::cout << *it << std::endl;

	int capacity = vecOfStrings.capacity();
	std::cout << "\n Capacity: " << capacity << std::endl;

	for (int i = 0; i < 1000; ++i)
	{
		vecOfStrings.push_back("New string added");
		std::cout << (capacity = vecOfStrings.capacity()) << std::endl;;
	}

	_getch();
}