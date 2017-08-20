#include <iostream>
#include <string>

using namespace std;

int main()
{
    string userString;
    bool check = true;
    
    cin >> userString;
    
    for (int counter = 0; counter < 30; counter ++)
    {
        if (isalnum(userString[counter]) != true)
        {
            break;
        }
        
        if (userString[counter] != 'I' && userString[counter] != 'O' && userString[counter] != 'S' && userString[counter] != 'H' && userString[counter] != 'Z' && userString[counter] != 'H' && userString[counter] != 'N')
        {
            check = false;
            break;
        }
    }
    
    if (check == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
