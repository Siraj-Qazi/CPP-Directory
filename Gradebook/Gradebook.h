#include <string>
using namespace std;

class Gradebook
{
private:
	string courseName;
public:
	Gradebook(string name);
	void setCourseName(string name);
	string getCourseName();
};
