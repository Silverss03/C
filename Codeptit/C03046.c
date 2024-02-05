#include <stdio.h> 
#include <math.h> 

int check_reverse(int num)
{
    int tmp;
    int res = 0;
    int compare = num ;
    while(num > 0)
    {
        tmp = num % 10;
        if (tmp == 4)
        {
            return 0 ;
        }
        res = res * 10 + tmp;
        num /= 10;
    }
    if (compare == res)
    {
        return 1 ;
    }
    return 0 ;
}

int check_part_total(int num)
{
    int total = 0 ;
    while (num > 0) 
    {
        total += num % 10 ;
        num /= 10 ;
    }
    if (total % 10 == 0)
    {
        return 1 ;
    }
    return 0 ;
}

int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
        int num;
        scanf("%d", &num) ;
        int start = pow(10, num - 1) ;
        int end = pow(10, num) ;
        for (int i = start; i <= end; i++)
        {
            if (check_reverse(i) == 1 && check_part_total(i) == 1)
            {
                printf("%d ", i) ;
            }            
        }
        printf("\n") ;
    }
    
}