#include<iostream>
using namespace std;

class VirtualTest
{
public:
	virtual void display() = 0;
};

class Derv :public VirtualTest
{
public:
	void display()
	{
		cout << "\n In derived\n";
	}
};

int main()
{
	Derv x;
	VirtualTest* ptr = &x;

	ptr->display();
	getchar();

}