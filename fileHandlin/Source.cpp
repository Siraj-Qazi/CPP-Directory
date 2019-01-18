#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() 
{
	int i;
	ifstream infile("times.txt");
	if (!infile)
	{
		infile.close();
		i = 1;
		ofstream outfile("times.txt");
		outfile << i;
	}

	infile >> i;
	infile.close();
	cout << "\n File was run " << i << " time(s).";
	i++;
	ofstream outfile("times.txt");
	outfile << i;
	system("pause");
}