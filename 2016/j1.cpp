#include <iostream>

using namespace std;

int main ()
{
    char game1, game2, game3, game4, game5, game6;
    int counter = 0;
    
    cin >> game1;
    cin >> game2;
    cin >> game3;
    cin >> game4;
    cin >> game5;
    cin >> game6;
    
    if (game1 == 'W')
        counter ++;
    if (game2 == 'W')
        counter ++;
    if (game3 == 'W')
        counter ++;
    if (game4 == 'W')
        counter ++;
    if (game5 == 'W')
        counter ++;
    if (game6 == 'W')
        counter ++;
    
    if (counter == 0)
        cout << -1 << endl;
    else if (counter == 1 || counter == 2)
        cout << 3 << endl;
    else if (counter == 3 || counter == 4)
        cout << 2 << endl;
    else if (counter == 5 || counter == 6)
        cout << 1 << endl;
    
    return 0;
}
