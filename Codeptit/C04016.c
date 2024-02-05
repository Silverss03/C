#include <stdio.h>
#include <math.h>  

int is_Prime(int num)
{
    if (num < 2)
    {
        return 0 ;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0 ;
        }
    }
    return 1 ;
    
}

void count_appears(int arr[], int end)
{
    int count[100000] = {0} ;
    for (int i = 0; i < end; i++)
    {
        count[arr[i]]++ ;
    }
    for (int j = 0; j < end; j++)
    {
        for (int k = j + 1; k < end; k++)
        {
            if (arr[j] > arr[k])
            {
                int tmp = arr[j] ;
                arr[j] = arr[k] ;
                arr[k] = tmp ;
            }
        }
    }
    for (int l = 0; l < end; l++)
    {
        if (count[arr[l]] != 0)
        {
            printf("%d xuat hien %d lan \n", arr[l], count[arr[l]]) ;
            count[arr[l]] = 0 ;
        }
    }
    
}

int main()
{
    int times ;
    scanf("%d", &times) ;
    for (int i = 1; i <= times; i++)
    {
        int num, arr[100], usable_num = 0 ;
        scanf("%d", &num) ;
        for (int j = 0; j < num; j++)
        {
            int tmp ;
            scanf("%d", &tmp) ;
            if (is_Prime(tmp))
            {
                arr[usable_num] = tmp ; 
                usable_num++ ;
            }
            
        }
        printf("Test %d:\n", i) ;
        count_appears(arr, usable_num) ;
    }
    
}