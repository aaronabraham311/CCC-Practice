#include <iostream>

using namespace std;

int main()
{
    int limit, userSpeed, difference;
    
    cin >> limit;
    cin >> userSpeed;
    
    if (userSpeed <= limit)
    {
        cout << "Congratulations, you are within the speed limit!" << endl;
    }
    else
    {
        difference = userSpeed - limit;
        cout << "You are speeding and your fine is $";
        
        if (difference <= 20)
        {
            cout << "100" << endl;
        }
        else if (difference > 20 && difference <= 30)
        {
            cout << "270" << endl;
        }
        else
        {
            cout << "500" << endl;
        }
    }
    
    return 0;
}
