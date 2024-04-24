#include<iostream>
using namespace std;

float checkCost(string city, string product,int quantity);

main(){
    string cityy;
    string productt;
    int quantityy;
    float result;


    cout<<"ENTER THE NAME OF CITY = ";
    cin>>cityy;
    cout << "ENTER THE NAME OF PRODUCT = ";
    cin>> productt;
    cout<<"ENTER THE QUANTITY = ";
    cin>> quantityy;
    
    result=checkCost(cityy, productt,quantityy);
cout<<"THE  COST IS = "<<result;
}

float checkCost(string city, string product,int quantity)
{
    float cost;
    if(city=="Sofia"){
        if(product=="coffee"){
            cost=quantity*0.50;
        }
        if(product=="water"){
            cost= quantity * 0.80;
        }
        if(product=="sweets"){
            cost= quantity * 1.45;
        }
        if(product=="beer"){
            cost=quantity*1.20;
        }
        if(product=="peanut"){
        cost=quantity*1.60;
        }
         return cost;
    
    }

    if(city=="Plovdiv")
    {
        if(product=="coffee"){
            cost=quantity*0.40;
        }
        if(product=="water"){
            cost= quantity * 0.70;
        }
        if(product=="sweets"){
            cost= quantity * 1.30;
        }
        if(product=="beer"){
            cost=quantity*1.15;
        }
        if(product=="peanut"){
        cost=quantity*1.50;
        }
         return cost;
    }

         if(city=="Varna"){

        if(product=="coffee"){
            cost=quantity*0.45;
        }
        if(product=="water"){
            cost= quantity * 0.70;
        }
        if(product=="sweets"){
            cost= quantity * 1.35;
        }
        if(product=="beer"){
            cost=quantity*1.10;
        }
        if(product=="peanut"){
        cost=quantity*1.55;
        }
         return cost;
    
    }
    
    }
