#include <stdio.h>
#include <math.h>

int main(){
	printf("Hello, World!\n");
	int i = 0, count = 0;
	float a[] = {0, 0, 0, 0, 0, 0};

	while(i < 5){
		printf("Insert the value %d:\n", i+1);
		scanf("%f", &a[i]);
		i++;
	}

	for (i = 0; i < 5; i++){
		if(fmod(a[i], 2) == 0){
			count++;
		}
	}

	printf("%d even numbers\n", count);

	return 0;
}