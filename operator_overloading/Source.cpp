#include <iostream>
#include <iomanip>
#include <conio.h>
#include "Birthday.h"

using namespace std;
string temp;
ostream& operator<<(ostream& out, const Birthday& bday)
{
	out << bday.month << " " << bday.day << temp << ", " << bday.year << endl;
	return out;
}

istream& operator>>(istream& in, Birthday& bday)
{
	in >> bday.month >> setw(2)>> bday.day;
	in >> temp; in.ignore(2);
	in >> bday.year;
	return in;
}

int main()
{
	Birthday b;

	cout << "\n ==========  OPERATOR OVERLOADING SAMPLE ===========\n";
	cout << "\n Enter your birthday in the format Month dd, yyyy\n"
		<< endl
		<< " For example,\n January 26th, 1999\n\n ";
	cin >> b;
	cout << " \n Your birthday is: \n\n " << b;
	cout << "\n Day:\t" << b.getDay() << temp<< "\n Month:\t" << b.getMonth() << "\n Year:\t" << b.getYear();
	_getch();
	
}