#include "Electronics.h"

int main()
{
	int item = 0;
	char cho;
	Component* cart[1000];

	do
	{
		system("cls");
		cout << "\n *************** X-Electronics ***************\n";

		cout << "\n Enter 1-2 to choose an item:\n"
			<< "\n 1 - LED"
			<< "\n 2 - Resistor\n ";
		int c;
		cin >> c;
		if (c == 1)
			cart[item++] = new LED;
		else if (c == 2)
			cart[item++] = new Resistor;
		else
		{
			cout << "\n Please select 1 or 2";
			_getch();
			main();
		}

		cout << "\n Add more items to cart (y/n)? ";
		cin >> cho;
	} while (cho == 'y');
	cout << "\n\n **********************************  MY CART  ***************************************\n\n"
		<< " COMPONENT\t\tQUANTITY\t\tPRICE PER ITEM\t\tTOTAL\n"
		<< "-------------------------------------------------------------------------------------\n";
	int grandTotal = 0;
	for (int i = 0; i < item; ++i)
	{
		grandTotal += cart[i]->displayCart();
	}
	cout << "\n-------------------------------------------------------------------------------------\n";



	cout << "\n GRAND TOTAL:  ===[ " << grandTotal << " $" << " ]===" << endl;
	_getch();

}
