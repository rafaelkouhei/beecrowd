#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int n;

	printf("Insert the value:\n");
	scanf("%d", &n);

	if(1 <= n && n <= 1000){
		for(int i = 1; i < n && i<= 1000; i++){
			if(i%2 != 0){
				printf("%d\n", i);
			}
		}
	}
	return 0;
}