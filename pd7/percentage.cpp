#include<iostream>
using namespace std;
//  fuction prototype declaration
float percentage(int number);
main()
{
    // variable declaration in  body and intialize
    int number;
    float result;

    cout<<"ENTER A NUMBER = ";
    cin>>number;
    
     // calling the function
    result=percentage(number);
    cout<<result<<endl;
}
// function defination for printing 
float percentage(int number)
{
    // variable declaration in functio body and intialize
    int n1=0;
    int n2=0;
    int n3=0;
    float per1;
    float per2;
    float per3;

    int num=0;
    // using counter lop for repitation of iterations
    for(int idx=1;idx<=number;idx++)
    {
        cout<<"ENTER ELEMENT = ";
        cin>>num;

// using if conditions
        if(num%2==0)
        {
            n1=n1+1;
        }
        if(num%3==0)
        {
            n2=n2+1;
        }
        if(num%4==0)
        {
            n3=n3+1;
        }
    }
    // returning the value of the funtion
    per1=(n1*100.0)/number;
    cout<<per1<<"%"<<endl;
    per2=(n2*100.0)/number;
    cout<<per2<<"%"<<endl;
    per3=(n3*100.0)/number;
    cout<<per3<<"%"<<endl;
}

   