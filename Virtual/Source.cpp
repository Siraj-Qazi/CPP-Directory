#include<iostream>
using namespace std;

class Base
{
public:
	virtual void fun1()
	{
		cout << "\n Base\n";
	}
};

class Derived1 : public Base
{
public:
	virtual void fun1()
	{
		cout << "\n Derived1, fun1\n";

	}
     void fun2()
	{
		cout << "\n Derived1, fun2\n";

	}
};
class Derived2 : public Derived1
{
public:
	virtual void fun1()
	{
		cout << "\n Derived2, fun1\n";

	}
	virtual void fun2()
	{
		cout << "\n Derived2, fun2\n";

	}
};
class Derived3 : public Derived2
{
public:
	virtual void fun1()
	{
		cout << "\n Derived3, fun1\n";

	}
	void fun2()
	{
		cout << "\n Derived3, fun2\n";

	}
};



int main()
{
	Base* ptr1;
	Derived1* ptr2;
	Base b;
	Derived2 d;
	Derived3 x;
	ptr1 = &b;
	ptr2 = &d;

	ptr1->fun1();
	ptr2->fun1();
	ptr2->fun2();

	cout << "\n\n----------------\n\n";

    ((Derived3*)ptr2)->fun2();

	getchar();
}