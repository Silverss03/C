#include <stdio.h>

long long GCD(long long a, long long b){
	if(b == 0) return a ; 
	return GCD(b, a%b) ;
}

long long LCM(long long a, long long b){
	return (a*b)/ GCD(a,b) ;
}

int main(){
	int tests ;
	scanf("%d", &tests) ;
	while(tests--){
		long long n , m , i ; 
		scanf("%lld %lld", &n, &m) ;
		if (n == m) printf("%lld\n", LCM(n,m)) ;
		else{
			long long res = LCM(n, n + 1) ;
			for(i = n + 2; i <= m ; i++){
				res = LCM(res, i) ;
			}
			printf("%lld\n", res) ;
		}
	}
}
