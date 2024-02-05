#include <stdio.h>

long long GCD(long long a, long long b){
	if(b == 0) return a ;
	else return GCD(b, a%b) ;
}

long long LCM(long long a, long long b){
	return (a*b)/GCD(a,b) ;
}

int main(){
	int tests ;
	scanf("%d", &tests) ;
	while(tests--){
		int num ; 
		scanf("%d", &num) ;
		if(num < 2) printf("%lld\n", num) ;
		else{
			long long res = 1 , i;
			for(i = 1 ; i <= num ; i++ ){
				res = LCM(res,i) ;
			}
			printf("%lld\n", res) ;
		}
	}
}