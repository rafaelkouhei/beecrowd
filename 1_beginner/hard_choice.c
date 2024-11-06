#include <stdio.h>
#include <stdlib.h>

int main(){
	int x[3] = {}, y[3] = {}, z = 0;
	unsigned int test = 0;

	printf("Hello, World!\n");

	printf("Insert the available meal:\n");
	scanf("%d %d %d", &x[0], &x[1], &x[2]);

	printf("Insert the passangers choices:\n");
	scanf("%d %d %d", &y[0], &y[1], &y[2]);

	if(x[0] - y[0] <= 0){
		z+= abs(x[0] - y[0]);
	}
	if(x[1] - y[1] <= 0){
		z+= abs(x[1] - y[1]);
	}
	if(x[2] - y[2] <= 0){
		z+= abs(x[2] - y[2]);
	}

	printf("%d\n", z);

	return 0;
}