#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	printf("Hello, World!\n");

	double radius, volume;

	printf("Insert the radius\n");
	scanf("%lf", &radius);

	volume = (4.0/3.0) * 3.14159 * pow(radius, 3);
	printf("VOLUME = %.3lf\n", volume);

	return 0;
}