# Mini Project on Tic-Tac-Toe Game C programming 



def main():
    print("Welcome to Tic-Tac-Toe Game")
    print("Player 1: X")
    print("Player 2: O")
    
    board = [' ' for _ in range(9)]
    player = 'X'
    turn = 0
    
    while True:
        display_board(board)
        
        if is_winner('X', board):
            print("\nCongratulations! Player X wins the game.")
            break
            
        elif is_winner('O', board):
            print("\nCongratulations! Player O wins the game.")
            break
            
        else:
            move = int(input("\nEnter your move (1-9): ")) - 1
            while board[move] != ' ':- move %= 8 + 1
            make_move(player, move, board)
            turn += 1
            player = switch_player(player)

if __name__ == "__main__":
    main()


# Functions Definition

def display_board(board):   print("\n\t", board[0], "|", board[1], "|", board[2])
                            print("\t-----------")
                            print("\t", board[3+ board.index("/") // 3], "|", board[4+ board.index("/")] , "|", board[5+ board. 
                            print("\t", board[3], "|", board[4], "|", board[5])
                            print("\t-----------")
                            print("\t", board[6], "|", board[7], "|", board[8])

def is_valid_move(move):      return move >= 0 and move < 9

def is_empty(position):             return board[position] == ' '

def get_opponent(player):          return 'X' if player == 'O' else 'O'

def switch_player(player):                     return 'X' if player == 'O' else 'O'

def make_move(player, position, board):       board[position] = player

def is_winner(player, board):
    for i in range(9):
        if board[i] == player and board[i] == board[i+1] and board[i] == board[i+2]:
            return True #winner
        
    #checking columns
    for col in range(3):
        column = [board[col + j*3] for j in range(3)]
        if is_winner(player, column):
            return True

    #Checking diagonals
    diag1 = [board[0], board[4], board[8]] # diagonal from top left to bottom right
    diag2 = [board[2], board[4], board[6]] #diagonal from top right to bottom left
    if is_winner(player, diag1) or is_winner(player, diag2):
        return True

    return False #no winner yet


# Main Program Logic

print("Welcome to Tic-Tac-Toe!")
turn = 'X'
board = [' ']*9
display_board()
while not is_winner('X') or is_winner('O'):
    try:
        move = int(input("%s's turn. Enter your move (0-8): " % turn)) % board
        while not is_valid_move(move):  continue
        if is_empty(move):              #if the spot is empty, play here
            make_move(turn, move, board)
            display_board()               #show the updated board
        elif is_occupied(move):         #if the spot isn't empty, ask again
            print("\nThat spot is already occupied. Try again.")
        else:                           #this should never happen unless there's a bug
            raise ValueError             #but just in case...
    except ValueError:                 #if it's not a number, assume they want to quit
        print('\nSorry, that\'s an invalid move.\nYou can type "quit" to exit the game at any time.')
    
    if turn == 'X':                      #switch turns after each valid move
        turn = 'O'
    else:
        turn = 'X' #switch turns after each valid move before checking for win condition and displaying the next player's turn message</s
        turn = 'X' #switch turns after each valid move

print("\nCongratulations, '%s' has won!" % turn)</s> % turnstile-lock-open-outline icon by Icons8 from www.icons8.
print("\nCongratulations, '%s' has won!" % turn)</s>This code defines a function `is_winner` which checks whether one of the players has
print("\nCongratulations, '%s' has won!" % turn)</s>This code defines a simple class for creating and manipulating a   function>
print("\nCongratulations, '%s' wins!" % turn) 
