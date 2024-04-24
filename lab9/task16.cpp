#include<iostream>
using namespace std;
main()
{
    string array01 = "somthing";
    string array02;
    cout << "Enter any argument : ";
    getline(cin , array02);
    cout << "Your argument will become :- " << endl;
    cout << array01 << " " << array02;
}