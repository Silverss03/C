#include <stdio.h> 

int fibonacci(int ordinal)
{
    int a1 = 1 , a2 = 1 ;
    if (ordinal == 1)
    {
        return 0 ;
    }
    else if (ordinal == 2 || ordinal == 3)
    {
        return 1 ;
    }
    int rank_up = 4, rank_up_num ;
    while (rank_up <= ordinal)
    {
        rank_up_num = a1 + a2 ;
        a1 = a2 ;
        a2 = rank_up_num ;
        rank_up++ ;
    }
    return rank_up_num ;
}

int main()
{
    int ordinal ;
    scanf("%d", &ordinal) ;
    for (int i = 1; i <= ordinal; i++)
    {
        printf("%d ", fibonacci(i)) ;
    }
    
}