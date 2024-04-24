
#include<iostream>
using namespace std;
// function prototype
int totalDigit(int number);

main()
{
    int number;
    int digits=0;

    cout<<"Enter your Number = ";
    cin>>number;
   

    digits=totalDigit(number);
    cout<<"TOTAL DIGITS ARE : "<<digits;
     
}
// function declaration
int totalDigit(int number)
{
    // variable declaration
    int counter=0;
    // using cnditional loop
    while(number>0)
    {
        number=number/10;
        counter = counter + 1;
  }
//   return the answer of integer type function
  return counter;
}

