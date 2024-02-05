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
    int num1, num2 ;
    scanf("%d %d", &num1 ,&num2) ;
    if (num1 <= num2)
    {
        for (int i = num1; i <= num2; i++)
        {
            if (i == parts(i))
            {
                printf("%d ", i) ;
            }
        }
    }
    else
    {
        for (int i = num2; i <= num1; i++)
        {
            if (i == parts(i))
            {
                printf("%d ", i) ;
            }
        }
    }
    
    
}