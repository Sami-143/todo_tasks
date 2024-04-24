#include<iostream>
using namespace std;
float totalIncome(string screen,int coloumn,int row);

main(){
float rows;
float coloumns;
string screens;
float output;


cout<<"ENTER SCREEING NAME = ";
cin>>screens;
cout<<"ENTER NUMBER OF ROWS = ";
cin>>rows;
cout<<"ENTER NUMBER OF COLOUMNS = ";
cin>>coloumns;

 output=totalIncome(screens,coloumns,rows);
 cout<<"YOUR TOTAL INCOME = "<<output;
}


float totalIncome(string screen,int coloumn,int row)
 {
    float amount;
   
if (screen=="Premiere"){
amount=row*coloumn*12.0;
}

else if (screen=="Normal"){
amount=row*coloumn*7.50;

}
else if (screen=="discount"){
amount=row*coloumn*5.00;

}
return amount;
 }