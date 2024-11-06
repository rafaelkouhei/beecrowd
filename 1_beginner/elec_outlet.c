#include <stdio.h>

int main(){
	int t1 = 0, t2 = 0, t3 = 0, t4 = 0;

	printf("Hello, World!\n");

	printf("Insert the values:\n");
	scanf("%d %d %d %d", &t1, &t2, &t3, &t4);

	printf("%d\n", t1+t2+t3+t4 - 3);

	return 0;
}