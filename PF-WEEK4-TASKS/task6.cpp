#include<iostream>
using namespace std;
main()
{
int size;
int cost;
int area;
float costOfFertilizerPerPound;
float costOfFertilizerPerSquareFeet;
cout<<"enter your bag size in pounds:";
cin>>size;
cout<<"enter cost of bag:";
cin>>cost;
cout<<"enter your area covered by each bag in square feet:";
cin>>area;
costOfFertilizerPerPound=cost/size;
cout<<"your cost of fertilizer per pound:"<<costOfFertilizerPerPound<<endl;
costOfFertilizerPerSquareFeet=cost/area;
cout<<"your cost ofFertilizer per square feet is:"<<costOfFertilizerPerSquareFeet<<endl;
} 
