#include<iostream>
using namespace std;
main()
{
int avengers;
int adult;
int child;
int adultSoldTickets;
int childSoldTickets;
float percentage;
int totalAmount;
int amountAfterDonation;
cout<<"enter your movie name:";
cin>>avengers;
cout<<"enter adult tickets:"<<endl;
cin>>adult;
cout<<"enter child tickets:"<<endl;
cin>>child;
cout<<"enter adult sold tickets:"<<endl;
cin>>adultSoldTickets;
cout<<"enter child sold tickets"<<endl;
cin>>childSoldTickets;
cout<<"enter percentage to denote:"<<endl;
cin>>percentage;
totalAmount=(adult*adultSoldTickets)+(child*childSoldTickets);
amountAfterDonation=totalAmount-(totalAmount*0.1);
cout<<"your total amount is:"<<totalAmount<<endl;
cout<<"your total amount after donation is:"<<amountAfterDonation<<endl;
}





