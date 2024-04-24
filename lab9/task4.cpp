#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"ENTER YOUR NUMBERS = ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}