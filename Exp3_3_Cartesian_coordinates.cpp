// Patel Vishwas
// 24070123072
// A3
#include <iostream>
using namespace std;
int main() {
    float x,y;

    cout << "Enter X Coordinate:";
    cin >> x;
    cout << "Enter Y Coordinate:";
    cin >> y;
    if(x>0 && y >0) // Check if both x and y are positive
    {
        cout<<"It is in First Quadrant"<<endl;
    }
    else if(x<0 && y >0) // Check if x is negative and y is positive
    {
        cout<<"It is in Second Quadrant"<<endl;
    }
    else if(x<0 && y <0) // Check if both x and y are negative
    {
        cout<<"It is in Third Quadrant"<<endl;
    }
    else if(x>0 && y <0) // Check if x is positive and y is negative
    {
        cout<<"It is in Fourth Quadrant"<<endl;
    }
    else if(x == 0&& y > 0 || y<0)  // Check if x is 0 and y is positive or negative that is the Y axis
    {
         cout<<"Y axis"<<endl;
    }
    else if(y == 0&& x > 0 || x<0)  // Check if y is 0 and x is positive or negative that is the X axis
    {
        cout<<"X axis"<<endl;
    }
    else  // Check if both x and y are 0 that is the origin
    {
        cout << "On Origin"<<endl;
    }
return 0;
}

/*
output:
Enter X Coordinate:3
Enter Y Coordinate:4
It is in First Quadrant

Enter X Coordinate:-5
Enter Y Coordinate:3
It is in Second Quadrant

Enter X Coordinate:-4
Enter Y Coordinate:-5
It is in Third Quadrant

Enter X Coordinate:5
Enter Y Coordinate:-4
It is in Fourth Quadrant

Enter X Coordinate:0
Enter Y Coordinate:7
Y axis

Enter X Coordinate:0
Enter Y Coordinate:-6
Y axis

Enter X Coordinate:8
Enter Y Coordinate:0
X axis

Enter X Coordinate:-9
Enter Y Coordinate:0
X axis

Enter X Coordinate:0
Enter Y Coordinate:0
On Origin
*/