#include <stdio.h>

void transposaed_matrix(int arr[][100], int M, int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", arr[j][i]) ;
        }
       printf("\n") ; 
    }
    
}

int main()
{
    int M, N, arr[100][100];
    scanf("%d %d", &M, &N) ;
    for (int  i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &arr[i][j]) ;
        }
    }
    transposaed_matrix(arr, M, N) ;
}