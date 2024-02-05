#include <stdio.h>

int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
            int a,b,c,d ;
        scanf("%d %d %d %d", &a, &b, &c, &d) ;
        int length = c - a ;
        int width = d - b ;
        if (length == width)
        {
            printf("YES\n") ;
        }
        else
        {
            printf("NO\n") ;
        }
    }
    
}