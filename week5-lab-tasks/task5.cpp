#include<iostream>
using namespace std;

int newTime(int hours,int minutes);
main(){
int hours;
int minutes;
bool result;

cout<<"ENTER HOURS = ";
cin>>hours;
cout<<"ENTER MINUTES = ";
cin>>minutes;



result = newTime(hours,minutes);

if(result==1){
int newMinutes=minutes + 15;
int newHours= hours+1;
int mint=  minutes-60;
cout<<""<<newHours;
cout<<"hours"<<mint;
}


if(hours==0){

int newHours= hours;
minutes = minutes+15;
cout<<" "<<newHours;
cout<<"hours"<<minutes;

}
}
int newTime(int hours,int minutes)
{ 
if(minutes>=59){ 
  minutes=(minutes+15)-60;
  hours=hours+1;
  if((hours+1)==24)
  {
  hours=0;
  }
}
if (minutes<59)
 {
  minutes=(minutes+15)-60;
  hours=hours+1;
  if((hours+1)==24)
  {
  hours=00;
  }
}
}