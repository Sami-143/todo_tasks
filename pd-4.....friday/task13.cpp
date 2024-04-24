#include<iostream>
using namespace std;
void totalPriceRoses(float redRose,float redRosePrice,float whiteRose,float whiteRoseP,float tulipRose,float tulipRoseP,float totalPrice,float discountPrice,float finalPrice);

main(){
    float redRose,redRoseP,whiteRose,whiteRoseP,tulipRose,tulipRoseP,totalPrice,discountPrice,finalPrice;

cout<<"ENTER NO. OF RED ROSES=";
cin>>redRose;
cout<<"ENTER NO. OF WHITE ROSES=";
cin>>whiteRose;
cout<<"ENTER NO. OF TULIP ROSES=";
cin>>tulipRose;

redRoseP=redRose*2;
whiteRoseP=whiteRose*4.10;
tulipRoseP=tulipRose*2.50;
totalPrice=redRoseP+whiteRoseP+tulipRoseP;
cout<<"YOUR TOTAL PRICE IS="<<totalPrice<<endl;

totalPriceRoses(redRose,redRoseP,whiteRose,whiteRoseP,tulipRose,tulipRoseP,totalPrice,discountPrice,finalPrice);

}

void totalPriceRoses(float redRose,float redRosePrice,float whiteRose,float whiteRoseP,float tulipRose,float tulipRoseP,float totalPrice,float discountPrice,float finalPrice)
{
if(totalPrice>200)
{
		
discountPrice=totalPrice*0.20;
finalPrice=totalPrice-discountPrice;
cout<<"YOUR FINAL PRICE IS="<<finalPrice<<endl;
}
}
