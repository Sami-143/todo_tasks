#include<iostream>
using namespace std;
main()
{
    string length;
    cout<<"ENTER THE length =";
    getline(cin,length);
    bool flag;
    int even=1;
    int odd=0;
    int idx=0;
   while(length[idx]!='\0')
   {
    idx++;
   }
   cout<<idx<<endl;

   if(idx%2==0)
   {
    flag=true;
   }
   if(idx%2!=0)
   {
    flag=false;
   }
cout<<flag;
   
   }