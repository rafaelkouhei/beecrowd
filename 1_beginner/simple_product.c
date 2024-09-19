#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int x = 0, y = 0, PROD = 0;

	printf("Insert the x value:\n");
	scanf("%d", &x);
	printf("Insert the y value:\n");
	scanf("%d", &y);

	PROD = x * y;

	printf("PROD = %d\n", PROD);

	return 0;
}