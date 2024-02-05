#include <stdio.h>

int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
        int num, arr[100000] ;
        scanf("%d", &num) ;
        for (int i = 0; i < num; i++)
        {
            scanf("%d", &arr[i]) ;
        }
        long long sum = 0 ;
        long long max = arr[0];
        int limiter = 0 ;
        for (int i = 0; i < num; i++)
        {
            if (arr[i] < 0) 
            {
                if (arr[i] > max) max = arr[i]  ;
            }
            else limiter = 1 ;
        }
        if (limiter == 0) printf("%d\n", max) ;
        max = arr[0] ;
        for (int i = 0; i < num; i++)
        {
            if (sum + arr[i] < 0)
            {
                sum = 0 ;
                continue;
            }
            sum += arr[i] ;
            if (sum > max) max = sum ;
        }
        printf("%lld\n", max) ;
    }
    
}