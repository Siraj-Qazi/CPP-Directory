#include <iostream>
#include <map>
#include <string>
#include <conio.h>

using namespace std;

class Notebook
{
	friend ostream& operator<<(ostream&, const Notebook&);

private:
	string _manufacturer;
	string _model;
	string _processorVendor;
	string _processor;
	string _RAM;
	string _hddStorage;
	string _ssdStorage;

public:
	Notebook() :
		_manufacturer(""),
		_model(""),
		_processorVendor(""),
		_processor(""),
		_RAM(""),
		_hddStorage(""),
		_ssdStorage("")
	{}

	Notebook(string manufacturer, string model, string vendor, string processor, string ram, string hdd, string ssd) :
		_manufacturer(manufacturer),
		_model(model),
		_processorVendor(vendor),
		_processor(processor),
		_RAM(ram),
		_hddStorage(hdd),
		_ssdStorage(ssd)
	{}

	void display()
	{
		cout << "\n Product Specifications\n "
			<< "\n " << _manufacturer << " " << _model
			<< "\n Processor: " << _processorVendor << " " << _processor
			<< "\n Memory: " << _RAM << " "
			<< "\n Storage: " << _ssdStorage << " SSD " << _hddStorage << " HDD"
			<< endl;
	}
};

ostream& operator<<(ostream& out, const Notebook& nt)
{
	out << "\n Product Specifications\n "
		<< "\n " << nt._manufacturer << " " << nt._model
		<< "\n Processor: " << nt._processorVendor << " " << nt._processor
		<< "\n Memory: " << nt._RAM << " "
		<< "\n Storage: " << nt._ssdStorage << " SSD " << nt._hddStorage << " HDD"
		<< endl;
	return out;
}
int main()
{
	map<string, Notebook> HouseLaptops;

	Notebook Sirajs(
		"HP",
		"EliteBook 2170p", 
		"Intel", 
		"Core i5-3427U @ 2.30 GHz vPro", 
		"4 GB GDDR3", 
		"225 GB", 
		"1 TB"
	);

	Notebook Wahajs(
		"HP", 
		"OMEN 17", 
		"Intel", 
		"Core i7-7700K @ 3.6 GHz", 
		"16 GB GDDR5", 
		"512 GB", 
		"2 TB"
	);

	HouseLaptops.insert(make_pair("Sirajs", Sirajs));
	HouseLaptops.insert(make_pair("Wahajs", Wahajs));

	// Or this syntax

	HouseLaptops["Sirajs"]=  Notebook(
		"HP",
		"OMEN 17",
		"Intel",
		"Core i7-7700K @ 3.6 GHz",
		"16 GB GDDR5",
		"512 GB",
		"2 TB"
	);

	HouseLaptops["Wahajs"] = Notebook(
		"HP",
		"OMEN 17",
		"Intel",
		"Core i7-7700K @ 3.6 GHz",
		"16 GB GDDR5",
		"512 GB",
		"2 TB"
	);

	for (map<string, Notebook>::iterator it = HouseLaptops.begin(); it != HouseLaptops.end(); ++it)
		it->second.display();

	_getch();

	// Operator Overloading test

	cout << Sirajs;
	cout << Wahajs;

	_getch();
}