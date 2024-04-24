#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"ENTER YOUR NUMBERS = ";
    cin>>n;
    int arr[n];

    float sum=0;
    float average;
    for(int idx=0;idx<n;idx++)
    {
        cout<<"Elements Find = ";
        cin>>arr[idx];
    }
    for(int idx=0;idx<n;idx++)
    {
        sum=sum+arr[idx]; 
    }
     cout<<sum<<endl;

        average=sum/n;
        cout<<average<<endl;
}