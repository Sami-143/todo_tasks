#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"ENTER YOUR NUMBERS = ";
    cin>>n;
    int arr[n];
    int number;

    for(int idx=0;idx<n;idx++)
    {
        cout<<"Element Find = ";
        cin>>arr[idx];
    }
    int smallest=arr[0];
    for(int idx=0;idx<n;idx++)
    {
      if(arr[idx]<smallest)
      {
        smallest=arr[idx];
      }
      
    }
cout<<smallest<<endl;
}


