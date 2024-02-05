#include <stdio.h>
#include <math.h> 

long long perfect_num(long long num)
{
    long long compare = 0; 
    long long tmp = num ;
    int sum = 0 ;
    while (num > 0 )
    {
        sum += num % 10 ;
        compare = compare * 10 + num % 10 ;
        num /= 10 ;
    }
    if (compare == tmp && sum % 10 == 0) return 1 ;
    else return 0 ;
}

int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
        int num, res = 0; 
        scanf("%d", &num) ;
        long long start = pow(10, num - 1 ) ;
        long long end = pow(10,num) ;
        for (long long i = start; i < end; i++)
        {  
            if (perfect_num(i) == 1) res++ ;
        }
        printf("%d\n", res) ;
    }
    
}