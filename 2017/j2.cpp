#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    double userNumber, shiftFactor;
    
    cin >> userNumber;
    cin >> shiftFactor;
    
    int total = userNumber;
    
    for (int counter = 1; counter <= shiftFactor; counter ++)
    {
        total += userNumber * pow(10, counter);
    }
    
    cout << total << endl;
    
    return 0;
}
