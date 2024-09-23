#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int n = 0;

	printf("Insert the value:\n");
	scanf("%d", &n);

	for(int i = 0; i < 12; i++){
		if((n + i)%2 != 0){
			printf("%d\n", n+i);
		}
	}

	return 0;
}