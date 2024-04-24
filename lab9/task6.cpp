#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"ENTER YOUR NUMBERS = ";
    cin>>n;
    int arr[n];
    int number;
    int sProduct;

// 
    for(int idx=0;idx<n;idx++)
    {
        cout<<"Element Find = ";
        cin>>arr[idx];
    }
    cout<<"Enter number to find = ";
    cin>>number;
    for(int idx=0;idx<=n;idx++)
    {
     sProduct=n*number;
    }
    cout<<n<<"*"<<number<<" = "<<sProduct<<endl;
}