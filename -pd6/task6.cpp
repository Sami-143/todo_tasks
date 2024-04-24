#include<iostream>
using namespace std;

float studioPriceDollars(string month,int stays);
float apartmentPriceDollars(string month,int stays);
main(){
    string month;
    int stays;
    float result;
    float result1;

    cout<<"ENTER YOUR STAYING MONTH = ";
    cin>>month;
    cout<<"ENTER THE NUMBER OPF STAYS in the range[0......200]  =  ";
    cin>>stays;

    result=studioPriceDollars(month,stays);
    cout<<"Studio:{Price for the whole stay is $}"<<result<<endl;

    result1=apartmentPriceDollars(month,stays);
    cout<<"Apartment:{Price for the whole stay is $ }"<<result1;
}
float studioPriceDollars(string month, int stays)
{
    float price=0;

if(month=="May" || month=="October")
{
    if(stays<=7){
         price=stays*50.0;
    }

    else if(stays>7 && stays<=14)
    {
        price=(50-(0.05 * 50.0))*stays;
        
    }
     else if(stays>14)
    {
        price=(50-(0.3 * 50))*stays;
        
    }
}
  if(month=="June" || month=="September")
  {
    if(stays<=14)
    {
        price=75.20*stays;
    }

    else if(stays>14)
    {
        price=(75.20*(75.20*0.20))*stays;
    }
  }
  if(month=="July" || month=="August")
  {
    price=76 * stays;
  }

return price;

}

float apartmentPriceDollars(string month, int stays)
{
float price;

if(month=="May" || month=="October")
{
    if(stays<=14)
    {
        price=65.0*stays;
    }

    else if(stays>14)
    {
        price=(65.0*(65*0.10))*stays;
    }
}

 if(month=="June" || month=="September")
  {
    if(stays<=14)
    {
    price=68.70*stays;
    }

    else if(stays>14)
    {
        price=(68.70*(68.70*0.10))*stays;
    }
}

if(month=="July" || month=="August")
{
    if(stays<=14)
    {
    price=77*stays;
    }

   else if(stays>14)
    {
        price=(77.0*(77.0 *0.10))*stays;
    } 
}
return price;

}