#include <stdio.h>

int main(){
	int x[10] = {};
	printf("Hello, World!\n");

	printf("Insert the value:\n");
	scanf("%d", &x[0]);

	for(int i = 0; i < 10; i++){
		if(x[i] == 0){
			x[i] = x[i-1]*2;
		}
		printf("N[%d] = %d\n", i, x[i]);
	}
	return 0;
}