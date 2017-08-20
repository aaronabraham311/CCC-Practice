#include <iostream>
#include <string>
#include <vector>

using namespace std;

void check (vector <string> array1, vector <string> array2, int size);

int main()
{
    int studentNumber;
    
    cin >> studentNumber;
    
    vector <string> studentLine1;
    vector <string> studentLine2;
    
    studentLine1.resize(studentNumber);
    studentLine2.resize(studentNumber);
    
    for (int counter = 0; counter < studentNumber; counter ++)
    {
        cin >> studentLine1[counter];
    }
    
    for (int counter = 0; counter < studentNumber; counter ++)
    {
        cin >> studentLine2[counter];
    }
    
    check (studentLine1, studentLine2, studentNumber);
    
    return 0;
}

void check (vector <string> array1, vector <string> array2, int size)
{
    string name1;
    string name2;
    bool check;
    
    for (int counter1 = 0; counter1 <  size; counter1 ++)
    {
        name1 = array1[counter1];
        name2 = array2[counter1];
        
        if (name1 == name2)
        {
            check = false;
        }
        
        for (int counter2 = 0; counter2 < size; counter2 ++)
        {
            if (array1[counter2] == name2)
            {
                if (array2[counter2] == name1)
                {
                    check = true;
                }
                else
                {
                    check = false;
                }
            }
        }
        
        if (check == false)
        {
            break;
        }
    }
    
    if (check == false)
    {
        cout << "bad" << endl;
    }
    else
    {
        cout << "good" << endl;
    }
    
    return;
}
