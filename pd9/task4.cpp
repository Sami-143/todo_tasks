#include<iostream>
using namespace std;
bool findSeven(int number);
main()
{
    int n;
    int number;
    cout<<"ENTER NUMBER: ";
    cin>>number;
    cout<<"ENTER THE LENGTH OF ARRAY = ";
    cin>>n;
    int arr[n];
    
    int num;
    bool flag=false;

    for(int i=0;i<n;i++)
    {
        cout<<"ENTER ELEMENTS= ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
    bool result=findSeven(arr[i]);
    if(result==true)
    {
        cout<<"boom..";
    }
    
    }
}
    bool findSeven(int number)
    {
        int remainder;
        bool flag=false;
        while(number>0)
        {
        int quotient=number/10;
        remainder=number%10;
        
        
       
       if (remainder==7)
        {
            flag=true;
        
        }
        number=quotient;
        }

    return flag;
    }

    
    

