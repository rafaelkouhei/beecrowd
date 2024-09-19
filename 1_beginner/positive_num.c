#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int i = 0, count = 0;
	float a[] = {0, 0, 0, 0, 0, 0};

	while(i < 6){
		printf("Insert the value %d:\n", i+1);
		scanf("%f", &a[i]);
		i++;
	}

	for (i = 0; i < 6; i++){
		if(a[i] > 0){
			count++;
		}
	}

	printf("%d positive numbers\n", count);

	return 0;
}