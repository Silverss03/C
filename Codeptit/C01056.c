#include <stdio.h>

int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
        long long n ;
        scanf("%lld" , &n) ;
        long long arr[100] ;
        int count = 0 ;
        while (n > 0)
        {   
            arr[count] = n % 10 ;
            n /= 10 ;
            count++ ;
        }
        for (int i = count - 1; i >= 0; i--)
        {
            if (i != 0 && arr[i] > arr[i - 1])
            {
                printf("NO\n") ;
                break ;
            }
            else if (i == 0)
            {
                printf("YES\n") ;
            }
            
        }
    }
    return 0 ;
    
}