#include<iostream>
using namespace std;

string buy(int price);

main(){
int price;

cout << " ENTER THE PRICE = ";
cin>>price;
string result;
result=buy(price);
cout<<"RESULT IS  = "<<result<<endl;


}
string buy(int price){
string check;

if(price<1500){
check="buyDress";
}

if (price>1500){
check="donotBuyDress";
}
return check;
}