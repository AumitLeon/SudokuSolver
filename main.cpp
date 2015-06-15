#include <iostream>
#include "SudokuBoard.h"
using namespace std;

int main()
{
    cout << "------------------------------------------" << endl;
    cout << "| Sudoku Solver -- Written by Aumit Leon |" << endl;
    cout << "------------------------------------------" << endl;

    cout << endl;
    cout << endl;

    SudokuBoard board;
    board.displayBoard();
}
