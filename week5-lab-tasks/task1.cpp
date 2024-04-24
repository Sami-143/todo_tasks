#include<iostream>
#include<cmath>
using namespace std;
float height(float degrees,int base);

int main()
{
float degrees;
int base;
float answer;
cout << "ENTER BASE: ";
cin >> base;
cout << "ENTER ANGLE OF ELEVATION: ";
cin >>degrees;
 height(degrees,base);
cout<<"YOUR HEIGHT IS ="<<height;
}
float height(float degrees,int base)
{
float rad= 57.2958;
float radians;
float angle;
float height;
rad= angle/radians;
angle= tan(radians);
height= angle/base;
return height;
}
