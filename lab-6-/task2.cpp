#include<iostream>
using namespace std;
int discount(int,string,string);
main(){
    int amount;
    float result;
    string day;
    string month;

cout<<"ENTER THE AMOUNT = ";
cin>>amount;
cout<<"ENTER THE DAY = ";
cin>>day;
cout<<"ENTER THE MONTH = ";
cin>>month;

result=discount(amount,month,day);
cout << "YOU DISCOUNTED AMOUNT IS = " <<result;
}

int discount(int amount,string month,string day)
{
    float payable;
if (day== "Sunday"  && ( month=="October" || month=="March" || month=="August")){
    payable= amount-(amount*10 /100);
    return payable;
}
else if(day=="Monday" && (month=="November" || month=="December")){
    payable=amount-(amount*5 /100);
return payable;
}
else
{
    cout << "INVALID INPUT." ;
}
}