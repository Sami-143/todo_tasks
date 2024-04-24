
#include<iostream>
using namespace std;

main()
{
    // variable initialization in main body
  int n=0;
  cout<<"Enter the number of * = ";
  cin>>n;
//   using counter lop for repitation of iterations 
    for(int j=1; j<=n; j++)
    {
        // using nested for  loop
        for(int i=j;i<=n;i++)
        {
            cout<<" ";
        }
        // using nested for  loop
        for(int i=1;i<=j;i++)
        {
            cout<<"*";
        }
    cout<<endl;
    }
//    using counter lop for repitation of iterations
     for(int i=1; i<=n; i++)
    {
        // using nested for  loop
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
        // using nested for  loop
        for(int j=i;j<=n;j++)
        {
            cout<<"*";
        }
    cout<<endl;
    }
}