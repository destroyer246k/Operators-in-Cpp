// Patel Vishwas
// 24070123072
// A3
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter Number: ";
    cin >> a;
    if(a > 0)// Check if the number is greater than zero
    {
        cout << "Entered Number is " << a << " and is Positive"; // If true, it is positive
    }
    else if(a < 0) // Check if the number is less than zero
    {
        cout << "Entered Number is " << a << " and is Negative"; // If true, it is negative
    }
    else // If the number is neither greater nor less than zero, it must be 0
    {
        cout << "Entered Number is 0"; // If neither condition is true, it is 0
    }
    return 0;
}