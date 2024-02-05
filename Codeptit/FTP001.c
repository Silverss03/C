#include <stdio.h>

int main()
{
    int row, arr[100][100] ;
    scanf("%d", &row) ;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", 0) ;
        }
        for (int k = 1; k < row - i; k++)
        {
            printf("%d ", k) ;
        }
        printf("\n") ;
    }
    
}