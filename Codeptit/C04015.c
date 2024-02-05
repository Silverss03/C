#include <stdio.h> 

void count_appears(int arr[], int end)
{
    int count[100000] = {0} ;
    for (int i = 0; i < end; i++)
    {
        count[arr[i]]++ ;
    }
    for (int j = 0; j < end; j++)
    {
        if (count[arr[j]] != 0)
        {
            printf("%d xuat hien %d lan \n", arr[j], count[arr[j]]) ;
            count[arr[j]] = 0 ;
        }
    }
}

int main()
{
    int times ;
    scanf("%d", &times) ;
    for (int i = 1; i <= times; i++)
    {
        int num, arr[100] ;
        scanf("%d", &num) ;
        for (int j = 0; j < num; j++)
        {
            scanf("%d", &arr[j]) ;
        }
        printf("Test %d:\n", i) ;
        count_appears(arr, num) ;
    }
    
}