#include<iostream>
using namespace std;
 string sign(int date, string month);
 main(){

int datee;
string monthh; 
string result;

cout<< "ENTER THE DATE = ";
cin>>datee;
cout<<"ENTER YOUR MONTH = ";
cin>> monthh;
result=sign( datee,monthh);
cout<< "ZODICAL SIGN IS = "<<result;
 }


 string sign(int date, string month){
string output;
if ((month == "March" && date >=21 )||(month == "April"&&  date<=19))
{
   output="Aries";
}
else if ((month == "April" && date >=20 )||(month == "May"&&  date<=20))
{
    output="Taurus";
}
else if ((month == "May" && date >=21 )||(month == "June"&&  date<=20))
{
    output="Gemini";
}
else if ((month == "June" && date >=21 )||(month == "July"&& date<=22))
{
    output="Cancer";
}
else if ((month == "July" && date >=23 )||(month == "August"&& date<=22))
{
    output="Leo";
}
else if ((month == "August" && date >=23 ) || (month == "September"&&  date<=22))
{
    output="Virgo";
}
else if ((month == "September" && date >=23 )||(month == "October"&& date<=22))
{
    output="Libra";
}
else if ((month == "October" && date >=23 )||(month == "November"&&  date<=21))
{
    output="Scorpio";
}
else if ((month == "November" && date>=22 )||(month == "December"&& date<=21))
{
   output="Saggitarius";
}
else if(((month == "December" && date >=22 ))||(month == "January"&&  date<=19))
{
   output="Capricorn";
}
else if ((month == "January" && date >=20 )||(month == "Febraury"&& date<=18))
{
    output="Aquarius";
}
else if ((month == "Febraury" && date >=19)||(month == "March"&& date<=20))
{
    output="Pisces";
}
return output;
 }