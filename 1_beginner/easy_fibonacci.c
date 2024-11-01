#include <stdio.h>

int main(){
	short x = 0, f[47] = {0, 1};
	printf("Hello, World!\n");

	for(int i = 2; i < sizeof(f)/sizeof(f[0]); i++){
		f[i] = f[i-1]+f[i-2];
	}

	printf("Insert the value:\n");
	scanf("%hd", &x);

	for(int i = 0; i < x; i++){
		(x - 1 == i ? printf("%hd\n", f[i]) : printf("%hd ", f[i]));
	}

	return 0;
}