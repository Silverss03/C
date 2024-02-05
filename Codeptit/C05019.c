#include <stdio.h>
#include <math.h>

int is_Prime(int num)
{
    if (num < 2) return 0 ;
    for (int i = 2; i <= sqrt(num); i++ ){
        if (num % i == 0) return 0 ;
    }
    return 1 ;
}

void first_n_primes(int n, int arr[]){
    int count = 0 ;
    for (int i = 2; n > count; i++){
        if (is_Prime(i)) arr[count++] = i ;       
    }
    
}

int main()
{
    int times ;
    scanf("%d", &times) ;
    for (int j = 1; j <= times; j++){
        
        int num,res[100][100], Prime_num[100] ;

        scanf("%d", &num) ;
        
        int R = num, C = num ,r_controller = 0 , c_controller = 0,iter = 0 ; ;
        
        first_n_primes(num*num, Prime_num) ;

        while (r_controller < R && c_controller < C){
            for (int i = c_controller ; i < C; i++){
                res[r_controller][i] = Prime_num[iter++] ;
            }

            r_controller++ ;

            for (int i = r_controller; i < R; i++){
                res[i][C - 1] = Prime_num[iter++] ;
            }

            C-- ;

            if (r_controller < R){
                for (int i = C - 1; i >= c_controller; i--){
                    res[R - 1][i] = Prime_num[iter++] ;
                }

                R-- ;

            }
            if (c_controller < C){
                for (int i = R - 1; i >= r_controller; i--){
                    res[i][c_controller ] = Prime_num[iter++] ;
                }

                c_controller++ ;

            }
        }

        printf("Test %d:\n", j) ;
        
        for (int i = 0; i < num; i++){    
            for (int j = 0; j < num; j++){    
                printf("%d ", res[i][j]) ;    
            }    
            printf("\n") ;     
        }
    }
    
}