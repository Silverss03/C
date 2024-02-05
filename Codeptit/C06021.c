#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

int main(){
    int tests ;
    scanf("%d\n", &tests) ;
    while (tests--){
        char number[1000] ;
        gets(number) ;
        int length = strlen(number), count_Odd = 0, count_even = 0 ;
        if(length % 2 != 0 ){
            if (number[0] == '0') printf("INVALID\n") ;
            else{
                for (int i = 0; i < length; i++){
                    if (number[i] >= '0' && number[i] <= '9'){
                        if ((number[i] - 48) % 2 == 0) count_even++ ;
                        else count_Odd++ ;
                    }
                    else{
                        printf("INVALID\n") ;
                        exit(0) ;
                    }
                }
                if (count_even < count_Odd) printf("YES\n") ;
                else printf("NO\n") ;
            }
        }
        else{
            if (number[0] == '0') printf("INVALID\n") ;
            else{
                for (int i = 0; i < length; i++){
                    if (number[i] >= '0' && number[i] <= '9'){
                        if ((number[i] - 48) % 2 == 0) count_even++ ;
                        else count_Odd++ ;
                    }
                    else{
                        printf("INVALID\n") ;
                        exit(0) ;
                    }
                }
                if (count_even > count_Odd) printf("YES\n") ;
                else printf("NO\n") ;
            }
        }
    }
}