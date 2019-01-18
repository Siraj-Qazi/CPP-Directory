#include <iostream>
using namespace std;

class Test
{
public:
	Test(int a=0,int b=0) : length(a),width(b)
	{

	}
	void setLength(int p)
	{
		length = p;
	}
	int length;
	int width;
};

int main()
{
	Test t1;
	t1.setLength(5);
	Test t2(t1);

	t2.setLength(8);

	cout << " t2 length: "<<t1.length << " t2 length: " << t2.length << endl;
	getchar();
}