
#include<iostream>
using namespace std;
// function prototype
int calculateGCD(int number1,int number2);
// function prototype
int calculateLCM(int number1,int number2);

main()
{
    // variables declaratation
   int number1;
   int number2;
   int gcd;
   int lcm;
   
 // taking number from user
    cout << "ENTER YOUR 1st number = ";
    cin>>number1;
     // taking number from user
    cout << "ENTER YOUR 2nd number = ";
    cin>>number2;
// calling function
    gcd= calculateGCD(number1,number2);
    cout<<gcd<<endl;
// calling function
    lcm=calculateLCM(number1,number2);
    cout<<lcm<<endl;

    
}
// fuction declaration or defination
int calculateGCD(int number1,int number2)
{
    
    int gcd;
    // using counter loop
    for(int count=1;count<=number1 && count<=number2; count++)
    {
        // using if conditions
        {
            if(number1%count==0 && (number2%count==0))
             gcd=count;
        }
    
        }
         return gcd;
    }

   
    

// fuction declaration or defination
int calculateLCM(int number1,int number2)
{
    variable declaration
    int gcd;
    int lcm;
    gcd=calculateGCD(number1,number2);
    lcm=(number1*number2)/gcd;
    // return the value
    return lcm;
}