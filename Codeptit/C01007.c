#include<stdio.h>
int main()
{
    int a,b ;
    scanf("%d %d", &a, &b) ;
    if (b == 0)
    {
        printf("0") ;
    }
    printf("%d\n%d\n%lld\n%d\n%d\n%0.2f", a + b, a - b, (long long) a*b, a/b, a%b , (double)a/b);
}