#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int region = 0;

	printf("Insert the value:\n");
	scanf("%d", &region);

	if(region == 61){
		printf("Brasilia\n");
	} else if(region == 71){
		printf("Salvador\n");
	} else if(region == 11){
		printf("Sao Paulo\n");
	} else if(region == 21){
		printf("Rio de Janeiro\n");
	} else if(region == 32){
		printf("Juiz de Fora\n");
	} else if(region == 19){
		printf("Campinas\n");
	} else if(region == 27){
		printf("Vitoria\n");
	} else if(region == 31){
		printf("Belo Horizonte\n");
	} else {
		printf("DDD nao cadastrado\n");
	}

	return 0;
}