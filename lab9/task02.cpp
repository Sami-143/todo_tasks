#include<iostream>
using namespace std;

main()
{
    float arr[4];
    
    float quarter=0.25;
    float dime=0.10;
    float nickal=0.05;
    float penny=0.01;
    bool flag=false;
    for(int idx=0;idx<4;idx++)
    {
        cin>>arr[idx];
        
    }
        arr[0]=0.25*arr[0];
        arr[1]=0.10*arr[1];
        arr[2]=0.05*arr[2];
        arr[3]=0.01*arr[3];

    float sum=arr[0]+arr[1]+arr[2]+arr[3];
    
    float number;
    cout<<"ENTER YOUR NUMBER = ";
    cin>>number;

    if(sum>=number)
    {
        cout<<true;
        flag =true;
    }
    else
    {
        cout<<false;
        flag=false;
    }
}