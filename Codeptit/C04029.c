#include <stdio.h>

int main(){
	int num, arr[100], correct = 0, step = 1 ;
	scanf("%d", &num) ;
	for (int i = 0; i < num; i++){
		scanf("%d", &arr[i]) ;
	}
	while (correct == 0){
		int mistake = 0 ;
		for (int i = 0; i < num - 1; i++){
			if (arr[i] > arr[i + 1]){
				mistake++ ;
				int tmp = arr[i] ;
				arr[i] = arr[i + 1] ;
				arr[i + 1] = tmp ;
			}
		}
		if (mistake != 0){
			printf("Buoc %d: ", step) ;
			for (int i = 0; i < num; i++){
				printf("%d ",arr[i]) ;
			}
			printf("\n") ;
			step++ ;
		}
		else{
			correct = 1 ;
		}
	}
}