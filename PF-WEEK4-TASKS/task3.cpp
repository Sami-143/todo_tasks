#include<iostream>
using namespace std;
main()
{
 float initialVelocity;
 float time;
 float acceleratin;
 float finalVelocity;

cout<<"ENTER YOUR INITIAL VELOCITY :";
cin>>initialVelocity;
cout<<"ENTER YOUR TIME:";
cin>>time;
cout<<"ENTER YOUR ACCELERATION :";
cin>>acceleratin;
finalVelocity=(acceleratin*time)+initialVelocity;
cout<<"YOUR FINAL VELOCITY IS"<<finalVelocity;
}