#include <stdio.h>
#include <string.h>
int main(){
    int test ;
    scanf("%d\n", &test) ;
    while (test--){
        char number[1000] ;
        gets(number) ;
        int count[10] = {0} ,length = strlen(number), res = 1, condition = 1 ;
        for (int i = 0; i < length; i++){
            if (number[i] < (char)'0' || number[i] > (char)'9' || number[0] == (char)'0'){
                condition = 0 ;
                printf("INVALID\n") ;
                break;
            }
            else {
                int num = number[i] - 48 ;
                count[num]++ ;
            }
        }
        for (int i = 0; i < 10; i++){
            if (count[i] == 0 ) res = 0 ; 
        }
        if (res == 1 && condition == 1 ) printf("YES\n") ;
        else if (res == 0 && condition == 1) printf("NO\n") ;
        
    }
    
}