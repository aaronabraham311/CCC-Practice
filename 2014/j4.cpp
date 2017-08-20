#include <iostream>

using namespace std;

void arrayInput(int array[], int size);
void arrayTakeOut (int array[], int size, int userMultiple);
void arrayReOrg (int array[], int size);

int main()
{
    int guestNumber;
    int rounds;
    int multiple;
    
    cin >> guestNumber;
    
    int guestArray[guestNumber];
    arrayInput(guestArray, guestNumber);
    
    cin >> rounds;
    
    for (int counter = 0; counter < rounds; counter ++)
    {
        cin >> multiple;
        arrayTakeOut(guestArray, guestNumber, multiple);
    }
    
    for (int counter = 0; counter < guestNumber; counter ++)
    {
        if (guestArray[counter] != 0)
        {
            cout << guestArray[counter] << endl;
        }
    }
    return 0;
}

void arrayInput(int array[], int size)
{
    for (int counter = 0; counter < size; counter ++)
    {
        array[counter] = counter + 1;
    }
    
    return;
}

void arrayTakeOut (int array[], int size, int userMultiple)
{
    for (int counter = 0; counter < size; counter ++)
    {
        if ((counter + 1) % userMultiple == 0)
            array[counter] = 0;
    }
    
    arrayReOrg (array, size);
    
    return;
}

void arrayReOrg (int array[], int size)
{
    int temporary;
    
    for (int counter1 = 0; counter1 <= size; counter1 ++)
    {
        for (int counter2 = 0; counter2 < size; counter2 ++)
        {
            if (counter2 < size - 1)
            {
                if (array[counter2] == 0 && array[counter2 + 1] != 0)
                {
                    temporary = array[counter2 + 1];
                    array[counter2 + 1] = array[counter2];
                    array[counter2] = temporary;
                }
            }
        }
    }
}
