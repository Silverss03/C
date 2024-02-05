#include <stdio.h> 

int total(int a, int b)
{
    int total = 0 ;
    if (b > a)
    {
        for (int i = a; i <= b; i++)
        {
            total += i ;
        }
        return total ;
    }
    else
    {
        for (int i = b; i <= a; i++)
        {
            total += i ;
        }
        return total ;
    }
    
}
int main ()
{
    long long a, b ;
    scanf("%d %d", &a, &b) ;
    printf("%d", total(a,b)) ;
}