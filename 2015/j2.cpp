#include <iostream>
#include <string>

using namespace std;

int happyCounter (string input);
int sadCounter (string input);

int main()
{
    string input;
    int hCounter, sCounter;
    
    getline(cin, input);
    
    hCounter = happyCounter (input);
    sCounter = sadCounter (input);
    
    if (hCounter == 0 && sCounter == 0)
    {
        cout << "none" << endl;
    }
    else
    {
        if (hCounter > sCounter)
        {
            cout << "happy" << endl;
        }
        else if (hCounter < sCounter)
        {
            cout << "sad" << endl;
        }
        else if (hCounter == sCounter)
        {
            cout << "unsure" << endl;
        }

    }
    
    return 0;

}

int happyCounter (string input)
{
    int length = input.length();
    int counter = 0;
    
    for (int index = 0; index < length - 2; index ++)
    {
        if (input.at(index) == ':')
        {
            if (input.at(index + 1) == '-')
            {
                if (input.at(index + 2) == ')')
                {
                    counter ++;
                }
            }
        }
    }
    
    return counter;
}

int sadCounter (string input)
{
    int length = input.length();
    int counter = 0;
    
    for (int index = 0; index < length - 2; index ++)
    {
        if (input.at(index) == ':')
        {
            if (input.at(index + 1) == '-')
            {
                if (input.at(index + 2) == '(')
                {
                    counter ++;
                }
            }
        }
    }
    
    return counter;
}
