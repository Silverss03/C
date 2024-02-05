#include <stdio.h> 

long long GCD(long long num1, long long num2)
{
    if (num2 == 0)
    {
        return num1 ;
    }
    return GCD(num2, num1 % num2) ;
}

int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
        int num1, num2, num3, num4 ;
        scanf("%d %d %d %d", &num1, &num2, &num3, &num4) ;
        if (GCD(num1,num2) == GCD(num3,num4))
        {
            printf("YES\n") ;
        }
        else
        {
            printf("NO\n") ;
        }
    }
}

