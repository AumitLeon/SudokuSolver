#include "SudokuBoard.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

SudokuBoard::SudokuBoard()
{
   /* for (int i = 0; i < height; i++)
    {
        for (int m = 0; m < width; m++)
        {
            sudoku_board[i][m] = (i+1)*(m+1);
        }
    }*/
}

SudokuBoard::~SudokuBoard()
{
    //dtor
}

void SudokuBoard::displayBoard()
{
    fillRandomly();
    cout << "----------------------------------------------" << endl;
    for (int f = 0; f < 9; f++)
    {
        for (int h = 0; h < 9; h++)
        {
            if (h == 2 || h == 5)
                cout << " " << sudoku_board[f][h] << " || ";
            else cout << " " << sudoku_board[f][h] << " | ";
            //else cout << sudoku_board[f][h] << " | ";
        }
        cout << endl;
        if (f == 2 || f == 5)
        {
            cout << "----------------------------------------------" << endl;
            cout << "----------------------------------------------" << endl;
        }
        else cout << "----------------------------------------------" << endl;
    }
}

void SudokuBoard::fillRandomly()
{
    srand(time(0));

    for (int i = 0; i < height; i++)
    {
        for (int m = 0; m < width; m++)
        {
            sudoku_board[i][m] = 1+rand()%9;
        }
    }
}
