#include <iostream>

using namespace std;

int main ()
{
    int month, day;
    
    cin >> month;
    cin >> day;
    
    if (month < 2)
    {
        cout << "Before" << endl;
    }
    else if (month > 2)
    {
        cout << "After" << endl;
        
    }
    else if (month == 2)
    {
        if (day < 18)
        {
            cout << "Before" << endl;
        }
        else if (day == 18)
        {
            cout << "Special" << endl;
        }
        else if (day > 18)
        {
            cout << "After" << endl;
        }
    }
    
    return 0;
}
