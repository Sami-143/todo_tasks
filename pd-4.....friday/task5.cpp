#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printmaze();
void playerMovement(int,int);

main(){ 
        int x=3;
	int y=15;
        system ("cls");
        printmaze();
        gotoxy(x,y);
while(true)
{
playerMovement(x,y);
if(x<72)
{
 x=x+1;
}
if(x==72)
{
gotoxy(x-1,y);
cout<<" ";
y=y+1;
gotoxy(x,y-1);
cout<<" ";
}
if(y==23)
{
y=15;
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
cout<<"||..|%|  %%%%%%%%%%%%%%             ...|%|%%%%%%%%%       |%| ..|%|%%%%% ||"<<endl;
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