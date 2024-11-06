#include <stdio.h>

int main(){
	int cup[4] = {};

	printf("Hello, World!\n");

	printf("Insert the bean's position:\n");
	scanf("%d %d %d %d", &cup[0], &cup[1], &cup[2], &cup[3]);

	for(int i = 0; i < 4; i++){
		if(cup[i] == 1){
			printf("%d\n", i+1);
		}
	}

	return 0;
}