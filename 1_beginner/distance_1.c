#include <stdio.h>
#include <math.h>

int main(){
	printf("Hello, World!\n");

	float x1, y1, x2, y2, distance;

	printf("Insert the x1:\n");
	scanf("%f", &x1);
	printf("Insert the y1:\n");
	scanf("%f", &y1);

	printf("Insert the x2:\n");
	scanf("%f", &x2);
	printf("Insert the y2:\n");
	scanf("%f", &y2);

	distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	printf("%.4lf\n", distance);

	return 0;
}