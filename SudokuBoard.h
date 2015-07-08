#ifndef SUDOKUBOARD_H
#define SUDOKUBOARD_H

class SudokuBoard
{
    public:
        SudokuBoard();
        /** Default destructor */
        virtual ~SudokuBoard();
        void displayBoard();
        void fillRandomly();
        bool input(int pos, int pos_, char num);
        int getHeight();
        int getWidth();

    private:
        static const int height = 9;
        static const int width = 9;
        char sudoku_board[height][width];
};

#endif // SUDOKUBOARD_H
