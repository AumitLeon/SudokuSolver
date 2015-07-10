#include "SudokuBoard.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

SudokuBoard::SudokuBoard()
{
    //Testing if filling the matrix functions properly.
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
    cout << "----------------------------------------------" << endl;
    //Traverse through every position in the matrix.
    for (int f = 0; f < 9; f++)
    {
        for (int h = 0; h < 9; h++)
        {
            //Account for double digit numbers, for different game styles other than Sudoku.
            if (h == 2 || h == 5)
                cout << " " << sudoku_board[f][h] << " || ";
            else
                cout << " " << sudoku_board[f][h] << " | ";
        }
        cout << endl;
        //Aesthetics.
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
    srand(time(0));                                 //Generate random numbers.

    //Traverse each position in the matrix.
    for (int i = 0; i < height; i++)
    {
        for (int m = 0; m < width; m++)
        {
            sudoku_board[i][m] = 1+rand()%9;       //Fill randomly with numbers 1-9.
        }
    }
}

 bool SudokuBoard::input(int column, int row, char num)
 {
     sudoku_board[column][row] = num;               //Input into correct position in matrix.
     return true;
 }

 int SudokuBoard::getWidth()
 {
     return width;
 }

 int SudokuBoard::getHeight()
 {
     return height;
 }
