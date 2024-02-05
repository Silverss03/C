#include <stdio.h>
#include <string.h> 

int main(){
    int test;
    scanf("%d\n", &test) ;
    while (test--){
        char string[50] ;
        gets(string) ;
        int l = 0, r = strlen(string) - 1, dif = 0 ;
        while (l < r){
            if (string[l] != string[r]) dif++ ;
            l++ ;
            r-- ;
        }
        if (strlen(string) % 2 == 0){
            if (dif > 1){
                printf("NO\n") ;
            }
            else if (dif == 1){
                printf("YES\n") ;
            }
            else{
                printf("NO\n") ;
            }
        }
        else
        {
            if (dif > 1){
                printf("NO\n") ;
            }
            else{
                printf("YES\n") ;
            }
        }
        
    }
}