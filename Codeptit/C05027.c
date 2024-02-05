#include <stdio.h>

int main(){
    long long steps ,row_min = 10e6, col_min = 10e6 ;
    scanf("%lld", &steps) ;
    while (steps--){
        long long row, col ;
        scanf("%lld %lld", &row, &col) ;
        if (row < row_min ) row_min = row ;
        if (col < col_min) col_min = col ;
    }
    printf("%lld ", row_min * col_min) ;
}