#include <iostream>

using namespace std;

int main()
{
    double initialX, initialY;
    double destinationX, destinationY;
    int charge;
    bool evenCharge, evenDistance;
    
    cin >> initialX >> initialY;
    cin >> destinationX >> destinationY;
    cin >> charge;
    
    if (charge % 2 == 0)
    {
        evenCharge = true;
    }
    else
    {
        evenCharge = false;
    }
    
    int coordinateDifference = (destinationX - initialX) + (destinationY - initialY);
    
    if (coordinateDifference == 0)
    {
        cout << "Y" << endl;
    }
    else
    {
        if (coordinateDifference > charge)
        {
            cout << "N" << endl;
        }
        else
        {
            if (coordinateDifference % 2 == 0)
            {
                evenDistance = true;
            }
            else
            {
                evenDistance = false;
            }
            
            if (coordinateDifference > 3)
            {
                if (coordinateDifference + 3 <= charge)
                {
                    evenCharge = evenDistance;
                }
            }
            
            if (evenDistance == evenCharge)
            {
                cout << "Y" << endl;
            }
            else
            {
                cout << "N" << endl;
            }
            
        }
        
        return 0;
    }
}
