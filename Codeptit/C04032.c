#include <stdio.h>
#include <string.h>

int check(int number){
	int tmp = number % 10 ;
	number /= 10 ;
	while (number > 0){
		if(tmp < number % 10) return 0 ;
		tmp = number % 10 ;
		number /= 10 ;
	}
	return 1 ;
}

void sort(int A[], int B[], int num){
	int i, j ;
	for(i = 0 ; i < num ; i++){
		for(j = i + 1 ; j < num ; j++){
			if(B[i] < B[j]){
				int tmp1 = B[i] ;
				int tmp2 = A[i] ;
				B[i] = B[j] ;
				A[i] = A[j] ;
				B[j] = tmp1 ;
				A[j] = tmp2 ;
			}
		}
	}
}

int main(){
	int arr[100001], i = 0, j , k,  res[100001], A[100001], B[100001], controller = 0, count = 0; 
	while (scanf("%d", &arr[i]) != -1){
		if(check(arr[i]) == 1) res[count++] = arr[i] ;
		i++ ;
	}
	for(i = 0 ; i < count ; i++){
		int out = 1, condition = 0 ;
		for(j = i + 1 ; j < count ; j++){
			if(res[i] == res[j]) out++ ;
		}
		for(k = 0 ; k < i ; k++){
			if(res[k] == res[i]) condition = 1;
		}
		if(condition == 0){
			A[controller] = res[i] ;
			B[controller++] = out ; 
		} 
	}
	sort(A , B , controller) ;
	for( i = 0 ; i < controller ; i++){
		printf("%d %d\n", A[i] , B[i]) ;
	}
}