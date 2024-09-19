#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int i, qty;
	double a[] = {4.00, 4.5, 5.00, 2.00, 1.50};
	float total;
	printf("Insert the first value:\n");
	scanf("%d", &i);
	printf("Insert the second value:\n");
	scanf("%d", &qty);
	i = i-1;

	total = a[i] * qty;

	if(i > 5){
		printf("Invalid product code provided...");
	} else {
		printf("Total: R$ %.2lf\n", total);
	}
	return 0;
}