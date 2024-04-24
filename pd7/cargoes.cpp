#include<iostream>
using namespace std;
main()
{    
    // variable declaration in  body
    int numberOfCargoes;
    cout<<"ENTER YOUR NUMBER OF TOTAL CARGOES = ";
    // taking input from the user
    cin>>numberOfCargoes;
    // again initialization of new variable 
    int cargoes;
    
    // variable initialization
    int sum=0;
//  variable initialization
    int forMinibus=0;
    int forTruck=0;
    int forTrain=0;

    // using counter lop for repitation of iterations
    for(int idx=1;idx<=numberOfCargoes;idx++)
    {
        // taking number of itterations
        cout<<"ENTER THE CARGOES FOR YOUR TRANSPORT = ";
        cin>>cargoes;
        sum=sum+cargoes;
    // using if conditions
        if (cargoes<=3)
        {
           forMinibus=forMinibus+cargoes; 
        }
        else if (cargoes>3 && cargoes<=11)
        {
            forTruck=forTruck+cargoes;
        }
        else if (cargoes>11)
        {
            forTrain=forTrain+cargoes;
        }
    }
    // variable intialization and ddeclaration
    float perMinibus=(forMinibus*100.0)/sum;
    cout<<perMinibus<<"%"<<endl;
    float perTruck=(forTruck*100.0)/sum;
    cout<<perTruck<<"%"<<endl;
    float perTrain= (forTrain*100.0)/sum;
    cout<<perTrain<<"%"<<endl;
    // retun the finalrice
    float finalPrice=((forMinibus*200.0)+(forTruck*175.0)+ (forTrain*120.0))/sum;
    cout<<finalPrice<<endl;
}