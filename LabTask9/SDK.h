#include<iostream>
#include<string>

class XCORP
{
private:
	int totalProjects;
	int annualProfit;
	int miscExpenditures;
	int perfIncrement;
public:
	XCORP() : totalProjects(0), annualProfit(0), miscExpenditures(0), perfIncrement(0)
	{
		// Empty
	}
	
	int getProfit();
};


