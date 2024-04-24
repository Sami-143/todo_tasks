#include<iostream>
using namespace std;
main()
{
    string word;
    char letter;
    cout << "Enter name : ";
    getline( cin , word);
    cout << "Enter a Letter : ";
    cin >> letter;
    int idx = 0;
    while(word[idx] != '\0')
    {
        idx = idx + 1;
    }
    if(letter == word[idx - 1])
    {
        cout << "Last Letter is same as you Entered. ";
    }
    else
    {
        cout << "Last Letter is not same as you Entered. ";
    }
}   