#include <stdio.h> 

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

int main()
{
    int num1, num2 ;
    scanf("%d %d", &num1, &num2) ;
    if (sum_parts(num1) > sum_parts(num2))
    {
        printf("%d %d", num2, num1) ;
    }
    else if (sum_parts(num2) > sum_parts(num1))
    {
        printf("%d %d", num1, num2) ;
    }
    else
    {
        printf("%d %d", num1, num2) ;
    }
    
}