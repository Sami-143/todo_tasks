
#include<iostream>
using namespace std;
float taxcalculator(char type, float itemPrice, float tax, float finalPrice);

main() 
{

float itemPrice;
char type;
float tax;
float finalPrice;

cout<< "Enter price: " ;
cin>>itemPrice;
cout<< "Enter type of vehicle: ";
cin>>type;
finalPrice=taxcalculator(type,itemPrice,tax,finalPrice);
cout<< "Final Price: "<<finalPrice<<endl;

}


float taxcalculator(char type, float itemPrice, float tax, float finalPrice)
{

 tax=itemPrice/100;
 finalPrice=itemPrice+tax;

   if (type == 'M')
 {
	tax=tax*6;
        finalPrice=itemPrice+tax;
 }
 
 if (type == 'E')
{      tax=tax*8; 
       finalPrice=itemPrice+tax;
} 

if (type == 'S')
{
   	tax=tax*10;
	finalPrice=itemPrice+tax;
}
if (type == 'V')
{  
	tax=tax*12;
	finalPrice=itemPrice+tax;
}
if (type == 'T')
{
	tax=tax*15;
	finalPrice=itemPrice+tax;
}
 return finalPrice;
}