#include<iostream>
using namespace std;

void printname(string name);
 main()
{
string name="MALIK";
	printname(name);
	cout<<endl;

	printname("SAMI MALIK");
	cout<<endl;

string secondname;
	cout<<"Enter name=";
	cin>>secondname;
	printname(secondname);
}


void printname(string name)
{
	cout<<"My name is:"<<name;
}