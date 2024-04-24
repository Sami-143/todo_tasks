
#include<iostream>
using namespace std;
// function prototype
float calculateMoney(int age,int price,int unitPrice);

main()
{
    // variables declaratation
    int age;
    int price;
    int unitPrice;
    int money;

    cout << "ENTER THE LILY's AGE in the range of [1...77] = ";
    cin >> age;
    cout << "ENTER THE PRICE OF WASHING MACHINE int the range [1.....10000] = ";
    cin>>price;
    cout << "ENTER THE UNIT PRICE OF in the range of [0......40] = ";
    cin >>unitPrice;
// calling function
 money = calculateMoney(age,price,unitPrice); 
 
// using if conditions
    if(money>0)
    {
     cout<<"Yes!"<<endl<<money <<endl;
    }
    if(money<0)
    {
        money=-(money);
        cout<<"No!"<<endl<<money <<endl;
    }
}

// fuction defineatin 
float calculateMoney(int age,int price,int unitPrice)
{
    int odd;
    int even;
    int evenMoney=0;
    int oddMoney;
    int presentMoney=10;
    int BirthdayMoney;
    int totalMoney;

    // using if conditions
        if(age % 2==0)
        {
            even=age/2;
            odd=even;
        }
        if(age %2!=0)
        {
            odd=age/2 + 1;
            even=age/2;

        }
        // using counter loop
    for(int number=1;number<=even;number++)
    {
        evenMoney=evenMoney+presentMoney;
        presentMoney=presentMoney+10;
    }
        evenMoney=evenMoney-even;
        oddMoney=odd*unitPrice;

        BirthdayMoney=oddMoney+evenMoney;
        totalMoney=BirthdayMoney-price;
        return totalMoney;
}