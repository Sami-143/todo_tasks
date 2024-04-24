#include<iostream>
using namespace std;

void ifPass(int marks);

main()
{
	int marks;
	cout<<"ENTER PF MARKS=";
	cin>>marks;
ifPass(marks);
}
			

void ifPass(int marks)
{
		if(marks>50)
		{
		cout<<"YOU HAVE PASSED YOUR PF QUIZ.";
		}
		if(marks==50)
		{
		cout<<"YOU ARE BARELY passed.";
		}
		if(marks<50)
		{
		cout<<"YOU ARE FAILED YOUR PF QUIZ.";
		}
}