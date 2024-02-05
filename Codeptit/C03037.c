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

long long check_parts(long long num)
{
    int mark[10] = {0}, arr[100], count = 0 ;
    while (num > 0)
    {
        if (check_Primes(num % 10) == 1)
        {
            arr[count] = num % 10 ;
            mark[arr[count]]++ ;
            count++; 
        }
        num /= 10 ;
    }
    for (int j = count - 1; j >= 0; j--)
    {
        if (mark[arr[j]] != 0)
        {
            printf("%d %d\n", arr[j], mark[arr[j]]) ;
            mark[arr[j]] = 0 ;
        }
        
    }
    
}

int main()
{
    long long num ;
    scanf("%lld", &num) ;
    check_parts(num) ;
}