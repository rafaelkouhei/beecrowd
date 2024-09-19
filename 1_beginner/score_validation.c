#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	float x = 0, y = 0, avg = 0;
	int v = 0;

	while(v == 0){
		float temp = 0;
		printf("Insert the value:\n");
		scanf("%f", &temp);
		if(temp < 0 || temp > 10){
			printf("nota invalida\n");
		} else {
			if(x == 0){
				x = temp;
			} else if(y == 0){
				y = temp;
			}
		}
		if(x != 0 && y != 0){
				v = 1;
			}
	}

	avg = (x+y)/2;

	printf("media = %.2lf\n", avg);

	return 0;
}