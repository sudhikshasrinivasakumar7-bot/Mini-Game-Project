#include <iostream>
using namespace std;

char board[3][3];
char currentPlayer;


void initializeBoard() {
    char ch = '1';

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            board[i][j] = ch++;
        }
    }

    currentPlayer = 'X';
}
void displayBoard() {
    cout << "\n";

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << " " << board[i][j] << " ";

            if(j < 2)
                cout << "|";
        }

        cout << "\n";

        if(i < 2)
            cout << "---|---|---\n";
    }

    cout << "\n";
}


bool makeMove(int choice) {
    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;

    if(board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = currentPlayer;
        return true;
    }

    return false;
}


bool checkWinner() {

    
    for(int i = 0; i < 3; i++) {
        if(board[i][0] == board[i][1] &&
           board[i][1] == board[i][2])
            return true;
    }

    
    for(int i = 0; i < 3; i++) {
        if(board[0][i] == board[1][i] &&
           board[1][i] == board[2][i])
            return true;
    }

    
    if(board[0][0] == board[1][1] &&
       board[1][1] == board[2][2])
        return true;

    if(board[0][2] == board[1][1] &&
       board[1][1] == board[2][0])
        return true;

    return false;
}


bool checkDraw() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(board[i][j] != 'X' && board[i][j] != 'O')
                return false;
        }
    }

    return true;
}


void switchPlayer() {
    if(currentPlayer == 'X')
        currentPlayer = 'O';
    else
        currentPlayer = 'X';
}

int main() {

    char playAgain;

    do {
        initializeBoard();

        bool gameOver = false;

        while(!gameOver) {

            displayBoard();

            int choice;

            cout << "Player " << currentPlayer
                 << ", enter position (1-9): ";
            cin >> choice;

            
            if(choice < 1 || choice > 9) {
                cout << "Invalid position! Try again.\n";
                continue;
            }

            if(!makeMove(choice)) {
                cout << "Position already taken! Try again.\n";
                continue;
            }

            
            if(checkWinner()) {
                displayBoard();
                cout << "Player " << currentPlayer
                     << " wins!\n";
                gameOver = true;
            }

            
            else if(checkDraw()) {
                displayBoard();
                cout << "Game Draw!\n";
                gameOver = true;
            }

            else {
                switchPlayer();
            }
        }

        cout << "\nPlay again? (y/n): ";
        cin >> playAgain;

    } while(playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!\n";

    return 0;
}
