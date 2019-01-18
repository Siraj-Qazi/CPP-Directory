#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i = 4;
	char sentence[10];
	cout << "\n Enter a sentence: " << endl;
	cin.width(5);
	while (cin >> sentence)
	{
		cout << setw(i++) << sentence << endl;
		cin.width(5);
	}
	getchar();
}