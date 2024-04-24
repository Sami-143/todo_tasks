
#include<iostream>
using namespace std;
main()
{
    int sizeOfArray;
    int sec;
    int count = -1;
    string color;
    cout << "EMTER TOTAL NUMBER OF COLURS : ";
    cin >>sizeOfArray;
    string colour[sizeOfArray];
    for(int i= 0 ;i<sizeOfArray;i++)
    {
        cout <<"ENTER THE COLOR = ";
        cin >>colour[i];
    }
    sec=2*sizeOfArray;
    for(int i=0;i<sizeOfArray ;i++)
    {
        if(colour[i]!= colour[i+1])
        {
            count = count + 1;
        }
    }
    sec= sec+count;
    cout << sec<<"seconds";
}