#include <iostream>
using namespace std;
class Calculator
{
public:
	int add(int x, int y)
	{
		return x + y;
	}
	int multiply(int x, int y)
	{
		return x*y;
	}
	unsigned long long fact(int x)
	{
		if (x == 1)
			return 1;
		else
			return x*fact(x - 1);
	}
	int square(int x)
	{
		return x*x;
	}
};
void main(void)
{
	Calculator calc;
	std::cout << "\n Enter two numbers: ";
	int x, y;
	std::cin >> x >> y;
	int sum = calc.add(x, y);
	int prod = calc.multiply(x, y);
	unsigned long long f1 = calc.fact(x);
	unsigned long long f2 = calc.fact(y);
	int sq1 = calc.square(x);
	int sq2 = calc.square(y);
	std::cout << "\n "<<x<<" + "<<y<<" = "<<sum<<"\n "<<x<<" x "<<y<<" = "<<prod<<"\n Factorial of "<<x<<" = "<<f1<<"\n";
	std::cout << " Factorial of "<<y<<" = "<<f2<<"\n "<<x<<" squared is "<<sq1<<"\n "<<y<<" squared is "<<sq2<<\n\n";
	system("pause");
}