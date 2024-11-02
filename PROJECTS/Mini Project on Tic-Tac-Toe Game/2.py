#include <stdio.h>


void display_board(char board[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        if (i < 2) {
            printf("-----------\n");
        }
    }
}


char check_winner(char board[3][3]) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
            return board[i][0];
        }
    }
    // Check columns
    for (int j = 0; j < 3; j++) {
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ') {
            return board[0][j];
        }
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
        return board[0][2];
    }
    return ' '; // No winner yet
}

// Function to check if the board is full
int is_board_full(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return 0; // Board is not full
            }
        }
    }
    return 1; // Board is full
}

int main() {
    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char current_player = 'X';
    int row, col;

    printf("Welcome to Tic-Tac-Toe Game\n");
    printf("Player 1: X\n");
    printf("Player 2: O\n");

    while (1) {
    
        display_board(board);

        printf("\nPlayer %c's turn (row col): ", current_player);
        scanf("%d %d", &row, &col);

        // Update the board
        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            board[row][col] = current_player;
        } else {
            printf("Invalid move. Try again.\n");
            continue;
        }

        // Check for a winner or a tie
        char winner = check_winner(board);
        if (winner != ' ') {
            display_board(board);
            printf("\nPlayer %c wins!\n", winner);
            break;
        } else if (is_board_full(board)) {
            display_board(board);
            printf("\nThe game is a tie!\n");
            break;
        }

        // Switch player
        current_player = (current_player == 'X') ? 'O' : 'X';
    }

    return 0;
}
