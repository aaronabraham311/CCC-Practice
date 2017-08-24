#include <iostream>

using namespace std;

int rowSum (int array[4][4], int row);
int columnSum (int array[4][4], int column);

int main ()
{
    int array [4][4];
    
    // Input
    for (int row = 0; row < 4; row ++)
    {
        for (int column = 0; column < 4; column ++)
            cin >> array[row][column];
    }
    
    int row1 = rowSum (array, 0);
    int row2 = rowSum (array, 1);
    int row3 = rowSum (array, 2);
    int row4 = rowSum (array, 3);
    int column1 = columnSum (array, 0);
    int column2 = columnSum (array, 1);
    int column3 = columnSum (array, 2);
    int column4 = columnSum (array, 3);
    
    if (row1 == row2 && row1 == row3 && row3 == row4 && row1 == column1 && column1 == column2 && column1 == column3 && column3 == column4)
    {
        cout << "Magic" << endl;
    }
    else
    {
        cout << "Not magic" << endl;
    }
    
    return 0;
}

int rowSum (int array[4][4], int row)
{
    int sum = 0;
    
    for (int column = 0; column < 4; column ++)
    {
        sum += array[row][column];
    }
    
    return sum;
}

int columnSum (int array[4][4], int column)
{
    int sum = 0;
    
    for (int row = 0; row < 4; row ++)
    {
        sum += array[row][column];
    }
    
    return sum;
}
