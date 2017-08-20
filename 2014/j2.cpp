#include <iostream>

using namespace std;

int main()
{
    int totalVotes;
    int voteA;
    int voteB;
    
    cin >> totalVotes;
    
    char votes[totalVotes];
    
    cin >> votes;
    
    for (int counter = 0; counter < totalVotes; counter ++)
    {
        if (votes[counter] == 'A')
        {
            voteA++;
        }
        else
        {
            voteB++;
        }
    }
    
    if (voteA > voteB)
    {
        cout << 'A' << endl;
    }
    else if (voteB > voteA)
    {
        cout << 'B' << endl;
    }
    else
    {
        cout << "Tie" << endl;
    }
}
