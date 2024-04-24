
#include<iostream>
using namespace std;
//  fuction prototype declaration
void print(int number);

main()
{
    // variable declaration in  body
    int number=0;
    cout<<"Enter the TOTAL Number = ";
    cin>>number;
     // calling the function
    print(number);
}

// function defination for printing 
void print(int number)
{  
    // using counter lop for repitation of iterations
    for(int idx=1; idx<=number; idx++)
    {
        // using if condition
        if(idx%4==0)
        {
            cout<<idx*10<<endl;
            continue;
        }
        cout<<idx<<endl;
    }
    
}
