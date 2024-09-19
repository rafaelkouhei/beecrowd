#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int a = 0, b = 0, c = 0, d = 0;

	printf("Insert the value a:\n");
	scanf("%d", &a);
	printf("Insert the value b:\n");
	scanf("%d", &b);
	printf("Insert the value c:\n");
	scanf("%d", &c);
	printf("Insert the value d:\n");
	scanf("%d", &d);

	if(b > c && d > a && c+d > a+b && c > 0 && d > 0 && a%2 == 0){
		printf("Valores aceitos\n");
	} else {
		printf("Valores nao aceitos\n");
	}

	return 0;
}