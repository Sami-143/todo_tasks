#include<iostream>
using namespace std;

void add(int num1,int num2);
void sub(int num1,int num2);
void multi(int num1,int num2);

main()
{ 
	int num1;
	int num2;
	cout<<"ENTER YOUR FIRST NUMBER=";
cin>>num1;
	cout<<"ENTER YOUR SECOND NUMBER=";
cin>>num2;
	add(num1,num2);
cout<<endl;
	sub(num1,num2);
cout<<endl;
	multi(num1,num2);
cout<<endl;
}

void add(int number1,int number2)
{
	int sum;
	sum=number1+number2;
cout<<"YOUR SUM IS="<<sum;
}
void sub(int number1,int number2)
{
	int subtract;
subtract=number1-number2;
cout<<"YOUR SUBTRACTION IS="<<subtract;
}
void multi(int number1,int number2)
{
	int multiply;
multiply= number1*number2;
cout<<"YOUR PRODUCT IS="<<multiply;
}