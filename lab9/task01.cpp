#include<iostream>
using namespace std;
main()
{
    // array declaration
    int ar[2];
    // variable delclaration
    int num;
    // taking number from user
    cout<<"ENTER YOUR NUM = ";
    cin>>num;
    // declaring array
    int arr[num];
// taking value of array from the user
cin>>ar[0];
cin>>ar[1];
// using counter loop
    for(int i=0;i<num;i++)
    {
        // taking value of array from the user
        cout<<"Enter the elements of series 1 = ";
        cin>>arr[i];
    }
   
// print value of first element
    cout<<ar[0]<<",";
    // using counter loop
    for(int i=0;i<num;i++)
    {
        cout<<arr[i]<<",";
    }
// print value of 2nd element
    cout<<ar[1];
     
}