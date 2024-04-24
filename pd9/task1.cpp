#include<iostream>
using namespace std;
main()

{
    string fruit[4]={"peach","apple","guava","watermelon"};
    int price[4]={60,70,40,30};
    int quantity;
    int totalBill;
    int i=-1;
    string fruitComp;
    cout<<"Enter the name of fruit = "<<endl;
        cin>>fruitComp;
         cout<<"Enter the quantity = ";
        cin>> quantity;
    for(int idx=0;idx<4;idx++)
    {
       if(fruitComp== fruit[idx])
       {
        i=idx;
       }
    }

    if(i==-1)
    {
        cout<<"FRUIT NOT FOUND!";
    }
    else
    {
        totalBill=quantity*price[i];
        cout<<totalBill<<endl;
    }
    
}