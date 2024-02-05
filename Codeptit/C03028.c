#include <stdio.h>

int pascal(int row, int col)
{
    if (row == col || col == 0 )
    {
        return 1 ;
    }
    else return pascal(row - 1, col) + pascal(row - 1, col - 1) ;
}

int main()
{
    int num ;
    scanf("%d", &num) ;
    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            printf("%d ", pascal(row, col)) ;
        }
        printf("\n") ;
    }
    
}