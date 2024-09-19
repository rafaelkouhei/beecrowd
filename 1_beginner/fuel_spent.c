#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int time, speed;
	float fuel;

	printf("Insert the trip duration in hours:\n");
	scanf("%d", &time);

	printf("Insert the average speed in km:\n");
	scanf("%d", &speed);

	fuel = time * speed / 12.0;

	printf("%.3lf\n", fuel);

	return 0;
}