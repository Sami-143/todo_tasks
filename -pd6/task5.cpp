#include<iostream>
using namespace std;
float regular(char dayOrNight,char type,float mins);
float premium(char dayOrNight,char type,float mins);
main()
{
    char dayOrNight;
    char type;
    float mins;
    float result;
    float result1;
    cout<< "Enter which type of customer you are (REGULAR OR PREMIUM) select r/p =  ";
    cin>>type;
    cout<< "Press 'D' for day time and 'N' for night time call= ";
    cin>> dayOrNight;
    cout<<"Enter number of minutes you used the service = ";
    cin>>mins;
    result = regular(dayOrNight,type,mins);
    cout <<"YOUR CHARGES ARE = "<<result;
    result1 =  premium(dayOrNight,type,mins);
    cout <<"YOUR CHARGES ARE = "<<result1;
}
float regular(char dayOrNight,char type,float mins)
{
    float amount;
    if(mins<50)
    {
        amount = 10;
    }
    if(mins>50)
    {
        amount= 10*0.20*mins;
    }
    return amount;
}
float premium(char dayOrNight,char type,float mins)
{
    float amount;
     if(dayOrNight == 'N')
    {
         if (mins > 100)
        {
            amount =25 *0.05* mins;
        }
         if(mins < 100)
        {
            amount=25;
        }
    }
     if(dayOrNight ==  'D')
    {
         if(mins<75)
        {
            amount= 5;
        }
         if(mins>75)
        {
            amount=25* 0.10 * mins;
        }
    }
     return amount;
}