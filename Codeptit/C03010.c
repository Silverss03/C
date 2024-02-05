#include <stdio.h> 

int factorial(int n)
{
    int res = 1 ;
    for (int i = n; i > 1; i--)
    {
        res *= i ;
    }
    return res ;
}

int parts(int num )
{
    int sum = 0 ;
    while (num > 0)
    {
        sum += factorial(num % 10) ;
        num /= 10 ;
    }
    return sum ;
}

int main()
{
    int num ; 
    scanf("%d", &num) ;
    for (int i = 1; i <= num; i++)
    {
        if (i == parts(i))
        {
            printf("%d ", i) ;
        }
    }
    
}