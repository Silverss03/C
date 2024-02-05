#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int is_Primes(int num){
    if (num < 2) return 0 ;
    for (int i = 2; i*i <= num; i++){
        if (num % i == 0) return 0 ;
    }
    return 1 ;
}

int check_parts(int num){
    int res = 0 ;
    while (num > 0){
        int tmp = num % 10 ;
        if (is_Primes(tmp) == 0) return 0 ;
        res += tmp ; 
        num /= 10 ;
    }
    if (is_Primes(res) == 0) return 0 ;
    return 1 ;
}
int eratosthenes(int start, int end, int arr[]){
    bool check[32000] ;
    int count = 0, res = 0 ;
    for (int i = 2; i <= 32000; i++){
        check[i] = true ;
    }
    for (int i = 2; i <= 32000; i++){
        if (check[i] == true){
            arr[count++] = i ;
            for (int j = 2* i; j <= 32000; j += i){
                check[j] = false ;
            }
        }
    }
    for (int i = start; i <= end; i++){
        int condition = 0 ;
        for (int j = 0; arr[j] <= sqrt(i) ; j++){
            if (i % arr[j] == 0){
                condition = 1;
                break;
            }
        }
        if (condition == 0 && check_parts(i) == 1) res++ ;
    }
    printf("%d\n", res) ;
}
int main(){
    int test ;
    scanf("%d", &test) ;
    while (test--){
        int start, end, arr[10000] ;
        scanf("%d %d", &start, &end) ;
        eratosthenes(start, end, arr) ;
    }
    
}