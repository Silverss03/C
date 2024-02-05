#include <stdio.h> 


int main()
{
    int times, count = 1 ;
    scanf("%d", &times) ;
    for (int t = 1; t <= times; t++)
    {
        int M, N , arr_1[100][100], arr_2[100][100], final_arr[100][100] ;
        scanf("%d%d", &M, &N) ;
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                scanf("%d", &arr_1[i][j]) ;
            }
        }
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                arr_2[i][j] = arr_1[j][i] ;
            }
            
        }
        
        printf("Test %d:\n", t) ;
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < M; j++)
            {   
                final_arr[i][j] = 0 ;
                for (int k = 0; k < N; k++)
                {
                    final_arr[i][j] += arr_1[i][k] * arr_2[k][j] ;
                }
                printf("%d ", final_arr[i][j]) ;
            }
            printf("\n") ;
        }
    }
    
}