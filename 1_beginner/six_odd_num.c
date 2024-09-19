#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int n = 0, a[6] = {}, valid = 0;

	printf("Insert the value:\n");
	scanf("%d", &n);

	while(valid == 0){
		int i = 0;

		if(n%2 != 0){
			a[i] = n;
			printf("%d\n", n);
		}
		
		if(a[5] != 0){
			printf("Program finished\n");
			valid = 1;
		}

	}

	return 0;
}