#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);


void printA();
void printW();
void printI();
void printS();
main()
{
 printA();
 printW();
 printI();
 printS();

}

void gotoxy(int x,int y)
{
COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void printA()
{
gotoxy(25,25);
	cout<<"     #    "<<endl;
gotoxy(25,26);
	cout<<"   #   #    "<<endl;
gotoxy(25,27);
	cout<<"  #     #   "<<endl;
gotoxy(25,28);
	cout<<" #       #    "<<endl;
gotoxy(25,28);
	cout<<" #########    "<<endl;
gotoxy(25,29);
	cout<<" #       #   "<<endl;
gotoxy(25,30);
	cout<<" #       #   "<<endl;
gotoxy(25,31);

cout<<endl;
}

void printW()
{
gotoxy(25,34);
        cout<<" #       #  "<<endl;
gotoxy(25,35);	
	cout<<" #       #  "<<endl;
gotoxy(25,36);
	cout<<" #   #   #  "<<endl;
gotoxy(25,37);
	cout<<" #  # #  #  "<<endl;
gotoxy(25,38);
	cout<<" # #   # #  "<<endl;
gotoxy(25,39);
	cout<<" ##     ##  "<<endl;
gotoxy(25,40);
	cout<<" #       #  "<<endl;
gotoxy(25,41);    
cout<<endl;


}

void printI()
{
gotoxy(25,44);
	cout<<"   #####"<<endl;
gotoxy(25,45);
	cout<<"     #    "<<endl;
gotoxy(25,46);
	cout<<"     #    "<<endl;
gotoxy(25,47);
	cout<<"     #    "<<endl;
gotoxy(25,48);
	cout<<"     #    "<<endl;
gotoxy(25,49);
	cout<<"     #    "<<endl;
gotoxy(25,50);
	cout<<"   #####"<<endl;
gotoxy(25,51);
cout<<endl;

}

void printS()
{
gotoxy(25,54);
	cout<<" ##########"<<endl;
gotoxy(25,55);
	cout<<"#         "<<endl;
gotoxy(25,56);
	cout<<"#         "<<endl;
gotoxy(25,57);
	cout<<" #########"<<endl;
gotoxy(25,58);
	cout<<"          #"<<endl;
gotoxy(25,59);
	cout<<"          #"<<endl;
gotoxy(25,60);
	cout<<" ######### "<<endl;
gotoxy(25,61);

cout<<endl;
}








