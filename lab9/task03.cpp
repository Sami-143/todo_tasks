#include<iostream>
using namespace std;
main()
{
    string arr1="something";
    string arr2;
    cout<<"ENTER THE NAME =";
    getline(cin,arr2);
    int idx=0;
   while(arr2[idx]!='\0')
   {
    cout<<arr2[idx];
    idx++;
   }
   cout<<arr1<<" "<<arr2[idx];
}