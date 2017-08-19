#include <iostream>

using namespace std;

int main ()
{
    int num1, num2, length = 2;
    
    cin >> num1;
    cin >> num2;
    
    while (true)
    {
        int nextNum = num1 - num2;
        
        if (nextNum < 0)
        {
            break;
        }
        else
        {
            num1 = num2;
            num2 = nextNum;
            length ++;
        }
    }
    
    cout << length << endl;

    
    return 0;
}
