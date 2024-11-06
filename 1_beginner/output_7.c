#include <stdio.h>

int main(){
	int n = 97;

	printf("Hello, World!\n");

	for(int i = 0; i < 26; i++){
		int x = (char)n;
		printf("%d and %c\n", n, x);
		n++;
	}

	return 0;
}