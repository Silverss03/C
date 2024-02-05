#include <stdio.h>

int main()
{
    int N, M, K, arr[10000] , space[10000];
    int res = 0 ;
    scanf("%d%d%d", &N, &M, &K) ;
    for (int i = 1; i <= M; i++)
    {
        scanf("%d", &arr[i]) ;
    }
    for (int i = 1; i <= N; i++)
    {
        space[i] = 0 ;
    }
    for (int i = 1; i <= M; i++)
    {
        if (arr[i] - K <= 0)
        {
            for (int j = 1; j <= arr[i] ; j++)
            {
                space[j] = 1 ;
            }
            for (int k = arr[i] + 1; k <= arr[i] + K ; k++)
            {
                space[k] = 1 ;
            }
        }
        else
        {
            for (int j = arr[i] - K; j <= arr[i]; j++)
            {
                space[j] = 1 ;
            }
            for (int k = arr[i] + 1; k <= arr[i] + K ; k++)
            {
                space[k] = 1 ;
            }
            
        }
    }

    for (int i = 1; i <= N ; i++)    
    {
        if (space[i] == 0)    
        {
            res++ ;
            for (int j = i ; j <= i + K*2; j++)        
            {
                space[j] = 1 ;        
            }
        }
    }
    printf("%d", res) ;    
}