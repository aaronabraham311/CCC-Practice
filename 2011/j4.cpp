#include <iostream>

using namespace std;

bool makePlan (char direction, int distance, bool array[200][400], int coordinate[1]);

int main()
{
    bool wellPlan[200][400];
    int endCoordinate[2] = {0, 100};
    char userDirection;
    int userDistance;
    bool check = false;
    
    for (int i = 0; i < 200; i ++)
    {
        for (int j = 0; j < 400; j ++)
        {
            wellPlan[i][j] = false;
        }
    }
    
    // Initializing well plan
    if (makePlan ('d', 3, wellPlan, endCoordinate) == true)
    {}
    if (makePlan ('r', 3, wellPlan, endCoordinate) == true)
    {}
    if (makePlan ('d', 3, wellPlan, endCoordinate) == true)
    {}
    if (makePlan ('r', 2, wellPlan, endCoordinate) == true)
    {}
    if (makePlan ('u', 2, wellPlan, endCoordinate) == true)
    {}
    if (makePlan ('r', 2, wellPlan, endCoordinate) == true)
    {}
    if (makePlan ('d', 4, wellPlan, endCoordinate) == true)
    {}
    if (makePlan ('l', 8, wellPlan, endCoordinate) == true)
    {}
    if (makePlan ('u', 2, wellPlan, endCoordinate) == true)
    {}
    
    // Getting user coordinates;
    
    cout << "Row: " << endCoordinate[0] << endl;
    cout << "column: " << endCoordinate[1] << endl;
    
    /*
    while (check == false)
    {
        cin >> userDirection >> userDistance;
        
        if (userDirection == 'q')
        {
            break;
        }
        
        else
        {
            
            if (makePlan(userDirection, userDistance, wellPlan, endCoordinate) == false)
            {
                cout << endCoordinate[0] * (-1) << endCoordinate[0] - 100 << "safe";
            }
            else
            {
                cout << endCoordinate[0] * (-1) << endCoordinate[0] - 100 << "DANGER";
                check = true;
            }
        }
    }*/
    
    return 0;
}

bool makePlan (char direction, int distance, bool array[200][400], int coordinate[1])
{
    bool check = false;
    
    if (direction == 'u')
    {
        int i;
        
        for (i = 1; i <= distance; i ++)
        {
            if (array[coordinate[0] - i][coordinate[1]] == true)
            {
                check = true;
                break;
            }
            
            array[coordinate[0] - i][coordinate[1]] = true;
        }
        
        coordinate[0] -= i;
    }
    else if (direction == 'd')
    {
        int i;
        
        for (i = 1; i <= distance; i ++)
        {
            if (array[coordinate[0] + i][coordinate[1]] == true)
            {
                check = true;
                break;
            }
            
            array[coordinate[0] + i][coordinate[1]] = true;
        }
        
        coordinate[0] += i;
    }
    else if (direction == 'l')
    {
        int i;
        
        for (i = 1; i <= distance; i ++)
        {
            if (array[coordinate[0]][coordinate[1] - i] == true)
            {
                check = true;
                break;
            }
            
            array[coordinate[0]][coordinate[1] - i] = true;
        }
        
        coordinate[1] -= i;
    }
    else if (direction == 'r')
    {
        int i;
        
        for (i = 1; i <= distance; i ++)
        {
            if (array[coordinate[0]][coordinate[1] + i] == true)
            {
                check = true;
                break;
            }
            
            array[coordinate[0]][coordinate[1] + i] = true;
        }
        
        coordinate[1] += i;
    }
    
    return check;
}
