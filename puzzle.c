// #include "sudoku.h"

//returns a pointer to an array of ints
int **createPuzzle()
{
    //variable to return --> pointer to an array of ints
    int **puzzle;
    int i, j;
    int array[9][9] = {0, 1, 9, 0, 0, 2, 0, 0, 0,
                       4, 7, 0, 6, 9, 0, 0, 0, 1,
                       0, 0, 0, 4, 0, 0, 0, 9, 0,

                       8, 9, 4, 5, 0, 7, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 0, 0, 0,
                       0, 0, 0, 2, 0, 1, 9, 5, 8,

                       0, 5, 0, 0, 0, 6, 0, 0, 0,
                       6, 0, 0, 0, 2, 8, 0, 7, 9,
                       0, 0, 0, 1, 0, 0, 8, 6, 0};

    puzzle = (int **)malloc(sizeof(int *) * 9);

    for (i = 0; i < 9; i++)
    {
        puzzle[i] = (int *)malloc(sizeof(int) * 9);
        for (j = 0; j < 9; j++)
        {
            puzzle[i][j] = array[i][j];
        }
    }

    return puzzle;
}

void printPuzzle(int **puzzle)
{
    int i, j;

    printf(" ");
    for (i = 0; i < 9; i++)
    {
        //print each row - then break /n
        for (j = 0; j < 9; j++)
        {
            //print int plus spaces
            printf(" %d ", puzzle[i][j]);
        }
        printf("/n");
    }
}