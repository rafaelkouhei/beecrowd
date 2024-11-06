#include <stdio.h>

int main(){
	float x = 0.0, y = 0.0, z = 0.0;

	printf("Hello, World!\n");

	printf("Insert the x and values:\n");
	scanf("%f %f", &x, &y);

	z = ((y - x) / x) * 100;

	printf("%.2lf%%\n", z);

	return 0;
}