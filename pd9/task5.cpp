#include<iostream>
using namespace std;

main()
{
   
    string arr[4];
    string word;
    int index=0;

    for(int i=0 ;i<4;i++)
    {
        cout << "Enter element : ";
        cin >> arr[i];
        
    }
        word=arr[0];
     for(int idx = 0 ; idx < 4 ; idx++)
    {
        if(word == arr[idx])
        {
            index = index + 1;
        }
    }

     if(index==4)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}

