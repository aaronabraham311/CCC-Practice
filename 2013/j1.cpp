#include <iostream>

using namespace std;

int main()
{
    int youngestAge;
    int middleAge;
    int difference;
    
    cin >> youngestAge;
    cin >> middleAge;
    
    difference = middleAge - youngestAge;
    
    cout << middleAge + difference << endl;
    
    return 0;
}
