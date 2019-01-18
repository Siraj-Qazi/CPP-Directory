#include <iostream>
using namespace std;

int main()
{
	int ch;
	cout << "\n Value of cin.eof() at the start: " << cin.eof() << endl;
	cout << " Enter characters jitne marzi, Ctrl-Z to stop.\n ";

	while ((ch = cin.get()) != EOF)
		cout.put(ch);
 
	cout << "\n EOF on this system is: " << ch << endl;
	cout << "\n Now the value of cin.eof() is: " << cin.eof();
	getchar();
}