#include <stdio.h>

int main(){
	double x = 0, y = 0, z = 0;

	printf("Hello, World!\n");

	printf("Insert the x and y values:\n");
	scanf("%lf %lf", &x, &y);

	z = (x + 100) * (y / 100 + 1) - 100;

	printf("%.6lf\n", z);

	return 0;
}