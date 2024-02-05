#include <stdio.h>

int analyze(int num)
{
    int Prime = 2, arr[100], count = 0 ;
    while (num > 1)
    {
        if (num % Prime == 0)
        {
            arr[count] = Prime ;
            count++;
            num /= Prime ;
        }
        else
        {
            Prime++;
        }
    }
    for (int i = 0; i < count; i++)
    {
        int appears = 1 ;
        for (int j = i + 1; j < count; j++)
        {
            if (arr[j] == arr[i])
            {
                appears++ ;
            }
        }
        if (i != 0 && arr[i] == arr[i - 1])
        {
            continue ;
        }
        if (i != 0 && arr[i] != arr[i - 1])
        {
            printf(" * ") ;
        }
        
        printf("%d^%d", arr[i], appears) ;   
    }
}

int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
        int num ;
        scanf("%d", &num) ;
        printf("%d = ", num) ;
        analyze(num) ;
        printf("\n") ;
    }
    
}