#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printMaze();

main(){ 
        system ("cls");
        printMaze();
        cout<<endl;
}
void printMaze()
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