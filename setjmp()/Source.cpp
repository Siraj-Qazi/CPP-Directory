#include<iostream>
#include<conio.h>
#include<setjmp.h>

using namespace std;

jmp_buf env;
int main()
{
	int x = setjmp(env);
	cout << "\n On top.";

	int i;
	cin >> i;
	if (i == 1)
		longjmp(env, 1);
}
