#include <iostream>

using namespace std;

int main()
{
    int depth[4];
    int difference[3];
    
    for (int i = 0; i < 4; i ++)
    {
        cin >> depth[i];
    }
    
    for (int i = 0; i < 3; i ++)
    {
        difference[i] = depth[i + 1] - depth[0];
    }
    
    if (difference[0] == difference[1] && difference[1] == difference[2])
    {
        cout << "Fish at Constant" << endl;
    }
    else if (difference[0] < difference[1] && difference[1] < difference[2])
    {
        cout << "Fish Rising" << endl;
    }
    else if (difference[0] > difference[1] && difference[1] > difference[2])
    {
        cout << "Fish Diving" << endl;
    }
    else
    {
        cout << "No Fish" << endl;
    }
    
    return 0;
}
