#include "Electronics.h"


LED::LED()
{
	cout << "\n Select LED Colour:\n"
		<< "\n 1 - RED"
		<< "\n 2 - GREEN"
		<< "\n 3 - YELLOW"
		<< "\n 4 - MULTI-COLORED"
		<< "\n\n Enter 1/2/3/4 ?\n ";

	int x;
	cin >> x;

	cout << "\n Enter LED Quantity: ";
	cin >> quantity;
	switch (x)
	{
	case 1:
		color = "RED"; break;
	case 2:
		color = "GREEN"; break;
	case 3:
		color = "YELLOW"; break;
	case 4:
		multiColored = true; break;
	default:
		cout << "\n Please press 1/2/3 -_- ";
		_getch();
		LED();
	}
	if (!multiColored)
		cout << "\n " << color << " LED was added to Cart.\n";
	else
		cout << "\n\n  Multi-Colored LED(s) was added to Cart.\n";
}

int LED::displayCart()
{
	Component::displayCart();
	if (!multiColored)
	{
		priceTotal = quantity * singlePrice;
		cout << "\n " << color << " LED\t\t" << quantity << " Piece(s)\t\t" << singlePrice << "$\t\t\t"
			<< priceTotal << "$" << endl;
	}

	else
	{
		priceTotal = quantity * multiPrice;
		cout << "\n Multi-Colored LED\t" << quantity << " Piece(s)\t\t" << multiPrice << "$\t\t\t"
			<< priceTotal << "$" << endl;
	}
	return priceTotal;

}

Resistor::Resistor()
{
	cout << "\n Select Value of Resistance:\n"
		<< "\n 1 - 10 Ohm"
		<< "\n 2 - 50 Ohm"
		<< "\n 3 - 100 Ohm"
		<< "\n 4 - 150 Ohm"
		<< "\n 5 - 1k Ohm"
		<< "\n\n Enter 1/2/3/4/5 ?\n ";
	int c;
	cin >> c;

	price[0] = 10;
	price[1] = 12;
	price[2] = 15;
	price[3] = 19;
	price[4] = 30;

	itemPrice = price[c - 1];

	cout << "\n Enter Resistor quantity: ";
	cin >> quantity;

	switch (c)
	{
	case 1:
		resistance = 10; break;
	case 2:
		resistance = 50; break;
	case 3:
		resistance = 100; break;
	case 4:
		resistance = 150; break;
	case 5:
		resistance = 1000; break;

	default:
		cout << "\n Please press 1/2/3 -_- ";
		_getch();
		Resistor();
	}
	cout << "\n " << resistance << " Ohm resistor(s) added to Cart.\n";
}

int Resistor::displayCart()
{
	Component::displayCart();
	priceTotal = quantity * itemPrice;
	cout << "\n " << resistance << " Ohm Resistor\t" << quantity << " Piece(s)\t\t" << itemPrice << "$\t\t\t"
		<< priceTotal << "$" << endl;
	return priceTotal;
}
