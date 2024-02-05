#include <stdio.h> 

void delete(int arr[][100], int M, int N)
{
    int max_column = 0 , max_line = 0, count_max_line = 0, count_max_column = 0;
    for (int i = 0; i < M; i++)
    {
        int count_column = 0 ;
        for (int j = 0; j < N; j++)
        {
           count_column += arr[i][j] ;
        }
        if (count_column > max_column)
        {
            max_column = count_column ;
            count_max_column = i ;
        }
    }
    for (int i = 0; i < M; i++)
    {
        int count_line = 0 ;
        for (int j = 0; j < N; j++)
        {
            if (j == count_max_column)
            {
                continue; 
            }
           count_line += arr[j][i] ;
        }
        if (count_line  > max_line)
        {
            max_line = count_line ;
            count_max_line = i ;
        }
    }
    for (int i = 0; i < M  ; i++)
    {        
        if (i == count_max_column )
        {
            continue;
        }
        for (int j = 0; j < N  ; j++)
        {
            if (j == count_max_line)
            {
                continue; ;
            }
            printf("%d ", arr[i][j]) ;
        }
        printf("\n") ;
    }
}

int main()
{
    int times ;
    scanf("%d", &times) ;
    for (int i = 1; i <= times; i++)
    {
        int M, N, arr[100][100] ;
        scanf("%d%d", &M, &N) ;
        for (int j = 0; j < M; j++)
        {
            for (int k = 0; k < N; k++)
            {
                scanf("%d", &arr[j][k]) ;
            }
        }
        printf("Test %d:\n", i) ;
        delete(arr, M , N ) ;
    }   
}