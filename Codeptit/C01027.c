#include <stdio.h>
int biggest(int a, int b)
{
    if (b==0) 
    {
        return a ;
    }
    return biggest(b,a % b) ;
    
}
int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
        int a,b ;
        scanf("%d %d", &a, &b) ;
        printf("%d\n",biggest(a,b)) ; 
    }
    return 0 ;
}