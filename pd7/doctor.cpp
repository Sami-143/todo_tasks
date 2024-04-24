#include<iostream>
// using math libarary
#include<cmath>
using namespace std;
main()
{
     // variable declaration in  body
    int period;
    int untreated=0;
    int treated=0;
    int doctor=7;
    cout<<"Enter the PATIENT's PERIOD in the range of [1 to 1000] = ";
    cin>>period;
    int numOfPatients=0;
    int patientUntreated=0;
    int patientTreated=0;

    
    // using counter lop for repitation of iterations
    for(int idx=0;idx<period;idx++)
    {
        cout<<"ENTER THE NO. OF PATIENT FOR THE WHOLE DAY = ";
        cin>>numOfPatients;
    // using if conditions
        if(idx%2==0)
        {
            if(patientUntreated>patientTreated)
            {
                patientTreated=0;
                patientUntreated=0;
                doctor++;
            }
        }
        // using if conditions
        if(numOfPatients<=doctor)
        {
          treated=treated+numOfPatients;
          patientTreated =patientTreated+numOfPatients;
        }
        // using if conditions
        if(numOfPatients>doctor)
        {
            untreated=untreated +(numOfPatients-doctor);
            patientUntreated=patientUntreated+(numOfPatients-doctor);
            treated=treated+doctor;
            patientTreated =patientTreated+doctor;

        }

    }
    // for Final  resulting process 
    cout<<"Treated Patients = "<<treated;
    cout<<"Untreated Patient = "<<untreated;
}