#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class Component
{
public:
	int quantity;
	virtual void displayCart()
	{

	}

};
class LED : public Component
{
public:
	string color;
	LED()
	{
		quantity++;
		cout << "\n Select LED Colour:\n"
			<< "\n 1 - RED"
			<< "\n 2 - GREEN"
			<< "\n 3 - YELLOW"
			<< "\n\n Enter 1/2/3 ?\n ";

		int x;
		cin >> x;
		switch (x)
		{
		case 1:
			color = "RED"; break;
		case 2:
			color = "GREEN"; break;
		case 3:
			color = "YELLOW"; break;
		default:
			cout << "\n Please press 1/2/3 -_- ";
			_getch();
			LED();
		}
		cout << " " << color << " LED was added to Cart.\n";
	}
	void displayCart()
	{
		Component::displayCart();
		cout << "\n " << color << " LED\t\t" << quantity <<" Piece(s)"<< endl;
	}
private:
	static int quantity;
};

class Resistor : public Component
{
public:
	int resistance;
	Resistor() 
	{
		quantity++;
		cout << "\n Select Value of Resistance:\n"
			<< "\n 1 - 10 Ohm"
			<< "\n 2 - 50 Ohm"
			<< "\n 3 - 100 Ohm"
			<< "\n 4 - 150 Ohm"
			<< "\n 5 - 1k Ohm"
			<< "\n\n Enter 1/2/3/4/5 ?" << endl;
		int c;
		cin >> c;
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
		cout << " " << resistance << " Ohm resistor added to Cart.\n";
	}
	void displayCart()
	{
		Component::displayCart();
		cout << "\n " << resistance << " Ohm Resistor\t" << quantity << " Piece(s)"<< endl;
	}
private:
	static int quantity;
};

int LED::quantity = 0;
int Resistor::quantity = 0;

int main()
{	
	int item=0;
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
		else if (c==2)
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
	cout << "\n\n ***********   MY CART  ************\n\n  COMPONENT\t\tQUANTITY\n-------------------------------------\n";
	for (int i = 0; i < item; ++i)
	{
		cart[i]->displayCart();
	}
	_getch();
	
}
