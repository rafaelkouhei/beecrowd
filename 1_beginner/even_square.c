#include <stdio.h>

int main(){
	printf("Hello, World\n");
	int n = 0;

	printf("Insert the value:\n");
	scanf("%d", &n);

	if(n > 5 && n < 2000){
		for(int i = 1; i <= n; i++){
			if(i%2 == 0){
				printf("%d^2 = %d\n", i, i*i);
			}
		}
	}

	return 0;
}