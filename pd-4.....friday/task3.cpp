#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printmaze();
void playerMovement(int,int);

main(){ 
        int x=5;
	int y=2;
        system ("cls");
        printmaze();
while(true)
{
playerMovement(x,y);
if(x<8){

 x=x+1;
}
if(x==7){
gotoxy(x-1,y);
cout<<" ";
x=5;
}
}        
}
void printmaze()
{
cout<<"###########################################################################"<<endl;
cout<<"||..   .........................................................         ||"<<endl;   
cout<<"||..   %%%%%%%%%%%%%%%      ...       %%%%%%%%%%%%%        |%|..   %%%%% ||"<<endl;
cout<<"||..        |%|    |%|   |%|...       |%|       |%|        |%|..    |%|  ||"<<endl;
cout<<"||..        |%|    |%|   |%|...       |%|       |%|        |%|..    |%|  ||"<<endl;
cout<<"||..        %%%%%%%%%    |%|...       %%%%%%%%%%%%%           ..   %%%%%.||"<<endl;
cout<<"||..        |%|          |%|...      ..............       |%| ..        .||"<<endl;
cout<<"||..        %%%%%%%%%%   |%|...      %%%%%%%%%%%          |%| ..    %%%%.||"<<endl;
cout<<"||..                |%|              |%|........|%|       |%| ..     |%|.||"<<endl;
cout<<"||..     .........  |%|         P    |%|........|%|           ..|%|  |%|.|| "<<endl;
cout<<"||..|%|  |%|%%%|%|. |%| . |%|           ........|%|           ..|%|. |%|.||"<<endl;
cout<<"||..     |%|   |%|..      %%%%%%%%%%    ........|%|           ..|%|.     ||"<<endl;
cout<<"||..|%|  |%|   |%|..          ...|%|        %%%%%%%           ..|%|.     ||"<<endl;
cout<<"||..|%|            .          ...|%|                      |%| ..%%%%%%%% ||"<<endl;
cout<<"||..|%|  %%%%%%%%%%%%%%       ...|%|%%%%%%%%%%%%          |%| .......... ||"<<endl;
cout<<"||........................................................      ........ ||"<<endl;
cout<<"||   .....................................................|%| ..         ||"<<endl;
cout<<"||..|%|  |%|   |%|..       %%%%%%%%%%%%%%%   ........|%|  |%| ..|%|.     ||"<<endl;
cout<<"||..|%|  |%|   |%|..                ...|%|       %%%%%%%  |%| ..|%|.     ||"<<endl;
cout<<"||..|%|            .            G   ...|%|                    ..|%|.     ||"<<endl;
cout<<"||..|%|  %%%%%%%%%%%%%%             ...|%|%%%%%%%%%       |%| ..|%|%%%%%%||"<<endl;
cout<<"||........................................................|%| ..|%|......||"<<endl;
cout<<"||  ......................................................           ....||"<<endl;
cout<<"###########################################################################"<<endl;      
}
void gotoxy(int x,int y)
{
COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}  
void playerMovement(int x, int y)
{
gotoxy(x-1,y);
cout<<" ";
gotoxy(x,y);
cout<<"P";
Sleep(200);
}