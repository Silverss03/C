#include<stdio.h>
int main() 
{
    int time ;
    scanf("%d", &time) ;
    while (time--)
    {
        long long n ;
        scanf("%d", &n) ;
        printf("%lld\n", n * n) ;
    }
    return 0 ;
} 