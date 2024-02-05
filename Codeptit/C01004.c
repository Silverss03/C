#include<stdio.h>
int main()
{
    int time ;
    scanf("%d", &time) ;
    while (time--)
    {
        long long n ;
        scanf("%lld", &n ) ;
        printf("%0.15f\n",(double)1/n) ;
    }
    return 0 ;
}