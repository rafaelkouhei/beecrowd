#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int s1 = 0, s2 = 0, f1 = 0, f2 = 0, s = 0, f = 0, d = 0;

	printf("Insert the start hour:\n");
	scanf("%d", &s1);
	printf("Insert the start minute:\n");
	scanf("%d", &s2);
	printf("Insert the final hour:\n");
	scanf("%d", &f1);
	printf("Insert the final minute:\n");
	scanf("%d", &f2);

	s = s1*60 + s2;
	f = f1*60 + f2;
	d = f - s;

	if(d <= 0){
		d = d+1440;
	}

	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d/60, d%60);

	return 0;
}