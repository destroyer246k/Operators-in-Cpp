// Patel Vishwas
// 24070123072
// A3
#include<iostream>
using namespace std;
int main()
{
    int DCLD,EDC,NT,SS,MTT,AVG;
    cout << "Enter Marks of DCLD: ";
    cin >> DCLD;
    cout << "Enter Marks of EDC: ";
    cin >> EDC;
    cout << "Enter Marks of NT: ";
    cin >> NT;
    cout << "Enter Marks of MTT: ";
    cin >> MTT;
    cout << "Enter Marks of SS: ";
    cin >> SS;
    AVG = (DCLD + NT + SS + MTT + EDC)/5;
    if(90 < AVG && AVG <=100) // Check if the average is greater than 90 and less than or equal to 100 
    {
        cout << "Your Marks Average are: "<< AVG <<" Grade is O";
    }
    else if(80 < AVG && AVG <=90) // Check if the average is greater than 80 and less than or equal to 90
    {
        cout << "Your Marks Average are: "<< AVG <<" Grade is A+";
    }
    else if(70 < AVG && AVG <=80)  // Check if the average is greater than 70 and less than or equal to 80
    {
        cout << "Your Marks Average are: "<< AVG <<" Grade is A";
    }
    else if(60 < AVG && AVG <=70) // Check if the average is greater than 60 and less than or equal to 70
    {
        cout << "Your Marks Average are: "<< AVG <<" Grade is B";
    }
    else if(50 < AVG && AVG <=40)   // Check if the average is greater than 50 and less than or equal to 60
    {
        cout << "Your Marks Average are: "<< AVG <<" Grade is C";  // Check if the average is greater than 50 and less than or equal to 60
    }
    else if(AVG < 0 || AVG > 100) // Check if the average is less than 0 or greater than 100
    {
        cout << "Enter Marks Out of 100";
    }
    else // If the average is less than or equal to 50
    {
        cout << "FAIL";
    }
    return 0;
}
