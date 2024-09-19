#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int n = 0;

	printf("Insert the value:\n");
	scanf("%d", &n);

	if(n > 1 && n < 10000){
		for(int i = 2; i < 10000; i++){
			if(i%n == 2){
				printf("%d\n", i);
			}
		}
	}

	return 0;
}