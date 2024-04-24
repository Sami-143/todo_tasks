#include<iostream>
using namespace std;
main()
{
    int numbers;
    cout<<"ENTER YOUR NUMBERS = ";
    cin>>numbers;
    int arr[numbers];
    int number;
    bool found = false;

    for(int i=0;i<numbers;i++)
    {
        cin>>arr[i];
    }
    cout<<"CHECK Number to find = ";
    cin>>number;
    for(int i=0;i<numbers;i++)
    {
        if (arr[i]==number)
        {
            found = true;
            break;
        }
    }
        if (found==false)
        {
            cout<<"Not found!"<<endl;

        }
        else
        {
            cout<<"Already exist in arry!"<<endl;
        }
    }



