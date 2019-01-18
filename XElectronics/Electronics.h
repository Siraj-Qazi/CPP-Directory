#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class Component
{
public:
	virtual int displayCart() = 0
	{
		return 0;
	}

};
class LED : public Component
{
public:
	string color;
	bool multiColored = false;
	LED();
	int displayCart();
private:
	int quantity = 0;
	int singlePrice = 13;
	int multiPrice = 20;
	int priceTotal = 0;
};

class Resistor : public Component
{
public:
	Resistor();
	int displayCart();
private:
	int resistance;
	int price[5];
	int itemPrice;
	int quantity = 0;
	int priceTotal = 0;
};

