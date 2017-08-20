#include <iostream>

using namespace std;

int main()
{
    int antonia = 100;
    int david = 100;
    int antoniaRoll, davidRoll;
    int rounds;
    
    cin >> rounds;
    
    for (int counter = 0; counter < rounds; counter ++)
    {
        cin >> antoniaRoll >> davidRoll;
        
        if (antoniaRoll > davidRoll)
        {
            david -= antoniaRoll;
        }
        else if (davidRoll > antoniaRoll)
        {
            antonia -= davidRoll;
        }
    }
    
    cout << antonia << endl;
    cout << david << endl;
}
