#include <iostream>

using namespace std;

int main()
{
    int antennas, eyes;
    
    cout << "How many antennas? ";
    cin >> antennas;
    
    cout << "How many eyes? ";
    cin >> eyes;
    
    if (antennas <= 2 && eyes <= 3)
    {
        cout << "GraemeMercurian" << endl;
    }
    else if (antennas <= 6 && eyes >= 2)
    {
        cout << "VladSaturnian" << endl;
    }
    else if (antennas >= 3 && eyes <= 4)
    {
        cout << "TroyMartian" << endl;
    }
    
    return 0;
}
