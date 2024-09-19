#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int i = 0, positive = 0;
	float avg, sum, a[] = {0, 0, 0, 0, 0, 0};

	while(i < 6){
		printf("Insert the value %d:\n", i+1);
		scanf("%f", &a[i]);
		i++;
	}

	for(i = 0; i < 6; i++){
		if(a[i] > 0){
			positive++;
			sum += a[i];
		}
	}

	printf("%d positive numbers\n%.1lf\n", positive, sum/positive);
	return 0;
}