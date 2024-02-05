#include <stdio.h>

int reciprocity(int num)
{
    int tmp = num ;
    int compare = 0 ;
    int condition = 0 ;
    while (num > 0)
    {
        if (num % 10 == 9) condition = 1 ;
        compare = compare*10 + num % 10 ;
        num /= 10 ;
    }
    if (compare == tmp && condition == 0) return 1 ;
    return 0 ;
}

int main()
{
    int num ;
    scanf("%d", &num) ;
    int count = 0 ;
    for (int i = 2; i <= num; i++)
    {
        if(reciprocity(i) == 1 ) 
        {
            printf("%d ", i) ;
            count++ ;
        }
    }
    printf("\n%d", count) ;
}