board = [[1, 2, 3],
         [4, 5, 6],
         [7, 8, 9]]
user = "O"
computer = "X"

def display_board():
    global board
    print("+-------+-------+-------+")
    print("|       |       |       |")
    print(f"|   {board[0][0]}   |   {board[0][1]}   |   {board[0][2]}   |")
    print("|       |       |       |")
    print("+-------+-------+-------+")
    # first row

    print("|       |       |       |")
    print(f"|   {board[1][0]}   |   {board[1][1]}   |   {board[1][2]}   |")
    print("|       |       |       |")
    print("+-------+-------+-------+")
    # second row

    print("|       |       |       |")
    print(f"|   {board[2][0]}   |   {board[2][1]}   |   {board[2][2]}   |")
    print("|       |       |       |")
    print("+-------+-------+-------+")

def user_move():
    global board
    move_on = False
    while move_on == False:
        inp = int(input("Enter your move: "))
        if inp not in [1, 2, 3, 4, 5, 6, 7, 8, 9]:
            print("oops!")
            print("again")
        else:
            free_columns = [k[1] for k in make_list_of_free_fields()]
            for rows in board:
                if inp in rows and inp in free_columns:
                    position = rows.index(inp)
                    board[board.index(rows)][position] = user
                    move_on = True
                    break
                elif inp not in rows and inp not in free_columns:
                    print(f"free spaces {make_list_of_free_fields()}")
                    print("again")
                    break

def make_list_of_free_fields():
    global board
    # The function browses the board and builds a list of all the free squares;
    free_squares = list()
    for rows in board:
        bandwidth = [1, 2, 3, 4, 5, 6, 7, 8, 9]
        # the list consists of tuples, while each tuple is a pair of row and column numbers.
        free_squares += [(board.index(rows), columns) for columns in rows if columns in bandwidth]
    return free_squares

def draw_move():
    global board
    import random
    free_columns = [k[1] for k in make_list_of_free_fields()]
    random_columns = random.choice(free_columns)
    equivalent_row_of_random_column = [board.index(rows) for rows in board if random_columns in rows]
    row = board[equivalent_row_of_random_column[0]]
    board[board.index(row)][row.index(random_columns)] = computer

def victory_for(board):
    if len(make_list_of_free_fields())<1:
        print("Draw!\n Game over")
        return False
    # horizontal check
    elif board[0][0] == board[0][1] == board[0][2]:
        if board[0][0] == computer:
            print("computer wins")
        else:
            print("You win!")
        return False
    elif board[1][0] == board[1][1] == board[1][2]:
        if board[1][0] == computer:
            print("computer wins")
        else:
            print("You win!")
        return False
    elif board[2][0] == board[2][1] == board[2][2]:
        if board[2][0] == computer:
            print("computer wins")
        else:
            print("You win!")
        return False
    # vertical check
    elif board[0][0] == board[1][0] == board[2][0]:
        if board[0][0] == computer:
            print("computer wins")
        else:
            print("You win!")
        return False
    elif board[0][1] == board[1][1] == board[2][1]:
        if board[0][1] == computer:
            print("computer wins")
        else:
            print("You win!")
        return False
    elif board[0][2] == board[1][2] == board[2][2]:
        if board[0][2] == computer:
            print("computer wins")
        else:
            print("You win!")
        return False
    # diagonal
    elif board[0][0] == board[1][1] == board[2][2]:
        if board[0][0] == computer:
            print("computer wins")
        else:
            print("You win!")
        return False

    elif board[0][2] == board[1][1] == board[2][0]:
        if board[0][2] == computer:
            print("computer wins")
        else:
            print("You win!")
        return False

    else:
        return True
runtime = 0
game_play = True
while game_play:

    if runtime == 0:
        board[1][1] = computer
        display_board()
    else:
        user_move()
        game_play = victory_for(board)
        if game_play == False:
            break
        draw_move()
        game_play = victory_for(board)
        if game_play == False:
            break
        display_board()
    runtime = 2
