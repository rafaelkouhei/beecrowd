#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Hello, World!\n");
	int a, b, c, greatest;
	printf("Insert the first number:\n");
	scanf("%d", &a);

	printf("Insert the second number:\n");
	scanf("%d", &b);

	printf("Insert the third number:\n");
	scanf("%d", &c);

	greatest = (a + b + abs(a - b)) / 2;

	greatest = (c + greatest + abs(c - greatest)) / 2;

	printf("The greatest number is: %d\n", greatest);

	return 0;
}