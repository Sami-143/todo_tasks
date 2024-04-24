#include<iostream>
using namespace std;
// function prototype
void printPercentage(int number);

main(){
 // variables declaratation
    int number;
    float result;
 // taking number from user
    cout<< "Enter the Number of Integers from[1-1000] = ";
    cin>>number;
// calling function
    printPercentage(number);
   
}   
// fuction defineatin 
void printPercentage(int number)
{
 // variables declaratation
    float p1, n1=0, n2=0, n3=0, n4=0, n5=0;
    float p2;
    float p3;
    float p4;
    float p5;
 // using counter loop
    for(int count=1;count<=number; count++)
    {
        // variables declaratation
        int num;
        cin>>num;
        // using if conditions
        if (num>=1 && num<200)
        {
          n1++;
        }

        if(num<=200 && num<=399)
        {
           n2++;
        }

        if(num>=400 && num<599)
        {
            n3++;
        }

        if(num>=600 && num<800)
        {
            n4++;
        }

       if(num>800)
        {
            n5++;
        }
    }
// printing values for function
    p1 = n1*100/number;
    cout<<p1<<endl;

    p2 = n2*100/number;
    cout<<p2<<endl;

    p3 = n3*100/number;
    cout<<p3<<endl;

    p4 = n4*100/number;
    cout<<p4<<endl;

    p5 = n5*100/number;
    cout<<p5<<endl;


}


