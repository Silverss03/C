#include <stdio.h> 
#include <math.h>

void enumerate(int m, int n)
{
    int i = sqrt(n) ;
    int j = sqrt(m) ;
    int count = 0 ;
    int final_count = 0 ;
    if (i * i == n)
    {
        count += i - 1 ;
    }
    else
    {
        count += i ;
    }
    if (j * j == m)
    {
        final_count = count - j + 1; 
    }
    else
    {
        final_count = count - j ;
    }
    printf("%d\n",final_count) ;
    for (int i = 0; i <= sqrt(n); i++)
    {
        if (i * i >= m)
        {
            printf("%d\n", i*i);
        }       
    }
    
}
int main()
{
    int m,n ;
    scanf("%d %d", &m, &n ) ;
    enumerate(m,n) ;
}