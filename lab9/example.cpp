#include<iostream>
using namespace std;

main()
{
    int arr[5];

    int sum=0;
    for(int idx=0;idx<5;idx++)
    {
        cout<<"ELEMENT FIND = ";
        cin>>arr[idx];
        sum=sum+idx;
        cout<<sum<<endl;
    }
    cout<<endl;
}