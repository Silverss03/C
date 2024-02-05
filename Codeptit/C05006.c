#include <stdio.h> 

void matrix_line_swap(int arr[][100], int M, int N, int swap1, int swap2)
{
    for (int i = 0; i < M; i++)
    {
        if (i == swap1)
        {
            for (int j = 0; j < N; j++)
            {
                printf("%d ", arr[swap2][j]) ;
            }
            printf("\n") ;
        }
        else if (i != swap1 && i != swap2)
        {
            for (int j = 0; j < N; j++)
            {
                printf("%d ", arr[i][j]) ;
            }
            printf("\n") ;
        }
        else if (i == swap2)
        {
            for (int j = 0; j < N; j++)
            {
                printf("%d ", arr[swap1][j]) ;
            }
            printf("\n") ;
        }
        
    }
    
}
int main()
{
    int M, N, swap1, swap2, arr[100][100] ;
    scanf("%d %d", &M, &N) ;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &arr[i][j]) ;
        }
    }
    scanf("%d %d", &swap1, &swap2) ;
    matrix_line_swap(arr, M, N, swap1 - 1, swap2 - 1) ;
}