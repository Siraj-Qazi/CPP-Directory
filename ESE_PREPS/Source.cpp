#include<iostream>
using namespace std;

class Test
{
private:
	static int x;

public:
	static void showx()
	{
		cout << x;
	}
	void show()
	{
		cout << x;
	}
	void mod()
	{
		x++;
		cout << x;
	}
	static void modx()
	{
		cout << ++x;
	}
};

int Test::x = 0;

int main()
{
	Test a;
	a.mod();
	Test::modx();
	getchar();
}