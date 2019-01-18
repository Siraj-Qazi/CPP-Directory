#include <iostream>
#include <string>

using namespace std;
class Birthday
{
	friend ostream& operator<<(ostream&, const Birthday&);
	friend istream& operator>>(istream&, Birthday&);

public:
	string getMonth() const
	{
		return month;
	}

	int getDay() const
	{
		return day;
	}

	int getYear() const
	{
		return year;
	}

private:
	int day;
	string month;
	int year;
};
