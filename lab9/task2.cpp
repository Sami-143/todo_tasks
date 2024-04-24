#include<iostream>
using namespace std;
main()
{
    int numbers;
    cout<<"ENTER YOUR NUMBERS = ";
    cin>>numbers;
    int arr[numbers];


    for(int idx=1;idx<=numbers;idx++)
    {
        cout<<"Element Find = ";
        cin>>arr[idx];
    }
    for(int idx=1;idx<=numbers;idx++)
    {
        cout<<arr[idx]<<" ";
    }
}