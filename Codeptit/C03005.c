#include <stdio.h> 

int GCD(int m, int n)
{
    if (n == 0)
    {
        return m ;
    }
    return GCD(n, m%n) ;
}

int main()
{
    int m, n ;
    scanf("%d %d", &m, &n) ;
    for (int i = m; i <= n; i++)
    {
        for (int j = i ; j <= n; j++)
        {
            if (GCD(i,j) == 1 && i != j)
            {
                printf("(%d,%d)\n", i , j) ;
            }
            
        }
    }
    
    
}