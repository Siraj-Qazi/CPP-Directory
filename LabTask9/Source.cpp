#include <iostream>
#include <string>
#include <conio.h>
#include "SDK.h"
#include "SourceFuncs.h"
using namespace std;

int main()
{
	system("cls");
	cout << "\n #############@###########\n\n   ADMINISTRATOR PORTAL"
		<< endl
		<< "\n #########################"
		<< endl;

    cout << "\n Press your option NUMBER: \n"
		 << endl
		 << "\n 1. Add Employee"
		 << "\n 2. Manage/Transfer Employees between teams"
		 << "\n 3. Assign Project to team"
		 << "\n 4. Print an employee's salary\n\n ";

	int i;
	cin.clear();
	cin >> i;
	switch (i)
	{
	case 1:

		addEmployee();
		system("pause");
	case 2:
		transferEmployee();
		break;
	case 3:
		assignProject();
		break;
	case 4:
		printSalary();
		break;
	default:
		cout << " Please enter 1-4\n <Press any key>\n";
		_getch();
		main();
	}





	_getch();
}
kkjhjk