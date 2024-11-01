#include <stdio.h>

int main(){
	int n = 0, lowest = 0, index = 0;
	printf("Hello, World!\n");

	printf("Insert the array length:\n");
	scanf("%d", &n);

	int x[n];

	for(int i = 0; i < n; i++){
		printf("Insert the array[%d] value:\n", i);
		scanf("%d", &x[i]);

		if(i == 0){
			lowest = x[i];
		} else {
			if(x[i-1] > x[i]){
				lowest = x[i];
				index = i;
			}
		}
	}

	printf("Lowest value: %d\nPosition: %d\n", lowest, index);

	return 0;
}