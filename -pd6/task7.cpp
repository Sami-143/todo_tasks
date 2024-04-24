#include<iostream>
using namespace std;

string arrival(int sHours, int sMinutes, int arHours, int arMinutes);
string timeDiffer(int sHours, int sMinutes, int arHours, int arMinutes);

main(){
    int sHours;
    int sMinutes;
    int arHours;
    int arMinutes;
    string result;
    string result1;

cout<< "ENTER EXAM STARTING TIME ....[HOURS....0 to 23] = ";
cin>>sHours;
cout<< "ENTER EXAM STARTING TIME....[MINTES.....0 to 59] = ";
cin>>sMinutes;
cout<< "ENTER EXAM ARRIVAL TIME ....[HOURS....0 to 23] = ";
cin>>arHours;
cout<< "ENTER EXAM ARRIVAL TIME....[MINTES.....0 to 59] = ";
cin>>arMinutes;

result=arrival(sHours,sMinutes,arHours,arMinutes);
cout<< result << endl;

result1=timeDiffer(sHours,sMinutes,arHours,arMinutes);
cout<< result1 << endl;

}


string arrival(int sHours, int sMinutes, int arHours, int arMinutes)
{
    string result;

    if ( arHours < sHours)
    {
        result = "Early";
    }
    else if (arHours == sHours && arMinutes <=sMinutes)
    {
        if ((sMinutes -arMinutes) <= 30)
        {
            result = "On time";
        }
        else
        {
            result = "Early";
        }
    }
    else if (arHours ==sHours && arMinutes > sMinutes)
    {
        result = "Late";
    }
    else if (arHours > sHours)
    {
        result = "Late";
    }

    return result;
}


string timeDiffer(int sHours, int sMinutes, int arHours, int arMinutes)
{
    string result1;
    int timeHr, timeMin;

    if (arHours < sHours)
    {
        timeHr = sHours - arHours;
        if (sMinutes >= arMinutes)
        {
            timeMin = sMinutes - arMinutes;
        }
        else if (sMinutes < arMinutes)
        {
            timeMin =  (sMinutes+60) - arMinutes;
        }

        result1 = to_string(timeHr) + ":" + to_string(timeMin) + " hours before the start.";
    }

    if (arHours > sHours)
    {
        timeHr = arHours - sHours;
        if (sMinutes >= arMinutes)
        {
            timeMin = sMinutes - arMinutes;
        }
        else if (sMinutes < arMinutes)
        {
            timeMin = (sMinutes+60 ) - arMinutes;
        }

       result1 = to_string(timeHr) + ":" + to_string(timeMin) + " hours after the start.";
    }

    if (arHours== sHours)
    {
        if (sMinutes >= arMinutes)
        {
            timeMin = sMinutes - arMinutes;
            result1 = to_string(timeMin) + " minutes before the start.";
        }
        else if (sMinutes < arMinutes)
        {
            timeMin = arMinutes - sMinutes;
            result1 = to_string(timeMin) + " minutes after the start.";
        }
    }

    return result1;
}