#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Hello, World!\n");
	int cod_1, cod_2, qty_1, qty_2;
	float price_1, price_2, total;

	printf("Insert the 1st product cod:\n");
	scanf("%d", &cod_1);
	printf("Insert the 1st product quantity:\n");
	scanf("%d", &qty_1);
	printf("Insert the 1st product price:\n");
	scanf("%f", &price_1);

	printf("Insert the 2nd product cod:\n");
	scanf("%d", &cod_2);
	printf("Insert the 2nd product quantity:\n");
	scanf("%d", &qty_2);
	printf("Insert the 2nd product price:\n");
	scanf("%f", &price_2);

	total = qty_1*price_1 + qty_2*price_2;
	printf("VALOR A PAGAR: R$ %.2lf\n", total);

	return 0;
}
