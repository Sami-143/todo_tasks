
#include<iostream>
using namespace std;
// function prototype
int digitSum(int number);
main()
{
    // variable declaration
   int number=0;
    int result=0;
    // taking number from user
cout << "Enter your number = ";
cin>>number;
// calling function
result=digitSum(number);
cout<<result;
}
// fuction declaration
int digitSum(int number)
{
    // variable declaration
    int sum=0;
    int mod;
    // using cnditional loop
while(number>0)
{
    mod=number%10;
    // using if conditions
    if(mod>0)
    {
        sum=mod+sum;
    }
   number=number/10;
   
}
 // return int value function
return sum;
}