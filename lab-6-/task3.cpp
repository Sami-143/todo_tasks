#include<iostream>
using namespace std;

string checkTitle(char gender,int age);

main(){
    char genderr;
    int agee;
    string result;
cout<<"ENTER AGE = ";
cin>>agee;
cout<<"ENTER YOUR GENDER=";
cin>> genderr;
result=checkTitle(genderr,agee);
cout<<"YOUR GENDER IS = "<<result;
}

string checkTitle(char gender,int age)
{ 
    string check;
    if(age>=16 && gender=='m'){
    check="Mr";
    
    }

    if(age<16 && gender=='m'){
    check="Master";
    
    }

    if(age>=16 &&  gender=='f'){
    check="Ms.";
   
    }

    if(age<16 && gender=='f'){
    check="Miss";
    
    }
    return check;
}