#include <iostream>
#include <exception>
#include <string>
#include <conio.h>

using namespace std;

class MyException : public exception
{
public:
	virtual const char* what() const throw() {
		return "\n Something Bad Happened.";
	}
};

int main()
{
	
	try
	{
		char x = _getch();
		if (x == 'a')
			throw MyException();
	}
	catch (MyException& e)
	{
		cout << "\n Something's wrong. Error Message: " << e.what();
	}

	_getch();
}