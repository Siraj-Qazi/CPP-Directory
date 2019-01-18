#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	char line[100];
	cout << " Type a line terminated by 't'" << endl;
	cin.get(line, 100, 't');
	cout << line;
	_getch();
}