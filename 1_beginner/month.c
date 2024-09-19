#include <stdio.h>
#include <string.h>

int main(){
	printf("Hello, World!\n");
	int i;
	char *a[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

	printf("Insert the value:\n");
	scanf("%d", &i);

	printf("%s\n", a[i-1]);

	return 0;
}