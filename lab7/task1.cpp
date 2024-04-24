
#include<iostream>
using namespace std;


main()
{
    // function initialization and given some value For sake of garbage value
    int range=0;
    int previous=0;
    int current=1;
    int next=0;

     cout<< "ENTER THE RANGE = ";
    cin>>range;
     
    
    // using conditional lopp
    while(range>=0)
    {
    //    variable declaration
         cout<<next<<",";
        next=previous+current;
        previous=current;
        current=next;
       
        range=range-1;
    }
    
}
  
