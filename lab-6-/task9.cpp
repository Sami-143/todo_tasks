#include<iostream>
using namespace std;

float ticketBudget(int budget,string type,int group);
main(){
int budgett;
int groupp;
string typee;
float result1;

cout<<"ENTER THE BUDGET = ";
cin>> budgett;
cout<<"ENTER YOUR NO OF PERSON in GROUP = ";
cin>>groupp;
cout<<"ENTER THE ticket TYPE IS VIP OR NORMAL = ";
cin>>typee;


result1=ticketBudget(budgett,typee,groupp);
if (result1>0){

cout<<"YOU HAVE "<<result1<<"LEVA LEFT";
}
else if(result1<0){
    result1=-(result1);
    cout<<"NOT ENOUGH MONEY! YOU NEED"<<result1<<" LEVA ";
}

}
float ticketBudget(int budget,string type,int group){

float result;
float price;
float fianlPriceBuy;
float vipTicket=499.99;
float normalTicket=249.99;
float finalPriceBuy;
if (type=="VIP"){

    if (group>=1 && group<=4){
    result=budget*(75.0/100);
    
    price=budget-result;
   
     finalPriceBuy=price-(vipTicket*group);
    
    }
    else if(group>=5 && group<=9){
     result=budget*(60.0/100);   
    price=budget-result;
    finalPriceBuy=price-(vipTicket*group);
    }
    else if (group>=10 && group<=24){
      result=budget*(50.0/100);  
      price=budget-result;
      finalPriceBuy=price-(vipTicket*group);
    }
    else if (group>=25 && group<=49){
      result=budget*(40.0/100); 
         
     price=budget-result;
     finalPriceBuy=price-(vipTicket*group);
    }
    else if (group>50){
    result=budget*(25.0/100);  
    price=budget-result;
    finalPriceBuy=price-(vipTicket*group);
      }
      return finalPriceBuy;
}

if (type=="Normal"){
  
  if (group>=1 && group<=4){
   
    result=budget*(75.0/100);
    price=budget-result;
    finalPriceBuy=price-(normalTicket*group);
    }
    else if(group>=5 && group<=9){
     result=budget*(60.0/100);   
   price=budget-result;
    finalPriceBuy=price - (normalTicket*group);
    }
    else if (group>=10 && group<=24){
      result=budget*(50.0/100);  
      price=budget-result;
     finalPriceBuy=price - (normalTicket*group);
    }
    else if (group>=25 && group<=49){
      result=budget*(40.0/100);    
      price=budget-result;
       finalPriceBuy=price - (normalTicket*group);
    }
    else if (group>50){
    result=budget*(25.0/100);  
     price=budget-result;
      finalPriceBuy=price - (normalTicket*group);
      }
      return finalPriceBuy;
}
}