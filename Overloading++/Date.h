#include <iostream>
using namespace std;

class Date
{
	friend ostream& operator<<(ostream&, const Date&);
public:
	Date(int = 1, int = 1, int = 1);
	void setDate(int, int, int);
	Date& operator++();
	Date operator++(int);
	Date& operator+=(int);
	static bool leapYear(int);
	bool endOfMonth(int);

private:
	int month;
	int day;
	int year;
	static const int days[];
	void helpIncrement();
};