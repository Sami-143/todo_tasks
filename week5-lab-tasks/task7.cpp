#include<iostream>
using namespace std;
string result(int volume,int P1,int P2,float hours);
main()
{
int volume,P1,P2;
float hours;
 
cout<< "ENTER VOLUME OF POOL...range of(1-10000) : ";
cin>>volume;
cout<< "Enter THE FLOW RATE OF PIPE P1 PER HOUR...range of(1-5000) = ";
cin>>P1;
cout<< "ENTER FLOW RATE OF PIPE P2 per hour...range of(1-5000) = ";
cin>>P2;
cout<< "Enter THE HOURS THAT WORKER IS ABSENT...range of (1.0-24.00) = ";
cin>>hours;

 int full=(((P1*hours)+(P2*hours))*100)/volume;
 int pipe1=(P1*100)/(P1+P2);
 int pipe2=100-pipe1;
if(full<volume)
{
cout<< "THE POOL IS"<<full<<"% full."<<"P1 : "<<pipe1<<"%. P2 : "<<pipe2<<"%."<<endl;
}
if(full>volume)
{
 int overflow=((((P1*hours)+(P2*hours))*100)/volume)-volume;
cout<< "For "<<hours<<" hours the pool overflows with "<<overflow<<" liters."<<endl;  
}
}