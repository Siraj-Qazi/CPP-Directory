#include <iostream>
#include <list>
#include <conio.h>

using namespace std;
int main()
{
	list<int> numList;

	for (int i = 1; i <= 10; ++i)
		numList.push_back(i);      // Dynamically append elements from 1 to 10

	numList.push_front(0);         // Insert 0 at end

	for (list<int>::iterator it = numList.begin(); it != numList.end(); ++it)
		cout << *it << endl;
	cout << endl;

	list<int>::iterator ix = numList.begin();
	numList.insert(++ix, 334);    // Insert 334 at location 2
	
	for (list<int>::iterator it = numList.begin(); it != numList.end(); ++it)
		cout << *it << endl;   
	cout << endl;

	ix = numList.begin();
	ix++;
	cout << "\n Erasing "<<*ix << endl;

	numList.erase(ix);  // erase 334

    //cout << "\n " << *ix << endl;    ERROR: ix is not dereferenceable now

	/* the erase() method returns an iterator to the next element after
	  deleting the element referenced by the current iterator. So this crash
	  can be handled as: 
	*/

	ix = numList.begin();
	cout << "\n Current element : "<<*ix << endl;

	ix = numList.erase(ix);  // update ix to reference the next element

	cout << "\n After deleting: "<< *ix << endl;


	_getch();
}