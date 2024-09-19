#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int n, n1, n2, n2_rem, n5, n5_rem, n10, n10_rem, n20, n20_rem, n50, n50_rem, n100, n100_rem;

	printf("Insert the value:\n");
	scanf("%d", &n);

	n100 = n / 100;
	n100_rem = n % 100;
	n50 = n100_rem / 50;
	n50_rem = n100_rem % 50;
	n20 = n50_rem / 20;
	n20_rem = n50_rem % 20;
	n10 = n20_rem / 10;
	n10_rem = n20_rem % 10;
	n5 = n10_rem / 5;
	n5_rem = n10_rem % 5;
	n2 = n5_rem / 2;
	n2_rem = n5_rem % 2;
	n1 = n2_rem / 1;

	printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", n, n100, n50, n20, n10, n5, n2, n1);

	return 0;
}