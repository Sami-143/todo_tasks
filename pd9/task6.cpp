#include<iostream>
using namespace std;
main()
{
    int number;
    cout<<"ENTER THE SIZE IF ARRAY = ";
    cin>>number;
    int evenOdd[number];
    int numOfTimes;
    
    for(int idx=0;idx<number;idx++)
    {
        cin>>evenOdd[idx];
    }
    cout<<"ENTER THE NUMBER times even-odd transformation need to be done = ";
    cin>>numOfTimes;
    
    for(int i=1;i<=numOfTimes;i++)
    {
       for(int idx=0;idx<number;idx++)
    {
        if(evenOdd[idx]%2==0)
        {
           evenOdd[idx]=evenOdd[idx]-2;
        }
        else
        {
           evenOdd[idx]=evenOdd[idx]+2;
        } 
    }
    }
    
    for(int idx=0;idx<number;idx++)
    {
        cout<<evenOdd[idx] <<",";
    }
       
}