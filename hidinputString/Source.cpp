#include<iostream>
#include<string>
#include<fstream>
#include<conio.h>

using namespace std;
void login()
{
	string username;
	string pass;
	char password[100];
jum:
	cout << "\n\n Enter CMS ID:   > ";
	cin >> username;
	username.append(".txt");

	ifstream mydata(username);
	if (!mydata)
	{
		cout << "ERROR LOADING DATABASE: File not found." << endl;
		goto jum;
	}
	else
	{
	jump:
		int i = 0;
		cout << "\n Enter password: > ";
	   
		   char c = _getch();
		   /* Input loop, each character goes into the
		   array (and a * is cout-ed) uptill Enter is pressed,
		   us k bad you exit the loop, and to  terminate the
		   string by inserting the null character  yourself. */
		   while (c != 13)  	 
		   {
			   password[i++] = c;
			   cout << "*";
			   c = _getch();
		   }
		   password[i] = '\0';
		   mydata >> pass;
		   if (password == pass)
		   {
			   cout << "\n\n Login successful!\n\n" << endl;
		   }
		   else
		   {
			   cout << "\n Wrong password!!" << endl;
			   goto jump;
		   }
	}
		
}
int main()
{
	login();
	_getch();
}