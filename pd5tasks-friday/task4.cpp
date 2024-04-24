#include<iostream>
using namespace std;
main(){
    int hours;
    int days;
    int noOfWorkers;
    int total;
    int moreHours;
    int hoursNeeded;
    int  totalHoursInDay;
    int result;
    cout<<"ENTER THE NO OF HOURS = ";
    cin>> hours;
    cout<< "ENTER NO. OF DAYS = ";
    cin>>days;
    cout<< "ENTER NO OF WORKERS = ";
    cin>>noOfWorkers;

    totalHoursInDay= (days * 10) * 10/100;
    result= (days * 10) - totalHoursInDay;
    total= result*noOfWorkers;
    moreHours=total - hours;
    hoursNeeded=hours-total;
    if(total> hours)
    {
        cout<< "YES!"<<  moreHours << "HOURS ARE LEFT";

    }
if (total < hours){
cout << "NOT ENOUGH TIME ! " <<  hoursNeeded  <<"HOURS NEEDED.....";
}
}