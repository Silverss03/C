#include <stdio.h> 

int main()
{
    int m ;
    char start = 'A' ;
    scanf ("%d", &m) ;
    for (int i = 0; i < m; i++)
    {
        for (int j = i; j < m ; j++)
        {
            printf("%c", start + j * 2 ) ;
        }
        printf("\n") ;
    }
}