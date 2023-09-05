#include <stdio.h>

void PrintData (char *array, int Rows);
void PrintRows (char *array, int RowsNumber, int sch);

int main ()
{
    char array[] = {1,
                    2, 3,
                    4, 5, 6,
                    7, 8, 9, 1,
                    1, 2, 3, 4, 5,
                    1, 2, 3, 4, 5, 6,
                    1, 2, 3, 4, 5, 6, 7};

    PrintData (array, 7);

    return 0;
}

void PrintData (char *array, int Rows)
{
    int sch = 0;
    for (int RowsNumber = 0; RowsNumber < Rows; RowsNumber++)
    {   
        sch = sch + RowsNumber;
        PrintRows (array, RowsNumber, sch); 
        printf ("\n");
    }

}
void PrintRows (char *array, int RowsNumber, int sch)
{   
    for (int CollsNumber = 0; CollsNumber < RowsNumber + 1; CollsNumber++)
    {   
        printf ("%d ", *(array + sch + CollsNumber));
    }
}

// TODO Codestyle: Pascal Case, Snake Case
// TODO LEARN ENGLISH BLYAT!!!!
// TODO Write string funcs
