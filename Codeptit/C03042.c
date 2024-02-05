#include <stdio.h> 

int check(int num)
{
    int last = num % 10 ;
    num /= 10 ;
    while (num > 0)
    {
        int compare = num % 10 ;
        if (compare <= last)
        {
            return 0 ;
        }
        last = compare ; 
        num /= 10;
    }
    return 1 ;
}

int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
        int start, end, count = 0 ;
        scanf("%d %d", &start, &end) ;
        for (int i = start; i <= end; i++)
        {
            if (check(i) == 1)
            {
                count++;
            }
        }
        printf("%d\n", count) ;
    }

}