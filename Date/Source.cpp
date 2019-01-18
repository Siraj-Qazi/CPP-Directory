#include <iostream>
#include <string>

class Date
{
public:
	int month;
	int day;
	Date(int mon, int dy) :month(mon), day(dy)
	{

	}
};

class Person
{
public:
	Date DateOfBirth;

};