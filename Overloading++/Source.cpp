#include <iostream>
#include <conio.h>
#include "Date.h"
using namespace std;

int main()
{
	Date d1(8, 6, 1999);
	Date d2(10, 18, 1998);


	cout << "\n d1 is: " << d1;
	cout << "\n d1+=6 -->  " << (d1 += 6);
	cout << "\n d1:  " << d1;

	d2.setDate(11, 7, 1994);
	cout << "\n d2 is: " << d2;
	cout << "\n ++d2 -->  " << (++d2);

	Date d3(2, 28, 2008);
	cout << "\n d3 is: " << d3;
	cout << "\n ++d3 -->  " << (++d3) << " (Leap year allows 29th February)";

	Date d4(7, 13, 2010);
	cout << "\n Testing the postfix increment operator:\n"
		<< " d4 is: " << d4 << endl
		<< " d4++ -->  " << (d4++)
		<< "\n d4 is: " << d4;

	_getch();


}