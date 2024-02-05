#include <stdio.h> 

long long checking(long long num)
{
    int temp = num ;
    int parts, reversed = 0, sum = 0 ;
    while (num > 0)
    {
        parts = num % 10 ;
        if (parts % 2 == 0)
        {
            return 0 ;
        }
        sum += parts ;
        reversed *= 10 ;
        reversed += parts ;
        num /= 10 ;
    }
    if (reversed == temp && sum % 2 != 0)
    {
        return 1 ;
    }
    return 0 ;
}

int main()
{
    int times;
    scanf("%d", &times) ;
    while (times--)
    {
        long long num ;
        scanf("%lld", &num) ;
        if (checking(num) == 1)
        {
            printf("YES\n") ;
        }
        else
        {
            printf("NO\n") ;
        }
        
    }
    
}