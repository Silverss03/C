#include <stdio.h> 

int fibonacci(int start)
{
    int a1 = 1, a2 = 1 ;
    if (start == 2 || start == 1)
    {
        return 1 ;
    }
    int n = 2, fib ;
    while (n < start)
    {
        fib = a1 + a2 ;
        a1 = a2 ;
        a2 = fib ;
        n++ ;
    }
    return fib ;
}

int check_fibonacci(int num)
{
    int start = 1 ;
    while (num > fibonacci(start))
    {
        start++ ;
    }
    if (num == fibonacci(start))
    {
        return 1 ;
    }
    return 0 ;
}

int main()
{
    int num ;
    scanf("%d", &num) ;
    if (check_fibonacci(num) == 1)
    {
        printf("%d", 1) ;
    }
    else
    {
        printf("%d", 0) ;
    }
}