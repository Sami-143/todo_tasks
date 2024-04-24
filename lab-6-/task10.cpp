#include<iostream>
#include<cmath>
using namespace std;

float playVollyboll(string year,int weekend,int holidays);

main(){
    string yearr;
    int weekened;
    int holiday;
    float result;
    cout<<"ENTER YOUR YEARS = ";
    cin>>yearr;
    cout<<"ENTER NUMBER OF HOLIDAYS = ";
    cin>>holiday;
    cout<<"ENTER NUMBER OF WEEKEND = ";
    cin>>weekened;

result=playVollyboll(yearr,weekened,holiday);
cout<<"THE TOTAL PLAY BY VALADMIR IS =  "<<result;
}

float playVollyboll(string year,int weekend,int holidays)
{
    float vollyPlay;
    
    vollyPlay= 36+(2*(holidays)/3);
    if(year == "normal" )
    {
        return vollyPlay;
    }
    if (year=="leap"){
        
        vollyPlay = (vollyPlay*0.15) + vollyPlay; 
    }
    return vollyPlay;

}
