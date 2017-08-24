#include <iostream>

using namespace std;

int main()
{
    double xCoordinate, yCoordinate;
    
    cin >> xCoordinate;
    cin >> yCoordinate;
    
    if (xCoordinate > 0)
    {
        if (yCoordinate > 0)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "4" << endl;
        }
    }
    else
    {
        if (yCoordinate > 0)
        {
            cout << "2" << endl;
        }
        else
        {
            cout << "3" << endl;
        }
    }
    
    
    return 0;
}
