#include <iostream>

using namespace std;

void arrayUpdate (int array[], int size);
void arrayReOrg (int array[], int size);
int maximumValue (int a, int b);

int main()
{
    int citizenNumber;
    int decision;
    int maxSpeed = 0;
    int minSpeed = 0;
    
    cin >> decision;
    cin >> citizenNumber;
    
    int dSpeed[citizenNumber];
    int pSpeed[citizenNumber];
    
    arrayUpdate (dSpeed, citizenNumber);
    arrayUpdate (pSpeed, citizenNumber);
    arrayReOrg (dSpeed, citizenNumber);
    arrayReOrg (pSpeed, citizenNumber);
    
    if (decision == 1)
    {
        for (int change = 0; change < citizenNumber; change ++)
        {
            minSpeed += maximumValue (dSpeed[change], pSpeed[change]);
        }
        
        cout << minSpeed << endl;
    }
    else if (decision == 2)
    {
        for (int change = 0; change < citizenNumber; change ++)
        {
            int a = dSpeed[change];
            int b = pSpeed[citizenNumber - change - 1];
            maxSpeed += maximumValue (a, b);
        }
        
        cout << maxSpeed << endl;
    }
    
    return 0;
}

void arrayUpdate (int array[], int size)
{
    for (int index = 0; index < size; index ++)
    {
        cin >> array[index];
    }
}

void arrayReOrg (int array[], int size)
{
    int temporary;
    
    for (int index1 = 0; index1 < size - 1; index1 ++)
    {
        bool swapped = false;
        
        for (int index2 = 0; index2 < size - 1; index2 ++)
        {
            if (array[index2] > array[index2 + 1])
            {
                temporary = array[index2];
                array[index2] = array[index2 + 1];
                array[index2 + 1] = temporary;
                
                swapped = true;
            }
        }
        
        if (swapped == false)
        {
            break;
        }
    }
}

int maximumValue (int a, int b)
{
    if (a > b || a == b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
