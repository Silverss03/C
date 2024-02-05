#include <stdio.h>
#include <math.h> 

int check_Primes(int num)
{
    if (num < 2)
    {
        return 0;
    }
    
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0 ;
        }
    }
    return 1 ;
}

int check_parts(int num)
{
    while (num > 0)
    {
        int part = num % 10 ;
        if (check_Primes(part) == 0)
        {
            return 0 ;
        }
        num /= 10 ;
    }
    return 1 ;
}

int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
        int num1, num2, count = 0 ;
        scanf("%d %d", &num1, &num2) ;
        for (int i = num1; i <= num2; i++)
        {
            if (check_Primes(i) == 1 && check_parts(i) == 1)
            {
                count++;
            }
        }
        printf("%d\n", count) ;
    }
    
}