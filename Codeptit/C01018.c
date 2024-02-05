#include<stdio.h>
#include<math.h>
int main()
{
    int time ;
    scanf("%d", &time) ;
    while (time--)
    {
        long long n, real ;
        double unreal ;
        scanf("%lld", &n) ;
        real = sqrt(n) ;
        unreal = sqrt(n) ;
        if (real == unreal)
        {
            printf("YES\n") ;
        }
        else
        {
            printf("NO\n") ;
        }
    }
    return 0 ;
}