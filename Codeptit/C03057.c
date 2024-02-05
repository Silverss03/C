#include <stdio.h>
#include <string.h>

long long replace_5_by_6(long long num)
{
    int arr[100] ;
    int count = 0 ;
    long long new = 0 ;
    while (num > 0)
    {
        if(num % 10 != 5)
        {
            arr[count++] = num % 10 ;
            num /= 10 ;
        }
        else
        {
            arr[count++] = 6 ;
            num /= 10 ;
        }
    }
    for (int i = count - 1; i >= 0; i--)
    {
        new = new * 10 + arr[i] ;
    }
    return new ;
}

long long replace_6_by_5(long long num)
{
    int arr[100] ;
    int count = 0 ;
    long long new = 0 ;
    while (num > 0)
    {
        if(num % 10 != 6)
        {
            arr[count++] = num % 10 ;
            num /= 10 ;
        }
        else
        {
            arr[count++] = 5 ;
            num /= 10 ;
        }
    }
    for (int i = count - 1; i >= 0; i--)
    {
        new = new * 10 + arr[i] ;
    }
    return new ;
}
int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
        long long num1, num2 ;
        scanf("%lld%lld", &num1, &num2) ;
        printf("%lld %lld\n", replace_6_by_5(num1) + replace_6_by_5(num2), replace_5_by_6(num1) + replace_5_by_6(num2)) ;
    }
    
}