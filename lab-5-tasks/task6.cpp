#include<iostream>
using namespace std;

void check(int num1,int num2);
main()
	{
         int num1;
	 int num2;
while(true){
cout<<"ENTER YOUR NUMBER1=";
cin>>num1;
cout<<"ENTER YOUR NUMBER2=";
cin>>num2;

         check(num1,num2);
         cout<<endl;
           }
	 }

void check(int num1,int num2)
{
	if(num1>num2)
         {
           cout<<"GREATER NUMBER IS NUMBER1."<<num1; 
         }

	if(num2>num1)
         {
           cout<<"GREATER NUMBER IS NUMBER2."<<num2; 
         }
}