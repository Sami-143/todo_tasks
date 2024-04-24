#include<iostream>
using namespace std;
string activity(string temperature,string humidity);

main(){
    string temperaturee;
    string humidityy;
    string result;

cout<<"ENTER TEMPERATURE = ";
cin>>temperaturee;
cout<<"ENTER HUMIDITY = ";
cin>>humidityy;

 result=activity(temperaturee,humidityy);
cout<< "RESULT IS = "<<result;
}
string activity(string temperature,string humidity)
{
  string activityy;
    if (temperature=="warm" && humidity=="dry"){
        activityy="playTenis";

    }
     if (temperature=="warm" && humidity=="humid"){
        activityy="swim";
     }
      if (temperature=="cold" && humidity=="dry"){
        activityy="basketball";
      }
       if (temperature=="cold" && humidity=="humid"){
        activityy="watchTv";
       }
       return activityy;

}