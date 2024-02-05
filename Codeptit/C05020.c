#include <stdio.h>

void first_n_fibonacci(int n, int arr[]){
    arr[0] = 0, arr[1] = 1 ;
    int count = 1 ;
    while (count < n){
        count++;
        arr[count] = arr[count - 1] + arr[count - 2] ;
    }
    
}

int main(){
    int num, res[10][10], arr[1000], iter = 0 ;
    scanf("%d", &num) ;
    first_n_fibonacci(num*num,arr) ;
    int R = num, C = num, r_controller = 0, c_controller = 0 ;
    while (r_controller < R && c_controller < C){
        for (int i = c_controller; i < C; i++){
            res[r_controller][i] = arr[iter++] ;
        }
        r_controller++ ;
        for (int i = r_controller; i < R; i++){
            res[i][C - 1] = arr[iter++] ;
        }
        C-- ;
        if (r_controller < R){
            for (int i = C - 1 ; i >= c_controller; i--){
                res[R- 1][i] = arr[iter++] ;
            }
            R-- ;
        }
        if (c_controller < C){
            for (int i = R - 1; i >= r_controller; i--)
            {
                res[i][c_controller ] = arr[iter++] ;
            }
            c_controller++ ;
        }
        
    }
    for (int i = 0; i < num; i++){
        for (int j = 0; j < num; j++){
            printf("%d ", res[i][j]) ;
        }
        printf("\n") ;
    }
    
    
}