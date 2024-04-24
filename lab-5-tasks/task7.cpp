#include<iostream>
using namespace std;

void total(int amount,string day);
main(){
        int amount;
	string day;
	while(true)
          {
	   cout<<"ENTER PURCHASE RATE=";
           cin>>amount;
           cout<<"ENTER DAY NAME=";
           cin>>day;
           total(amount,day);
           cout<<endl;
	  }
}
void total(int amount,string day)
         {
if(day=="sunday")
		{
		  amount=amount-(amount*0.1);
		  cout<<"TOTAL PURCHASE RATE="<<amount;
		}
if(day=="monday")
		{
                  amount=amount-(amount*0.05);
		  cout<<"TOTAL PURCHASE RATE="<<amount;
		}
if(day=="tuesday")
		{
                  amount=amount-(amount*0.05);
		  cout<<"TOTAL PURCHASE RATE="<<amount;
		}
if(day=="wednesday")
		{
                  amount=amount-(amount*0.05);
		  cout<<"TOTAL PURCHASE RATE="<<amount;
		}
if(day=="thurday")
		{
                  amount=amount-(amount*0.05);  
		  cout<<"TOTAL PURCHASE RATE="<<amount;
		}
if(day=="friday")
		{
                  amount=amount-(amount*0.05);
		  cout<<"TOTAL PURCHASE RATE="<<amount;
		}
if(day=="saturday")
		{
                  amount=amount-(amount*0.05);
		  cout<<"TOTAL PURCHASE RATE="<<amount;
		}
}