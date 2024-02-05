#include <stdio.h>
#include <string.h>

int main(){
	int n, m, k ,i , j, l, pos[10000], space[10000], res = 0 ;
	scanf("%d %d %d", &n, &m , &k) ;
	for(i = 1 ; i <= n ;i++) space[i] = 0 ;
	for(i = 0 ; i < m ;i++){
		scanf("%d", &pos[i]) ;
		if(pos[i] - k >= 1) for(j = pos[i] - k ; j <= pos[i] ; j++) space[j] = 1; 
		else for(j = 1 ; j <= pos[i] ; j++) space[j] = 1;
		if(pos[i] + k <= n) for(j = pos[i] ; j <= pos[i] + k ; j++) space[j] = 1 ;
		else for(j = pos[i] ; j <= n ; j++) space[j] = 1;
	}
	for(i = 1 ; i <= n ; i++){
		if(space[i] == 0){
            printf("%d\n", i)  ;        
        }
	}
    printf("%d", res) ;
}