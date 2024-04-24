#include<iostream>
using namespace std;
main()
{
    string s1;
    string s2;
    
    cout << "ENTER FIRST STRING : ";
    cin >> s1;
    cout << "ENTER SECOND STRING : ";
    cin >> s2;
    int idx = 0;
    
    int count = 0;
    while(s1[idx] != '\0')
    {
        int index = 0;
        while(s2[index] != '\0')
        {
            if(s1[idx]=s2[index])
            {
                count = count + 1;
                break;
            }
            index++;
        }
        idx++;
    }
    cout<<count;
}
