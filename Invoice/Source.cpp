#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "invoice.h"

int main()
{
	Invoice a1("", "", 0, 0);
	Invoice a2("", "", 0, 0);

	string partName, partName2;
	string partDesc, partDesc2;
	int price, price2;
	int quantity, quantity2;

	cout << "\n Entering data for Object 1" << endl;
	cout << endl << " Enter part name:\n ";
	getline(cin, partName);

	cout << endl << " Briefly describe " << partName << ": " << endl;
	getline(cin, partDesc);

	cout << endl << " Enter price per item:\n ";
	cin >> price;

	cout << endl << " Enter order quantity:\n ";
	cin >> quantity;

	a1.setPartName(partName);
	a1.setPartDescription(partDesc);
	a1.setItemQuantity(quantity);
	a1.setPricePerItem(price);

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << endl << "\n Entering data for Object 2" << endl;
	cout << endl << " Enter part name:\n ";
	getline(cin, partName2);

	cout << endl << " Briefly describe " << partName2 << ": " << endl;
	getline(cin, partDesc2);

	cout << endl << " Enter price per item:\n ";
	cin >> price2;

	cout << endl << " Enter order quantity:\n ";
	cin >> quantity2;

	a2.setPartName(partName2);
	a2.setPartDescription(partDesc2);
	a2.setItemQuantity(quantity2);
	a2.setPricePerItem(price2);

	cout << "\n Data for Object 1:\n";
	cout << "Name: "<<a1.getPartName() << endl << "Description:\n "<<a1.getPartDescription() << endl <<" Quantity: "<< a1.getItemQuantity() << endl << " Price per item: "<< a1.getPricePerItem() << endl<<" Total Price: "<<a1.getInvoiceAmount();

	cout << "\n\n\n Data for Object 2:\n";
	cout << "Name: " << a2.getPartName() << endl << "Description:\n " << a2.getPartDescription() << endl << " Quantity: " << a2.getItemQuantity() << endl << " Price per item: " << a2.getPricePerItem()<< endl << " Total Price: " << a2.getInvoiceAmount();
	_getch();

}