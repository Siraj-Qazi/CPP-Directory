#include <iostream>
#include <map>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
	map<string, int>Humans;

	Humans["Siraj"] = 19;
	Humans["Haris"] = 20;
	Humans["Shaharyaar"] = 20;

	// Feels like maps have alphabetic sorting for string keys
	for (map<string, int>::iterator it = Humans.begin(); it != Humans.end(); ++it) {
		cout << "\n Name: " << it->first << " Age: " << it->second;
	}

	cout << endl;

	// Alternatively using pair
	for (map<string, int>::iterator it = Humans.begin(); it != Humans.end(); ++it) {
		pair<string, int>man = *it;
		cout << "\n Name: " << man.first << " Age: " << man.second;
	}

	cout << endl;
	cout << "\n Ahmad's age: "<< Humans["Ahmad"];  // If a key doesnt already exist in a map, it gets added and value gets initialized to 0
	
	// Printing again, demonstrating alphabetic sorting
	for (map<string, int>::iterator it = Humans.begin(); it != Humans.end(); ++it) {
		cout << "\n Name: " << it->first << " Age: " << it->second;
	}

	/* So to search for a key without ending up creating that key in the map,
	   use the find() method. The find() method will return an iterator to the key
	   if a key is found in the map, else it will return an iterator to the
	   end of the map. Thus a key can be searched as:	
	*/
	cout << endl;

	if (Humans.find("Sleeman") == Humans.end())
		cout << "\n 'Sleeman' not found in the map.\n";

	// Insertion in a map
	pair<string, int> General("Seerat", 20);
	Humans.insert(General);

	// Alternatively
	Humans.insert(pair<string, int>("Seerat", 20));

	// Even more concisely,
	Humans.insert(make_pair("Seerat", 20));

	/* Another observation: Maps donot contain duplicate keys. So each of the three
	   insertions of 'Seerat' in the map overwrite the previous insertion.
	*/

	// Printing again
	for (map<string, int>::iterator it = Humans.begin(); it != Humans.end(); ++it) {
		cout << "\n Name: " << it->first << " Age: " << it->second;
	}

	_getch();
}