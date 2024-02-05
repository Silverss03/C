#include <stdio.h> 
int main()
{
    int a, y , w ,d ;
    scanf("%d", &a) ;
    if(a >= 365)
    {
        y = a / 365 ;
        w = (a - y*365) / 7 ;
        d = a - y*365 - w*7 ;
        printf("%d %d %d", y, w, d ) ;
    }
    else if(a >= 7 && a < 365)
    {
        y = 0 ;
        w = a/7 ;
        d = a - w*7 ;
        printf("%d %d %d", y, w, d ) ;
    }
    else if(a >= 0 && a < 7)
    {
        y = 0;
        w = 0;
        d = a;
        printf("%d %d %d", y, w, d ) ;
    }
}