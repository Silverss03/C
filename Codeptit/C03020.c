#include <stdio.h>

long long perfect_num(long long num)
{
    long long compare = 0; 
    long long tmp = num ;
    int sum = 0 ;
    int check = 0 ;
    while (num > 0 )
    {
        if (num % 10 == 6) check = 1 ;
        sum += num % 10 ;
        compare = compare * 10 + num % 10 ;
        num /= 10 ;
    }
    if (compare == tmp && sum % 10 == 8 && check == 1) return 1 ;
    else return 0 ;
}
int main()
{
    long long start, end, res = 0 ;
    scanf("%lld %lld", &start, &end) ;
    if (start > end)
    {
        for (long long i = end; i <= start; i++)
        {
            if (perfect_num(i) == 1) printf("%lld ", i) ;
        }
    }
    else if (start <= end)
    {
        for (long long i = start; i <= end; i++)
        {
            if (perfect_num(i) == 1) printf("%lld ", i) ;
        }
    }
}