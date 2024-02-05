#include <stdio.h>

void new_matrix(int arr[][100], int M, int N)
{
    for (int i = 1; i < M; i++)
    {
        for (int j = 1; j < N; j++)
        {
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
        scanf("%d %d", &M, &N) ;
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                scanf("%d", &arr[i][j]) ;
            }
        }
        printf("Test %d:\n", i) ;
        new_matrix(arr, M , N) ;
        printf("\n") ;
    }
    
}