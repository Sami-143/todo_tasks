#include<iostream>
using namespace std;

void reverse(string check);

main()
{
 string boolean;
cout<<"ENTER 'true'for TRUE and 'false' for FALSE= ";
cin>>boolean;
reverse(boolean);
}

void reverse(string check)
{
if(check=="true"){
cout<<"FALSE"<<endl;
}
if(check=="false"){
cout<<"TRUE"<<endl;
}
}

