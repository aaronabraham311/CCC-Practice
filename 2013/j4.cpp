#include <iostream>

using namespace std;

void arrayReOrg(int array[], int size);
int choreNumber (int array[], int size, int total);

int main()
{
    int totalMins;
    int numberChores;
    
    cin >> totalMins;
    cin >> numberChores;
    
    int chores[numberChores];
    
    for (int counter = 0; counter < numberChores; counter ++)
    {
        cin >> chores[counter];
    }
    
    arrayReOrg(chores, numberChores);
    
    cout << choreNumber (chores, numberChores, totalMins) << endl;
    
    return 0;
}

void arrayReOrg(int array[], int size)
{
    for (int counter1 = 0; counter1 <= size; counter1 ++)
    {
        for (int counter2 = 0; counter2 < size - 1; counter2 ++)
        {
            int temporary = array[counter2 + 1];
            
            if (temporary < array[counter2])
            {
                array[counter2 + 1] = array[counter2];
                array[counter2] = temporary;
            }
        }
    }
    
    return;
}

int choreNumber (int array[], int size, int total)
{
    int choresDone = 0;
    int choresTime = 0;
    
    for (int counter = 0; choresTime + array[counter] <= total; counter ++)
    {
        choresDone ++;
        choresTime += array[counter];
    }
    
    return choresDone;
}
