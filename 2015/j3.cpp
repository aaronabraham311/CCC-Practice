#include <iostream>
#include <string>

using namespace std;

int wordLength (string word);
int charPlacement (char letter, char letters[26]);
char nextConsonant (char letter, char letters[26]);

int main()
{
    char letters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    
    string word;
    cin >> word;
    
    int length = wordLength(word);
    int differenceA = 0;
    int differenceE = 0;
    int differenceI = 0;
    int differenceO = 0;
    int differenceU = 0;
    
    for (int index = 0; index < length; index ++)
    {
        char letter = word.at(index);
        int placement = charPlacement(letter, letters);
        
        if (letter != 'a' && letter != 'e' && letter!= 'i' && letter != 'o' && letter != 'u')
        {
            if (placement > 0 && placement < 4)
            {
                differenceA = placement;
                differenceE = 4 - placement;
                
                if (differenceA > differenceE)
                {
                    word.insert(index + 1, 1, 'e');
                }
                else if (differenceA < differenceE)
                {
                    word.insert(index + 1, 1, 'a');
                }
                else
                {
                    word.insert(index + 1, 1, 'a');
                }
            }
            else if (placement > 4 && placement < 8)
            {
                differenceE = placement - 4;
                differenceI = 8 - placement;
                
                if (differenceE > differenceI)
                {
                    word.insert(index + 1, 1, 'i');
                }
                else if (differenceE < differenceI)
                {
                    word.insert(index + 1, 1, 'e');
                }
                else
                {
                    word.insert(index + 1, 1, 'e');
                }
            }
            else if (placement > 8 && placement < 14)
            {
                differenceI = placement - 8;
                differenceO = 14 - placement;
                
                if (differenceI > differenceO)
                {
                    word.insert(index + 1, 1, 'o');
                }
                else if (differenceI < differenceO)
                {
                    word.insert(index + 1, 1, 'i');
                }
                else
                {
                    word.insert(index + 1, 1, 'i');
                }
            }
            else if (placement > 14 && placement < 20)
            {
                differenceO = placement - 13;
                differenceU = 20 - placement;
            
                if (differenceO > differenceU)
                {
                    word.insert(index + 1, 1, 'u');
                }
                else if (differenceO < differenceU)
                {
                    word.insert(index + 1, 1, 'o');
                }
                else
                {
                    word.insert(index + 1, 1, 'o');
                }
            }
            else if (placement > 20)
            {
                differenceU = placement - 20;
                word.insert(index + 1, 1, 'u');
            }
            
            char nextC = nextConsonant(letter, letters);
            word.insert (index + 2, 1, nextC);
            
            index += 2;
        }
    }
    
    cout << word << endl;
    
    return 0;
}

int wordLength (string word)
{
    int length = word.length();
    int changeLength = length;
    
    for (int index = 0; index < length; index ++)
    {
        char letter = word.at(index);
        
        if (letter != 'a' && letter != 'e' && letter!= 'i' && letter != 'o' && letter != 'u')
        {
            changeLength += 2;
        }
    }
    
    return changeLength;
}

int charPlacement (char letter, char letters[26])
{
    int placement;
    
    for (int index = 0; index < 26; index ++)
    {
        if (letters[index] == letter)
        {
            placement = index;
            break;
        }
    }
    
    return placement;
}

char nextConsonant (char letter, char letters[26])
{
    int placement = charPlacement (letter, letters);
    char letterTest;
    
    if (placement + 1 >= 26)
    {
        return 'z';
    }
    
    for (int index = placement + 1; index < 26; index ++)
    {
        letterTest = letters[index];
        
        if (letterTest != 'a' && letterTest != 'e' && letterTest != 'i' && letterTest != 'o' && letterTest != 'u')
        {
            break;
        }
    }
    
    return letterTest;
}
