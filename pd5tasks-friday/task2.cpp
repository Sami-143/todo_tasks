#include<iostream>
using namespace std;

float cubicCentimeters(float lenght,float width,float height);
float cubicKilometers(float lenght,float width,float height);
float cubicMillimeters(float lenght,float width,float height);


main(){
float lenght;
float width;
float height;
float V1;
float V2;
float V3;
string output;



cout<< "Enter lenght: ";
cin>>lenght;
cout<< "Enter width: ";
cin>>width;
cout<< "Enter height: ";
cin>>height;
cout<< "Enter output unit: ";
cin>>output;

V1=cubicCentimeters(lenght,width,height);
V1=(lenght*width*height)*(100*100*100)/3;
cout<<"VOLUME IN CENTIMETERS is = "<<V1 <<endl;

V2=(lenght*width*height)/(1000*1000*1000);
V2=cubicKilometers(lenght,width,height)/3;
cout<<"VOLUME IN KILOMETERS is = "<<V2<<endl;

V3=(lenght*width*height)*(1000*1000*1000)/3;
V3=cubicMillimeters(lenght,width,height);
cout<<"VOLUME IN MILIMETERS is = "<<V3<<endl;

}


float cubicCentimeters(float lenght,float width,float height)
{
	string output;
  if  (output == "centimeters")
{  
  	float V1;
        V1=(lenght*width*height)*(100*100*100)/3;
 	return V1;
}
return  0;
}

float cubicKilometers(float lenght,float width,float height)
{
string output;
if (output == "kilometers")
{
 	float V2;
 	V2=(lenght*width*height)/(1000*1000*1000)/3;
 	return V2;

}
return  0;
}

float cubicMillimeters(float lenght,float width,float height)
{
string output;
 if (output == "millimeters")
{
 	float V3;
 	V3=(lenght*width*height)*(1000*1000*1000)/3;
 	return V3;
}
return  0;
}      
