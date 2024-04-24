#include<iostream>
using namespace std;
main()
{
    int resistance;
    cout<<"Enter your resistance = " ;
    cin>>resistance;
    int arr[resistance];
    int sum=0;

     for(int idx=0;idx<resistance;idx++)
     {
        cout<<"Resistance Find = ";
        cin>>arr[idx];
     }
      for(int idx=0;idx<resistance;idx++)
    {
        sum=sum+arr[idx];
    }
    cout<<sum<<endl;
}