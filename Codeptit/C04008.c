#include <stdio.h>

void fusion(int arr_a[], int arr_b[], int N, int M, int p)
{
    for (int i = 0; i < p; i++)
    {
        printf("%d ", arr_a[i]) ;
    }
    for (int j = 0; j < M ; j++)
    {
        printf("%d ", arr_b[j]) ;
    }
    for (int k = p; k <  N; k++)
    {
        printf("%d ", arr_a[k]) ;
    }
    
}

int main()
{
    int times ;
    scanf("%d", &times ) ;
    for (int i = 1; i <= times; i++)
    {
        int N,M,p ;
        scanf("%d %d %d", &N, &M, &p);
        int arr_a[100], arr_b[100] ;
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &arr_a[i]) ;
        }
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &arr_b[j]) ;
        }
        printf("Test %d:\n", i) ;
        fusion(arr_a,arr_b,N,M,p) ;
        printf("\n") ;
    }
       
}