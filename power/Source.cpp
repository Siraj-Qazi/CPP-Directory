#include<iostream>

using namespace std;

int main()
{
	int a = 4;
	int x = 1;
	for (int i = 1; i <= 3; ++i)
	{

		x *= a;
	}
	cout << x;
	getchar();
}