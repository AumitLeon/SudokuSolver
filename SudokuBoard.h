#ifndef SUDOKUBOARD_H
#define SUDOKUBOARD_H

class SudokuBoard
{
    public:
        SudokuBoard();
        /** Default destructor */
        virtual ~SudokuBoard();

        /**Display the contents of the board.
        @post Board is printed.*/
        void displayBoard();

        /**Fill the board randomly
        --Needs to be modified. Will be used to generate random puzzles.*/
        void fillRandomly();

        /**Accept input and put it into a position in the matrix.
        @param column The column corresponding to the coordinate.
        @param row The row corresponding to the coordinate.
        @param num THe item to be placed in the matrix
        @return True if successful, false if otherwise.*/
        bool input(int column, int row, char num);

        /**Get the height.
        @return the Height of the matrix.*/
        int getHeight();

        /**Get the width.
        @return the width of the matrix/*/
        int getWidth();

    private:
        //In order to be a proper box-matrix-- the height and width should be the same.
        static const int height = 9;        //Define the height of the matrix.
        static const int width = 9;         //Define the width of the matrix.
        char sudoku_board[height][width];   //Create the matrix. (Sudoku = 81x81)
};

#endif // SUDOKUBOARD_H
