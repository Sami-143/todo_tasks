#include<iostream>
using namespace std;

     void check(int age);
main()
	{
         int age;
	 while(true)
        {
	 cout<<"ENTER YOUR AGE=";
	 cin>>age;
	 check(age);
	 cout<<endl;
         }
	}
	void check(int age)
	{
if(age==18)
  {
   cout<<"You are Eligibile."<<endl;
  }

if(age>18)
{
  cout<<"You are Eligibile."<<endl;
}
if(age<18)
{
  cout<<"You are not Eligibile."<<endl;
}

	}