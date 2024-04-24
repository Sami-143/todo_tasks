#include<iostream>
using namespace std;

string checkSpeed(float speed);

main(){
    float speed;
    string result;
cout<<"ENTER SPEED = ";
cin>>speed;

result=checkSpeed(speed);
cout<<"YOUR SPEED IS = "<< result;
}

string checkSpeed(float speed)
{
    string speedd;
    if(speed<10){
   speedd="slow";
    
    }

    if(speed>=10 && speed<=50){
   speedd="average";
   
    }

    if(speed>50 && speed >=150){
    speedd="fast";
    
    }

    if(speed >150){
    speedd="Ultrafast";
   
    }
    return speedd;
}