#include<iostream>
using namespace std;

void add(int num1,int num2);

 main()
{
	int num1;
	int num2;
	
cout<<"ENTER YOU FIRST NUMBER1=";
cin>>num1;
cout<<"ENTER YOU SECOND NUMBER=";
cin>>num2;

add(num1,num2);
cout<<endl;

}

void add(int num1,int num2)
{

	int sum;
	sum=num1+ num2;
cout<<"YOUR SUM IS="<<sum<<endl;
}