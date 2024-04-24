#include<iostream>
using namespace std;

void add(int number1, int number2);
void mult(int number1, int number2);
void sub(int number1, int number2);

main()
{
	 int number1;
	 int  number2;
	 cout<<"Enter 1st number=";
	 cin>>number1;
	 cout<<"Enter 2nd number=";
	 cin>>number2;
	 add(number1,number2);
	 cout<<endl;
	 mult(number1,number2);
	 cout<<endl;
	 sub(number1,number2);
	 cout<<endl;
}

	void add(int num1,int num2)
	{
		int sum;
		sum=num1+num2;
		cout<<"YOUR SUM IS="<<sum<<endl;
	}

	void mult(int num1,int num2)
	{
		int multiply;
		multiply=num1*num2;
		cout<<"Multiplication="<<multiply;
	}

	void sub(int num1,int num2)
	{
		int subtraction;
		subtraction=num1-num2;
		cout<<"Subtraction="<<subtraction;
	}