#include "SudokuBoard.h"
#include <iostream>
using namespace std;

SudokuBoard::SudokuBoard()
{
    for (int i = 0; i < height; i++)
    {
        for (int m = 0; m < width; m++)
        {
            sudoku_board[i][m] = (i+1)*(m+1);
        }
    }
}

SudokuBoard::~SudokuBoard()
{
    //dtor
}

void SudokuBoard::displayBoard()
{
    for (int f = 0; f < 9; f++)
    {
        for (int h = 0; h < 9; h++)
        {
            if (sudoku_board[f][h] <= 9)
                cout << sudoku_board[f][h] << "  | ";
            else cout << sudoku_board[f][h] << " | ";
        }
        cout << endl;
    }
}
