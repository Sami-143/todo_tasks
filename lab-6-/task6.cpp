#include<iostream>
using namespace std;

float lowestPrice(int kilometers ,string time);
main()
{
   int kms;
    string period;
    float result;

cout << "ENTER NO. OF KILOMETERS  = ";
cin>> kms;
cout<<"ENTER PERIOD OF THE TIME = ";
cin>>period;

result=lowestPrice(kms ,period);
cout << "PRICE IS = "<<result;

}
float lowestPrice(int kilometers ,string time)
{
       float price; 
          if (kilometers<20){
        if (time=="day"){
            price= kilometers*0.79+0.7; 
             
        }
        if (time=="night"){
            price=kilometers*0.9+070;
        
        }
        return price;
    }
    if (kilometers>=20 && (time=="day" || time=="night"))
    {
      price=kilometers*0.09;
      return price;
    }
   
    if (kilometers>=100 && (time=="day" || time=="night"))
    {
        price = kilometers *0.06;
         return price;
    }
 
}