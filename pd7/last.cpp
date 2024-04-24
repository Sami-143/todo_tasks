#include<iostream>
using namespace std;
void print1(int n);
void print2(int n);
void print3(int n);
void print4(int n);

main()
{
    int n=0;
  cout<<"Enter * = ";
  cin>>n;
 print1(n);
 print2(n);
 print3(n);
 print4(n);

}
void print1(int n)
{
  

        for(int i=1; i<=n;i++)
    {
      for(int j=1;j<=i; j++)
      {
        cout<<"*";
        
      }
      cout<<endl;
    }
}
void print2(int n)
    {
        for(int i=1; i<=n;i++)
        {
      for(int j=i;j<n;j++)
        {
            cout<<" ";
        }
        }
    }
void print3(int n)
{
 for(int i=1; i<=n;i++)
    {
     for(int j=i;j<=n;j++)
        {
            cout<<" ";
        }
         cout<<endl;
    }
}
void print4(int n)
{
    for(int i=1; i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
    cout<<endl;
    }
}