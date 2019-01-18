#include <iostream>
#include "invoice.h"

using namespace std;

Invoice::Invoice(string partNam, string partDesc, int itemQuan, int price)
{
	setPartName(partNam);
	setPartDescription(partDesc);
	setItemQuantity(itemQuan);
	setPricePerItem(price);
}

void Invoice::setPartName(string partNam)
{
	partName = partNam;
}

string Invoice::getPartName()
{
	return partName;
}

void Invoice::setPartDescription(string partDesc)
{
	partDescription = partDesc;
}

string Invoice::getPartDescription()
{
	return partDescription;
}

void Invoice::setItemQuantity(int itemQuan)
{
	if (!(itemQuan == 0))
		itemQuantity = itemQuan;
	else
		itemQuantity = 0;
}

int Invoice::getItemQuantity()
{
	return itemQuantity;
}

void Invoice::setPricePerItem(int price)
{
	if (!(price == 0))
		pricePerItem = price;
	else
		pricePerItem = 0;
}

int Invoice::getPricePerItem()
{
	return pricePerItem;
}

int Invoice::getInvoiceAmount()
{
	return pricePerItem * itemQuantity;
}

