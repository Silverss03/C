#include <stdio.h>

void arrange(int T[100], int D[100], int len )
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (T[i] < T[j])
            {
                int tmp1 = T[i] ;
                int tmp2 = D[i] ;
                T[i] = T[j] ;
                D[i] = D[j] ;
                T[j] = tmp1 ;
                D[j] = tmp2 ;
            }
            
        }
        
    }
    
}
int main()
{
    int num, T[100], D[100] ;
    scanf("%d", &num) ;
    int sum = 0 ;
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &T[i] ) ;
        scanf("%d", &D[i]) ;
    }
    arrange(T, D, num) ;
    for (int i = 0; i < num; i++)
    {
        if (i == 0) sum = sum + T[i] + D[i] ;
        else
        {
            if (T[i] > sum)
            {
                sum = 0 ;
                sum = sum + T[i] + D[i] ;
            }
            else
            {
                sum += D[i] ;
            }
        }
    }
    printf("%d", sum) ;
}