#include <iostream>

using namespace std;

int main ()
{
    float angle1, angle2, angle3;
    
    cin >> angle1 >> angle2 >> angle3;
    
    float sum = angle1 + angle2 + angle3;
    
    if (sum == 180)
    {
        if (angle1 == angle2 && angle2 == angle3)
        {
            cout << "Equilateral" << endl;
        }
        else if (angle1 == angle2 || angle2 == angle3 || angle3 == angle1)
        {
            cout << "Isoceles" << endl;
        }
        else
        {
            cout << "Scalene" << endl;
        }
    }
    else
    {
        cout << "Error" << endl;
    }
    
    return 0;
}
