#include<iostream>
using namespace std;
main()
{
     string name;
    cout<<"ENTER THE NAME =";
    getline(cin,name);
    int idx=0;
   while(name[idx]!='\0')
   {
    cout<<"THE CHARACTER OF INDEX IS = "<<idx<<" is = "<<name[idx]<<endl;
    idx++;
   }
  for(int count=idx;count>=0;count--)
  {
    cout<<name[count]<<endl;
  }
   
   
}
