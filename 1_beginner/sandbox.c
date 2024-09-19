#include <stdio.h>
#include <math.h>

int main(){
	printf("Hello, World!\n");
	int a, n2, n5, n10, n20, n50, n100, m001, m005, m010, m025, m050, m1, n2_rem, n5_rem, n10_rem, n20_rem, n50_rem, n100_rem, m001_rem, m005_rem, m010_rem, m025_rem, m050_rem, m1_rem;
	double n;

	printf("Insert the value:\n");
	scanf("%lf", &n);
	a = n * 1000

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

	printf("NOTAS:\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\nMOEDAS:\n%d moeda(s) de R$ 1,00\n%d moeda(s) de R$ 0,50\n%d moeda(s) de R$ 0,25\n%d moeda(s) de R$ 0,10\n%d moeda(s) de R$ 0,05\n%d moeda(s) de R$ 0,01\n", n100, n50, n20, n10, n5, n2, m1, m050, m025, m010, m005, m001);
	return 0;
}