#include<iostream>
#include<conio.h>
using namespace std;

class Base
{
public:
	int x;

	Base(int z) : x(z) 
	{
		// Empty
	}

	void display()
	{
		cout << "\n Base Class Display()\n";
		cout << "\n x = " << x <<" ";
	}
};

class Derived : public Base
{
public:
	Derived(int z): Base(z)
	{

	}
	void display()
	{
		cout << "\n Derived Class Display()\n";
		cout << "\n x = " << x<<" ";
	}
};

int main()
{
	Base* b;
	Base b1(7);
	Derived d(5);
	b = &d;
	b->display();
	_getch();
}