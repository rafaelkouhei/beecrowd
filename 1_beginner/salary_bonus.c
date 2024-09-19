#include <stdio.h>
#include <string.h>

int main(){
	printf("Hello, World!\n");
	char name[10];
	double fixed, sales, total;

	printf("Insert seller name:\n");
	scanf("%s", name);
	printf("%s\n", name);

	printf("Insert the fixed salary:\n");
	scanf("%lf", &fixed);
	printf("Insert the sellers's sales:\n");
	scanf("%lf", &sales);
	total = fixed + sales * 0.15;
	
	printf("TOTAL = R$ %.2lf\n", total);
	
	return 0;
}