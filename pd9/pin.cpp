
#include<iostream>
using namespace std;
main()
{
    int pin[4];
    string arr[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado","Pop", "Lock", "Arabesque"};
    cout << "Ener PIN Number = "<<endl;


    for(int index = 0 ; index < 4 ; index++)
    {
        cin>>pin[index];
    }
    if((pin[1]>=0 && pin[1]<10) && (pin[2]>=0 && pin[2]<10) && (pin[3]>=0 && pin[3]<10)  && (pin[0]>=0 && pin[0]<10))
    {
        
        for(int index=0;index<4;index++)
        {
            pin[index]=pin[index]+index;

            if(pin[index]<=9)
            {
                cout<<arr[pin[index]]<<",";
            }
            else
            {
                pin[index]=pin[index]-10;
                cout <<arr[pin[index]]<<",";
            }
        }
       
    }
    else
    {
        cout << "Invalid Input. ";

    }    
}