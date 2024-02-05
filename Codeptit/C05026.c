#include <stdio.h>
#include <math.h>

int is_Primes(int num){
    if (num < 2) return 0 ;
    for (int i = 2; i <= sqrt(num); i++){
        if (num % i == 0) return 0 ;
    }
    return 1 ;
}
int main(){
    int num , max = 0, arr[100][100], condition = 0;
    scanf("%d", &num) ;
    for (int i = 1; i <= num; i++){
        int count = 0 ;
        for (int j = 1; j <= num; j++){
            scanf("%d", &arr[i][j]) ;
            if (is_Primes(arr[i][j])) count++ ;
        }
        if (count > max) max = count ;
    }
    for (int i = 1; i <= num; i++){
        int count = 0 ;
        for (int j = 1; j <= num; j++){
            if (is_Primes(arr[i][j])) count++ ;
        }
        if (count == max && condition == 0){
            printf("%d\n", i) ;
            for (int j = 1; j <= num; j++){
                if (is_Primes(arr[i][j])) printf("%d ", arr[i][j]) ;
            }
            condition = 1 ;
        } 
    }
}