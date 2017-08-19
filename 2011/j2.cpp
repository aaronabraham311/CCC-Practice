#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int humdityFactor, maxHours, altitude;
    bool hitGround = false;
    int i;
    
    cin >> humdityFactor;
    cin >> maxHours;
    
    for (i = 1; i <= maxHours; i ++)
    {
        altitude = ((-6)*pow(i, 4)) + (humdityFactor*pow(i, 3)) + (2*pow(i, 2)) + i;
        
        if (altitude <= 0)
        {
            hitGround = true;
            break;
        }
    }
    
    if (hitGround == true)
    {
        cout << "The balloon first touches the ground at hour: " << endl << i << endl;
    }
    else
    {
        cout << "The balloon does not touch ground in the given time." << endl;
    }
    
    return 0;
}
