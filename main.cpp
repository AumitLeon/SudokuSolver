#include <iostream>
#include <fstream>
#include "SudokuBoard.h"
#include<string>
using namespace std;

int main()
{
    cout << "------------------------------------------" << endl;
    cout << "| Sudoku Solver -- Written by Aumit Leon |" << endl;
    cout << "------------------------------------------" << endl;

    cout << endl;
    cout << endl;

    fstream board__ ("board.txt");
    string inputs;
    int i = 0;
    SudokuBoard sudoku_board;

    while(getline(board__, inputs))
    {
        for (int m = 0; m < sudoku_board.getWidth(); m++)
            {
                if (inputs[m] != '0')
                {
                    sudoku_board.input(i, m, inputs[m]);
                }
                else
                {
                    sudoku_board.input(i, m, ' ');
                }
            }
        i++;
    }
sudoku_board.displayBoard();
}
