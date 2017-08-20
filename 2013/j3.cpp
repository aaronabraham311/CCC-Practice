#include <iostream>
#include <string>

using namespace std;

int main()
{
    int year;
    string yearCharacters;
    bool checked = true;
    
    cin >> yearCharacters;
    
    year = stoi(yearCharacters);
    year ++;
    yearCharacters = to_string(year);
    
    while (true)
    {
        for (int counter = 0; yearCharacters[counter] != '\0'; counter ++)
        {
            char counterCheck = yearCharacters[counter];
            
            for (int counter1 = counter + 1; yearCharacters[counter1] != '\0'; counter1 ++)
            {
                if (yearCharacters[counter1] == counterCheck)
                {
                    checked = false;
                    break;
                }
            }
        }
        
        if (checked == true)
        {
            break;
        }
        else
        {
            year ++;
            yearCharacters = to_string(year);
            checked = true;
        }
    }
    
    cout << year << endl;
    
    return 0;
}
