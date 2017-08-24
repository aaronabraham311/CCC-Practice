#include <iostream>
#include <string>

using namespace std;

bool palindromeCheck (string input);

int main ()
{
    char firstChar, lastChar;
    bool palindromeTrue = false;
    int biggestCount = 0;
    int palindromeCount = 0;
    
    string input;
    
    cin >> input;
    
    int length = input.length();
    
    for (int index1 = 0; index1 < length; index1 ++)
    {
        firstChar = input.at(index1);
        
        for (int index2 = index1 + 1; index2 < length; index2 ++)
        {
            lastChar = input.at(index2);
            
            if (firstChar == lastChar)
            {
                string input1 = input.substr(index1, index2 - index1 + 1);
                
                palindromeTrue = palindromeCheck (input1);
                
                if (palindromeTrue == true)
                {
                    palindromeCount = index2 - index1 + 1;
                    
                    if (palindromeCount > biggestCount)
                    {
                        biggestCount = palindromeCount;
                    }
                }
            }
        }
    }
    
    cout << biggestCount << endl;
    
    return 0;
}

bool palindromeCheck (string input)
{
    bool palindrome = true;
    char firstCharachter, lastCharachter;
    
    int stringLength = input.length();
    int lastCharIndex = stringLength - 1;
    
    for (int index = 0; index <= lastCharIndex; index++)
    {
        firstCharachter = input.at(index);
        lastCharachter = input.at(lastCharIndex);
        
        if (firstCharachter == lastCharachter)
        {
            lastCharIndex --;
        }
        else
        {
            palindrome = false;
            break;
        }
    }
    
    return palindrome;
}
