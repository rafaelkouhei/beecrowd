#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int distance, minutes;

	printf("Insert the distance:\n");
	scanf("%d", &distance);

	minutes = distance * 2;

	printf("%d minutos\n", minutes);

	return 0;
}