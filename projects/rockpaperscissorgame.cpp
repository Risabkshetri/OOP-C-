#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    
    string choices[] = {"Rock", "Paper", "Scissors"};
    int playerScore = 0, computerScore = 0;
    
    cout << "Welcome to Rock Paper Scissors Game!" << endl;
    
    while (true) {
        cout << "\nEnter your choice (0 for Rock, 1 for Paper, 2 for Scissors, or -1 to quit): ";
        int playerChoice;
        cin >> playerChoice;
        
        if (playerChoice == -1) {
            break;
        }
        
        if (playerChoice < 0 || playerChoice > 2) {
            cout << "Invalid choice. Please try again." << endl;
            continue;
        }
        
        int computerChoice = rand() % 3;
        
        cout << "You chose: " << choices[playerChoice] << endl;
        cout << "Computer chose: " << choices[computerChoice] << endl;
        
        if (playerChoice == computerChoice) {
            cout << "It's a tie!" << endl;
        } else if ((playerChoice == 0 && computerChoice == 2) ||
                   (playerChoice == 1 && computerChoice == 0) ||
                   (playerChoice == 2 && computerChoice == 1)) {
            cout << "You win!" << endl;
            playerScore++;
        } else {
            cout << "Computer wins!" << endl;
            computerScore++;
        }
        
        cout << "Score - You: " << playerScore << ", Computer: " << computerScore << endl;
    }
    
    cout << "\nFinal Score:" << endl;
    cout << "You: " << playerScore << ", Computer: " << computerScore << endl;
    
    if (playerScore > computerScore) {
        cout << "Congratulations! You won the game!" << endl;
    } else if (playerScore < computerScore) {
        cout << "Computer won the game. Better luck next time!" << endl;
    } else {
        cout << "It's a tie game!" << endl;
    }
    
    return 0;
}
