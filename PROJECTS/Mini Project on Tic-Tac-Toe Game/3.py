def display_board(board):
    print()
    for i in range(3):
        print(" {} | {} | {}\n-----------\n".format(board[i][0], board[i][1], board[i][2]))

def check_winner(board):
    # Check rows
    for i in range(3):
        if board[i][0] == board[i][1] == board[i][2] and board[i][0] != ' ':
            return board[i][0]

    # Check columns
    for j in range(3):
        if board[0][j] == board[1][j] == board[2][j] and board[0][j] != ' ':
            return board[0][j]

    # Check diagonals
    if board[0][0] == board[1][1] == board[2][2] and board[0][0] != ' ':
        return board[0][0]

    if board[0][2] == board[1][1] == board[2][0] and board[0][2] != ' ':
        return board[0][2]

    return ' ' # No winner yet

def is_board_full(board):
    for i in range(3):
        for j in range(3):
            if board[i][j] == ' ':
                return False # Board is not full
    return True # Board is full

def main():
    board = [[' ' for _ in range(3)] for _ in range(3)]
    current_player = 'X'

    print("Welcome to Tic-Tac-Toe Game")
    print("Player 1: X")
    print("Player 2: O\n")

    while True:
        display_board(board)

        print("Player {}'s turn (row col): ".format(current_player))
        row, col = map(int, input().split())

        # Update the board
        if 0 <= row < 3Here's the complete Python code for the Tic-Tac-Toe game:

```python
def display_board(board):
    print()
    for i in range(3):
        print(" {} | {} | {}\n-----------\n".format(board[i][0], board[i][1], board[i][2]))

def check_winner(board):
    # Check rows
    for i in range(3):
        if board[i][0] == board[i][1] == board[i][2] and board[i][0] != ' ':
            return board[i][0]

    # Check columns
    for j in range(3):
        if board[0][j] == board[1][j] == board[2][j] and board[0][j] != ' ':
            return board[0][j]

    # Check diagonals
    if board[0][0] == board[1][1] == board[2][2] and board[0][0] != ' ':
        return board[0][0]

    if board[0][2] == board[1][1] == board[2][0] and board[0][2] != ' ':
        return board[0][2]

    return ' ' # No winner yet

def is_board_full(board):
    for i in range(3):
        for j in range(3):
            if board[i][j] == ' ':
                return False # Board is not full
    return True # Board is full

def main():
    board = [[' ' for _ in range(3)] for _ in range(3)]
    current_player = 'X'

    print("Welcome to Tic-Tac-Toe Game")
    print("Player 1: X")
    print("Player 2: O\n")

    while True:
        display_board(board)

        print("Player {}'s turn (row col): ".format(current_player))
        row, col = map(int, input().split())

        # Update the board
        if 0 <= row < 3 and The code you provided has a small error in the `is_board_full` function. The condition `0 <= row < 3` should be `0 <= row <= 2` because the row indices should be between 0 and 2 (inclusive). Here's the corrected code:

```python
def is_board_full(board):
    for i in range(3):
        for j in range(3):
            if board[i][j] == ' ':
                return False # Board is not full
    return True # Board is full