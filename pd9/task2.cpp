#include<iostream>
using namespace std;
main()

{
    string movies[5]={"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    int price=500;
    int discount;
    string movieComp;
    cout<<"ENTER THE NAME OF MOVIE = ";
    cin>>movieComp;
    int i=-1;
    for(int idx=0;idx<5;idx++)
    {
        if(movieComp==movies[idx])
        {
            i=idx;
        }
    
    }
    if (i%2==1)
    {
        discount=price*0.5;
    }
    else
    {
        discount=price*0.1;
    }
    cout<<discount<<endl;

}