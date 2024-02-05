#include <stdio.h>
#include <stdbool.h>

int sum_parts(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10 ;
        num /= 10 ;
    }
    if (sum % 5 == 0) return 1 ;
    return 0 ;
}

void erathosnes(int num)
{
    bool check[10000] ;
    int count = 0 ;
    for (int i = 2; i <= num; i++)
    {
        check[i] = true ;        
    }
    for (int i = 2; i <= num; i++)
    {
        if (check[i] == true)
        {
            for (int j = 2*i ; j <= num; j += i)
            {
                check[j] = false ;
            }
        }
    }
    for (int k = 2; k <= num; k++)
    {
        if (check[k] == true && sum_parts(k) == 1) 
        {
            printf("%d ", k) ; 
            count++ ;
        }
    }
    printf("\n%d", count) ;
}

int main()
{
    int num ;
    scanf("%d", &num) ;
    erathosnes(num) ;
}