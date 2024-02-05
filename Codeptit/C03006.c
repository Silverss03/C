#include <stdio.h> 

int prime(int num)
{
    int prime = 2 ;
    int arr[100] ;
    int count = 0 ; 
    while (num > 1)
    {
        if (num % prime == 0)
        {
            arr[count] = prime ;
            count++ ;
            num /= prime ;
        }
        else
        {
            prime++;
        }   
    }
    for (int i = 0; i < count; i++)
    {
        int appear = 1 ;
        for (int j = i + 1; j < count; j++)
        {
            if (arr[j] == arr[i])
            {
                appear++ ;
            }  
        }
        if (i != 0 && arr[i] == arr[i - 1])
        {
            continue ;
        }
        printf("%d(%d) ", arr[i], appear) ;
    }
}

int main()
{
    int times ;
    scanf("%d", &times) ;
    for (int i = 1; i <= times; i++)
    {
        int num ;
        scanf("%d", &num) ;
        printf("Test %d: ", i) ;
        prime(num) ;
        printf("\n") ;
    }   
}