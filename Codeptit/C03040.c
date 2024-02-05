#include <stdio.h> 
#include <math.h> 

int check_Primes(int num)
{
    if (num < 2)
    {
        return 0 ;
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

int sum_parts(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10 ;
        num /= 10 ;
    }
    return sum ;
}

int analyze(int num)
{
    int sum = 0 ;
    int Primes = 2 ;
    while (num > 1)
    {     
        if (num % Primes == 0)
        {
            sum += sum_parts(Primes) ;
            num /= Primes ;
        }
        else
        {
            Primes++;
        }
    }
    return sum ;
}

int main()
{
    int num ;
    scanf("%d", &num) ;
    if (analyze(num) == sum_parts(num))
    {
        printf("YES") ;
    }
    else
    {
        printf("NO") ;
    }
    
}