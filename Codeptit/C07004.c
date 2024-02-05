#include <stdio.h>

struct Fraction{
    long long numerator[2] ;
    long long denominator[2] ;
};

typedef struct Fraction Fraction ;

long long GCD(long long a, long long b){
    if (b == 0) return a ;
    else return GCD(b, (a % b)) ;
}

long long LCM(long long a, long long b){
    return (a*b)/GCD(a,b) ;
}

void simplify(long long *a, long long *b){
    int num = GCD(*a, *b) ;
    *a /= num ;
    *b /= num ;
} 

int main(){
    int test, time = 1 ;
    scanf("%d", &test) ;
    for (int i = 1; i <= test;i++ ){
        Fraction res ;
        scanf("%lld %lld %lld %lld", &res.numerator[1], &res.denominator[1], &res.numerator[2], &res.denominator[2]) ;
        simplify(&res.numerator[1], &res.denominator[1]) ;
        simplify(&res.numerator[2], &res.denominator[2]) ;
        long long new_denom = LCM(res.denominator[1], res.denominator[2]) ;
        long long new_num1 = res.numerator[1] * (new_denom / res.denominator[1]) ;
        long long new_num2 = res.numerator[2] * (new_denom / res.denominator[2]) ;
        printf("Case #%d:\n", i) ;
        printf("%lld/%lld %lld/%lld\n", new_num1 , new_denom, new_num2, new_denom  ) ;
        printf("%lld/%lld\n", new_num1 + new_num2, new_denom) ;
        long long new_num = res.numerator[1] * res.denominator[2] ;
        new_denom = res.numerator[2] * res.denominator[1] ;
        simplify(&new_num, &new_denom) ;
        printf("%lld/%lld\n", new_num, new_denom) ;
    }
    
    
}