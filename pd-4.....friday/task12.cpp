#include<iostream>
using namespace std;
void check(int speed);


main(){
	int speed;
while(true){
cout<<"ENTER YOUR SPEED=";
cin>>speed;
cout<<endl;
check(speed);
}
}
void check(int speed){
if(speed==100){
cout<<"Perfect!You're going good";
cout<<endl;
}
if(speed==105){
cout<<"Halt....YOU WILL BE CHALLENGED"<<endl;
}
}