#include <stdio.h>
#include <math.h>

long long is_Prime(long long num){
	long long i ;
	if(num < 2) return 0 ;
	for(i = 2 ; i <= sqrt(num); i++){
		if(num % i == 0) return 0 ;
	}
	return 1 ;
}

int main(){
	int times ;
	scanf("%d", &times) ;
	while(times--){
		long long left, right, i, res = 0 ;
		scanf("%lld%lld", &left, &right) ;
		for(i = left; i*i <= right; i++){
			if(is_Prime(i) && i*i <= right){
				res++ ;
			}
		}
		printf("%lld\n", res) ;
	}
}
