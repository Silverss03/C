#include <stdio.h>

int biggest(int a, int b, int c)
{
    if (a < b && a < c)
    {
        return a ;
    }
    else if (b < c && b < a)
    {
        return b ;
    }
    else
    {
        return c ;
    }
    
}

int main()
{
    int a, b, c ;
    scanf("%d %d %d", &a, &b, &c) ;
    printf("%d", biggest(a,b,c)) ;
}