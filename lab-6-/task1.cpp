#include<iostream>
using namespace std;
char checkGrades(int marks);
main(){
    int numberr;
     char result;
    cout<<"ENTER YOUR MARKS = ";
    cin>>numberr;
    result=checkGrades(numberr);
    cout <<" THE GRADE OF STUDENT IS= "<<result;
}
char checkGrades(int marks)

  {
    char grade;
    if(marks<50){
        grade= 'F';
    }
    else if(marks>=50 && marks<=60){
        grade ='E';
    }
    else if(marks>=61 && marks<=70){
       grade= 'D';
    }
    else if(marks=71 && marks<=80){
        grade ='C';
    }
    else if(marks>=81 &&  marks<=85){
        grade= 'B';
        }
else 
{
    grade= 'A';
}
return grade;
}

    