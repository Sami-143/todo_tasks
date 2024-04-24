
#include<iostream>
using namespace std;
//  fuction prototype declaration
int calculateDots(int dots);
main()

{

// variable declaration in  body
    int dot;
    cout<<"ENTER YOUR NUMBER OF DOTS TO PRINT = ";
    cin>>dot;
    // variable initilization for return the resultant value
    int result;
     // calling the function
    result=calculateDots(dot);
    cout<<result<<endl;
}

// function defination for printing 
int calculateDots(int dots)
{   
    // variabale initialization in the fucntion
    int sum=0;
    // using counter lop for repitation of iterations
    for(int i=1;i<=dots;i++)
    {
        sum=sum+i;
    }
    // return the value of float type function
    return sum;
}
