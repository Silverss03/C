#include <stdio.h>
#include <string.h>

struct product{
	int ID ;
	char name[10000] ,type[10000] ;
	float price, sale , profit;
};

int main(){
	long long number, i ,j ;
	scanf("%lld\n", &number) ;
	struct product product[100] ,tmp;
	for(i = 0 ; i < number ; i++){
		product[i].ID = i + 1 ;
		gets(product[i].name) ;
		gets(product[i].type) ;
		if(i != number - 1) scanf("%f%f\n", &product[i].price, &product[i].sale) ;
		else scanf("%f%f", &product[i].price, &product[i].sale) ;
		product[i].profit = product[i].sale - product[i].price ;
	}
	for(i = 0; i < number ; i++){
		for(j = i + 1 ; j < number ; j++){
			if(product[j].profit > product[i].profit){
				tmp = product[j] ;
				product[j] = product[i] ;
				product[i] = tmp ;
			}
			if(product[i].profit == product[j].profit && product[i].ID > product[j].ID){
				tmp = product[j] ;
				product[j] = product[i] ;
				product[i] = tmp ;
			}
		}			
	}
	for(i = 0; i < number; i++){
		printf("%d %s %s %.2f\n", product[i].ID, product[i].name, product[i].type, product[i].profit) ;
	}
}
