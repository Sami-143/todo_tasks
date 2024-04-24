#include<iostream>
using namespace std;
main()
{
 float subj1;
 float subj2;
 float subj3;
 float subj4;
 float subj5;
 float percentage;
cout<<"ENTER YOUR SUBJ1 MARKS  :";
cin>>subj1;
cout<<"ENTER YOUR SUBJ2 MARKS:";
cin>>subj2;
cout<<"ENTER YOUR SUBJ3 MARKS  :";
cin>>subj3;
cout<<"ENTER YOUR SUBJ4 MARKS:";
cin>>subj4;
cout<<"ENTER YOUR SUBJ5 MARKS:";
cin>>subj5;
percentage=(subj1+subj2+subj3+subj4+subj5)/500 *100;
cout<<"YOUR PERCENTAGE IS:"<<percentage;
}