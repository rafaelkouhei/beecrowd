#include <stdio.h>

int main(){
	int x = 0, y = 0;
	float z = 0.00;

	printf("Hello, Wolrd!\n");

	printf("Insert the x and y values:\n");
	scanf("%d %d", &x, &y);

	z = (float)x / (float)y;

	printf("%.2lf\n", z);

	return 0;
}