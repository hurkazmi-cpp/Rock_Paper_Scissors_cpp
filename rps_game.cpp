#include<iostream>
#include<cstdlib> // for srand() and rand()
#include<ctime> // for time()

using namespace std;

int main()
{
    // Generate random numbers
    srand(time(0)); 

    // Take input from the user
    int userChoice;
    cout << " --- Rock Paper Scissors game --- " << endl;
    cout << "Enter your choice (1 for Rock, 2 for Paper and 3 for Scissors): " << endl;
    cin >> userChoice;

    // Generate computer's choice
    int computerChoice = rand() % 3 + 1; // Range of 1-3

    // Display choices
    string choices[] = {"", "Rock", "Paper", "Scissors"};
    cout << " You chose: " << choices[userChoice] << endl;
    cout<< " Computer chose: " << choices[computerChoice] << endl;

    // Determine winner
    if(userChoice == computerChoice)
    {
        cout << " It's a tie !! " << endl;
    }
    else if((userChoice == 1 && computerChoice == 3) || (userChoice == 2 && computerChoice == 1) || (userChoice == 3 && computerChoice == 2))
    {
        cout << " You Win !! " << endl;
    }
    else
    {
        cout << " Computer Wins !! " << endl;
    }
    
    return 0;
}