#include <iostream>

using namespace std;

int main()
{
    //char array[3][3] = { {'*', 'X', '*'}, {' ', 'X', 'X'}, {'*', ' ', '*'} };
    
    int kFactor;
    
    cin >> kFactor;
    
    //char newArray[3 * kFactor][3 * kFactor];
    
    for (int i = 0; i < kFactor; i ++)
    {
        for (int ii = 0; ii < kFactor; ii ++)
        {
            cout << '*';
        }
        for (int ii = 0; ii < kFactor; ii ++)
        {
            cout << 'X';
        }
        for (int ii = 0; ii < kFactor; ii ++)
        {
            cout << '*';
        }
        
        cout << endl;
    }
    
    for (int i = 0; i < kFactor; i ++)
    {
        for (int ii = 0; ii < kFactor; ii ++)
        {
            cout << ' ';
        }
        for (int ii = 0; ii < kFactor; ii ++)
        {
            cout << 'X';
        }
        for (int ii = 0; ii < kFactor; ii ++)
        {
            cout << 'X';
        }
        
        cout << endl;
    }
    
    for (int i = 0; i < kFactor; i ++)
    {
        for (int ii = 0; ii < kFactor; ii ++)
        {
            cout << '*';
        }
        for (int ii = 0; ii < kFactor; ii ++)
        {
            cout << ' ';
        }
        for (int ii = 0; ii < kFactor; ii ++)
        {
            cout << '*';
        }
        
        cout << endl;
    }
    
    return 0;
}
