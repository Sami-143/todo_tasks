
#include<iostream>
using namespace std;
// fuction prototype declaration
void nestedForExample(int rows);
main()
{
  // variable declaration in  body
    int rows;
    cout<<"ENTER DESIRED NUMBER OF ROWS = ";
    cin>>rows;
// calling the function
    nestedForExample(rows);
}
// function defination  
void nestedForExample(int rows)
    {
      // using counter loop for the dependent itterations
    for(int i=1; i<=rows;i++)
    {
      for(int j=1;j<=i; j++)
      {
        cout<<"*";
        
      }
      cout<<endl;

    }
}
