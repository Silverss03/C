#include <stdio.h> 

int main()
{
    int col ;
    char start = '@' ;
    scanf("%d", &col) ;
    for (int i = 0; i < col; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < col; j++)
            {
                printf("%c", start + col + j - 1) ;
            }
        }
        else
        {
            for (int j = col - i - 1; j < 2*col - 2*i - 1; j++)
            {
                printf("%c" , start + j) ;
            }
            
            
        }
        printf("\n") ;
    }
    
}