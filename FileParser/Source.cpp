#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>

using namespace std;
int main()
{
	fstream file;
	string fileName("E:\\Test.txt");

	file.open(fileName,ios::out);
	if (!file)
		cout << "\n Couldn't open file " + fileName;

	file << "United States of America: 643839" << endl;
	file << "Canada: 884323" << endl;
	file << "Pakistan: 180923939" << endl;

	file.close();

	file.open(fileName, ios::in);
	while (file)
	{
		string line;
		getline(file, line, ':');
		int population;
		file >> population;
		file >> ws;

		if (!file)
			break;

		cout << "\n Country:\t'" << line << "'\tPopulation:\t'" << population << "'" << endl;
	}

	_getch();
}