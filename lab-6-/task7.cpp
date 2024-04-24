#include<iostream>
using namespace std;
bool isGreater(int num1,int num2,int num3);
main()
{
    int no1;
    int no2;
    int no3;
    bool result;
    cout <<"ENTER 1ST NUMBER= ";
    cin>> no1;
    cout <<"ENTER 2nd NUMBER= ";
    cin>> no2;
    cout <<"ENTER 3rd NUMBER= ";
    cin>> no3;

   result= isGreater(no1,no2,no3);
   cout<<"RESULT IS = "<<result;

}
bool isGreater(int num1,int num2,int num3)
{
  bool greater;
    if((num1 == num2)&& (num1== num3)&&(num2==num3))
    {
        return true;
    }
    if((num1 == num2) &&(num1!= num3)&&(num2==num3))
    {
        return  false;
    }
   return 0;
}