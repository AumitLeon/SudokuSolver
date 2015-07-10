#include <iostream>
#include <fstream>
#include "SudokuBoard.h"
#include<string>
#include<ctime>
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

    while(getline(board__, inputs))                         //Iterate through the file, line by line.
    {
        for (int m = 0; m < sudoku_board.getWidth(); m++)
            {
                if (inputs[m] != '0')
                {
                    sudoku_board.input(i, m, inputs[m]);    //Enter the initial positions onto the board.
                }
                else
                {
                    sudoku_board.input(i, m, ' ');          // 0's indicate spaces.
                }
            }
        i++;
    }

    //Method to test how long it takes to solve a particular puzzle.
    int start_s=clock();
	// the code you wish to time goes here
	sudoku_board.displayBoard();
	int stop_s=clock();
    //Print out the time it takes to print the board.
    //Will  be used to print out how long it takes to solve the puzzle.
    cout << "Time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1 << endl;


}
