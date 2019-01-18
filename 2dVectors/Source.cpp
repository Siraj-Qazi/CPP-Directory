#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

int main()
{
	vector< vector<int> >grid(10, vector<int>(10, 3));
	/*for (int i = 0; i < grid.size(); ++i) {
		for (int j = 0; j < grid[i].size(); ++j) {
			cout << grid[i][j] << " ";
		}
		cout<<endl;
	}*/

	for (vector< vector<int> >::iterator it = grid.begin(); it != grid.end(); ++it) {
		for (vector<int>::iterator it2 = (*it).begin(); it2 != (*it).end(); ++it2) {
			cout << (*it)[*it2] <<" ";
		}
		cout << endl;
	}

	_getch();
}