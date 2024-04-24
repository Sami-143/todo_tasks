#include <iostream>
using namespace std;

main ()

{

float vegetablePrice;
float fruitPrice;
int kilogramVeg;
int kilogramFruit;
float fruit;
float vegetables;
float add;
float conversion;



cout << "Enter vegetable price per kilogram =";
cin >> vegetablePrice;
cout << "Enter fruit price per kilogram = ";
cin >> fruitPrice;
cout << "Enter total kilograms of vegetables = ";
cin >> kilogramVeg;
cout << "Enter total kilograms of fruits = ";
cin >> kilogramFruit;


fruit = fruitPrice*kilogramFruit;
vegetables = vegetablePrice*kilogramVeg;

add = fruit + vegetables;

conversion = add/1.94;

cout << "Answer is = ";
cout << conversion;


}



