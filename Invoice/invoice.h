#include <string>
using namespace std;

class Invoice
{

private:
	string partName, partDescription;
	int itemQuantity, pricePerItem;

public:
	Invoice(string, string, int, int);

	void setPartName(string);
	string getPartName(void);

	void setPartDescription(string);
	string getPartDescription(void);

	void setItemQuantity(int);
	int getItemQuantity(void);

	void setPricePerItem(int);
	int getPricePerItem(void);

	int getInvoiceAmount(void);

};