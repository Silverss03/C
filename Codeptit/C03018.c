#include <stdio.h> 
#include <math.h>

int fibonacci(int ordinal){
    int a1 = 1, a2 = 1 ;
    if (ordinal == 1){
        return 0 ;
    }
    else if (ordinal == 2 || ordinal == 3){
        return 1 ;
    }
    int rank = 4, rank_num ;
    while (rank <= ordinal){
        rank_num = a1 + a2 ;
        a1 = a2 ;
        a2 = rank_num ;
        rank++ ;
    }
    return rank_num ;
}

int check_fibonacci(int num){
    int start = 1 ;
    while (num > fibonacci(start)){
        start++;
    }
    if (num == fibonacci(start)){
        return 1;
    }
    return 0 ;
}

int check_Prime(int num){
    if (num < 2){
        return 0 ;
    }
    
    for (int i = 2; i <= sqrt(num); i++){
        if (num % i == 0){
            return 0 ;
        }  
    }
    return 1 ;
}

int sum_parts(int num){
    int sum = 0 ;
    while (num > 0){
        sum += num % 10;
        num /= 10 ;
    }
    return sum ;
}

int main(){
    int num1, num2 ;
    scanf("%d %d", &num1, &num2) ;
    if (num1 > num2){
        for (int i = num2; i <= num1; i++){
            int num = sum_parts(i) ;
            if (check_Prime(i) == 1 && check_fibonacci(num) == 1){
                printf("%d ", i) ;
            }   
        }   
    }
    else{
        for (int i = num1; i <= num2; i++){
            int num = sum_parts(i) ;
            if (check_Prime(i) == 1 && check_fibonacci(num) == 1  ){
                printf("%d ", i) ;
            }   
        }          
    }
}