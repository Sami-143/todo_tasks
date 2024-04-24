#include<iostream>
using namespace std;

main(){
    int num1;
    int num2;
    int num3;
    int greatest;
    cout<<"enter your 1st number=";
    cin>>num1;
    cout<<"enter your 2nd number=";
    cin>>num2;
     cout<<"enter your 3rd number=";
     cin>>num3;
     cout<<"greatest"<<greatest; 

if (num1>num2 && num3<num1){
greatest=num1;
return greatest;
}
if (num2>num1 && num2>num3){
greatest=num2;
}
return greatest;
}