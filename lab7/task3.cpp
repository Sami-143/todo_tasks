

#include<iostream>
using namespace std;
// function prototype
int frequencyChecker(int number,int digit);

main()
{
    // variable initialization or declaration
    int number;
    int digit;
    int result;

cout<< " ENTER YOUR NUMBER " ;
cin>>number;
cout<< " ENTER YOUR DIGIT = ";
cin>>digit;

// calling function
result=frequencyChecker(number,digit);
cout<<result;


}
// fuction declaration
int frequencyChecker(int number,int digit)
{
    
    int mod;
    int counter=0;
    // using cnditional loop
    while(number>0)
    {
    // taking modulus
    mod=number%10;
    // using if conditions
    if(mod==digit)
    {
        counter=counter+1;
    }
     number=number/10;
 
    }
    // return int value function
    return counter;
}
