#include<iostream>
using namespace std;

int evenOrOdd(int digits);

main(){
int digits;
int number;
bool result;

cout<<"ENTER 5 DIGIT NUMBER=";
cin>>number;

result= evenOrOdd (digits) ;


	if(result==1){
cout<<"IsOddish"<<endl;
}
	if(result==0){
cout<<"isEvenish"<<endl;
}

}


int evenOrOdd(int digits)
{
int quo1;
int rem1;
int quo2;
int rem2;
int quo3;
int rem3;
int quo4;
int rem4;
int quo5;
int rem5;
int sum;


quo1=digits/10;
rem1=digits%10;
quo2=quo1/10;
rem2=quo1%10;
quo3=quo2/10;
rem3=quo2%10;
quo4=quo3/10;
rem4=quo3%10;
quo5=quo4/10;

sum=rem1+rem2+rem3+rem4+quo5;
int answer = sum % 2 ; 
if(answer==0)
{
return 0;

}

if(answer==1){
return 1;

}


}
