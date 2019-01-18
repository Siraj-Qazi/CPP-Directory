#include <iostream>

using namespace std;

template <typename T>
T add(T T1, T T2)
{
	T tSum = T();
	
	tSum = T1 + T2;
	return tSum;
}

int main()
{
	int sum = add(2, 3);
	float yo = add(3.400, 2.623);

	cout << sum;
	cout << "\n" << yo;
	system("pause");


}