#include<iostream>
using namespace std;

void check(int number);

main()
{
 	int number;
 	while(true)
		{
 		 cout<<"ENTER ANY NUMBER=";
		 cin>>number;
		 check(number);
		 cout<<endl;
		 }
}
void check(int number)
	{
	  if(number%2==0)
	{ 
          cout<<"EVEN NUMBER.";
        }

        if(number%2!=0)
	{
         cout<<"ODD NUMBER.";
	}
	
	}