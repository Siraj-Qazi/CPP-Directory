#include <iostream>

struct testForFunctions
{
private:
	int x;

public:
	void func()
	{
		std::cout << "\n C++ Structs(structures) allow functions within them!\n"
			<< "\n C structs don't :p\n"
			<< "\n The only difference between C++ structs and classes is\n"
			<< " then that C++ struct members are by default public, whereas\n"
			<< " class members are by default private.\n"
			<<" Also, bad inheritance seen incase of Structs.\n"
			<< " Access specifiers can be used in both these data structures :) ";

	}
};


int main()
{
	testForFunctions works;
	works.func();

	getchar();
}