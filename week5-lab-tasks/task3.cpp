#include<iostream>
#include<cmath>
using namespace std;

bool isSymmetrical(int number);

main(){

bool isTrue;
int number;

	cout<<"ENTER YOUR 3 DIGITS NUMBER=";
	cin>>number;

	isTrue=isSymmetrical(number);

if(isTrue==true){
cout<<"isTrue";
}

if(isTrue==false){
cout<<"isFalse";
}

}


bool isSymmetrical(int number)
{
int quotient1;
int rem1;
int quotient2;
int rem2;


quotient1= number / 10;
rem1= number %10;
quotient2= quotient1/10;
rem2= quotient1 % 10;


if(rem1==quotient2){
return true;

}

if(rem1!=quotient2){
return false;

}

return 0;

}
