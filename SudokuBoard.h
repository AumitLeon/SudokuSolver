#ifndef SUDOKUBOARD_H
#define SUDOKUBOARD_H

class SudokuBoard
{
    public:
        SudokuBoard();
        /** Default destructor */
        virtual ~SudokuBoard();
        void displayBoard();

    private:
        static const int height = 9;
        static const int width = 9;
        int sudoku_board[height][width];
};

#endif // SUDOKUBOARD_H
