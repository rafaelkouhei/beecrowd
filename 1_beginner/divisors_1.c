#include <stdio.h>

int main(){
	int x = 0;
	printf("Hello, World!\n");

	printf("Insert the value:\n");
	scanf("%d", &x);

	for(int i = 1; i <= x; i++){
		if(x%i == 0){
			printf("%d\n", i);
		}
	}

	return 0;
}