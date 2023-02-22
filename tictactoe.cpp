#include <iostream>
#include <vector>

using namespace std;

class TicTacToe
{
private:
    vector<vector<char>> board;

public:
    TicTacToe()
    {
        board = {{'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'}};
    }

    void printBoard()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }

    bool checkWin(char player)
    {
        // Check rows
        for (int i = 0; i < 3; i++)
        {
            if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            {
                return true;
            }
        }
        // Check columns
        for (int j = 0; j < 3; j++)
        {
            if (board[0][j] == player && board[1][j] == player && board[2][j] == player)
            {
                return true;
            }
        }
        // Check diagonals
        if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        {
            return true;
        }
        if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        {
            return true;
        }
        return false;
    }

    bool isBoardFull()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] == '-')
                {
                    return false;
                }
            }
        }
        return true;
    }

    bool makeMove(char player, int row, int col)
    {
        if (row < 0 || row > 2 || col < 0 || col > 2)
        {
            return false;
        }
        if (board[row][col] != '-')
        {
            return false;
        }
        board[row][col] = player;
        return true;
    }
};

int main()
{
    TicTacToe game;
    char currentPlayer = 'X';
    int row, col;

    while (true)
    {
        game.printBoard();

        // Get move from current player
        cout << "Player " << currentPlayer << ", enter row and column (0-2): ";
        cin >> row >> col;

        // Make move and check if it's valid
        if (!game.makeMove(currentPlayer, row, col))
        {
            cout << "Invalid move, try again." << endl;
            continue;
        }

        // Check if current player wins or the board is full
        if (game.checkWin(currentPlayer))
        {
            game.printBoard();
            cout << "Player " << currentPlayer << " wins!" << endl;
            break;
        }
        else if (game.isBoardFull())
        {
            game.printBoard();
            cout << "Tie game!" << endl;
            break;
        }

        // Switch to the other player
        currentPlayer = currentPlayer == 'X' ? 'O' : 'X';
    }

    return 0;
}
