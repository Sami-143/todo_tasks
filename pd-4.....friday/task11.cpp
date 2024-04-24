#include<iostream>
using namespace std;
void discountP(string countryName,float ticketPrice,float finalPrice,float discount);
main(){
	string countryName;
	float ticketPrice;
	float finalPrice;
	float discount;
while(true){
cout<<"ENTER COUNTRY NAME=";
cin>>countryName;
cout<<"ENTER AMOUNTS IN DOLLARS=";
cin>>ticketPrice;
discountP(countryName,ticketPrice,finalPrice,discount);
}
}
void discountP(string countryName,float ticketPrice,float finalPrice,float discount)
{
if(countryName=="pakistan"){
discount=(ticketPrice*0.05);
finalPrice=(ticketPrice-discount);
cout<<"YOUR FINAL PRICE IS="<<finalPrice<<endl;
}
if(countryName=="ireland"){
discount=(ticketPrice*0.1);
finalPrice=(ticketPrice-discount);
cout<<"YOUR FINAL PRICE IS="<<finalPrice<<endl;
}
if(countryName=="india"){
discount=(ticketPrice*0.20);
finalPrice=(ticketPrice-discount);
cout<<"YOUR FINAL PRICE IS="<<finalPrice<<endl;
}

if(countryName=="england"){
discount=(ticketPrice*0.30);
finalPrice=(ticketPrice-discount);
cout<<"YOUR FINAL PRICE IS="<<finalPrice<<endl;
}
if(countryName=="canada"){
discount=(ticketPrice*0.45);
finalPrice=(ticketPrice-discount);
cout<<"YOUR FINAL PRICE IS="<<finalPrice<<endl;
}
}