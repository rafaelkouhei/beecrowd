#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int distance;
	float spent_fuel, consumption;

	printf("Insert the distance:\n");
	scanf("%d", &distance);

	printf("Insert the spent fuel:\n");
	scanf("%f", &spent_fuel);

	consumption = distance / spent_fuel;

	printf("%.3lf km/l\n", consumption);

	return 0;
}