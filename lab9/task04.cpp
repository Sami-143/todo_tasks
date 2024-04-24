#include<iostream>
using namespace std;
main()
{
    string name;
    cout<<"Enter THE name =";
    getline(cin,name);

    int idx=0;

   while(name[idx]!='\0')
   {
   if (name[idx]=='a'||name[idx]=='e'||name[idx]=='i'||name[idx]=='o'||name[idx]=='u')
   {
    cout<<"";
   }
    else
    {
        cout<<name[idx];
    }
       idx++;
   }

}