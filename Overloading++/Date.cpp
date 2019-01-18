#include <iostream>
#include <string>
#include "Date.h"

const int Date::days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

Date::Date(int m, int d, int y)
{
	setDate(m, d, y);
}

void Date::setDate(int m, int d, int y)
{
	if (m >= 1 && m <= 12)
		month = m;
	else
		throw invalid_argument(" Month must be 1-12");
	if (y >= 1900 && y <= 2100)
		year = y;
	else
		throw invalid_argument(" Enter year between 1900-2100");


	if ((month == 2 && leapYear(year) && d >= 1 && d <= 29) || (d >= 1 && d <= days[month]))
		day = d;
	else
		throw invalid_argument(" Day is out of range for current month and year.");

}

Date& Date::operator++()
{
	helpIncrement();
	return *this;
}

Date& Date::operator+=(int moreDays)
{
	for (int i = 0; i < moreDays; ++i)
		helpIncrement();

	return *this;
}

Date Date::operator++(int)
{
	Date temp = *this;
	helpIncrement();
	return temp;
}

bool Date::leapYear(int ty)
{
	if (ty % 400 == 0 || (ty % 100 != 0 && ty % 4 == 0))
		return true;
	else
		return false;
}

bool Date::endOfMonth(int td)
{
	if (month == 2 && leapYear(year))
		return (td == 29);
	else
		return (td == days[month]);
}

void Date::helpIncrement()
{
	if (!endOfMonth(day))
		++day;
	else
		if (month < 12)
		{
			++month;
			day = 1;
		}
		else
		{
			++year;
			month = 1;
			day = 1;
		}
}

ostream& operator<<(ostream& out, const Date& d)
{
	static string monthName[13] = { "","January","Feburary","March","April","May","June","July","August","September","October","November","December" };
	out << monthName[d.month] << " " << d.day << ", " << d.year;
	return out;
}