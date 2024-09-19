#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	double salary, raise, raise_p;
	int raise_int;

	printf("Insert the value:\n");
	scanf("%lf", &salary);

	if(salary<=400){
		raise_p = 0.15;
		raise_int = 15;
	} else if(salary > 400 && salary <= 800){
		raise_p = 0.12;
		raise_int = 12;
	} else if(salary > 800 && salary <= 1200){
		raise_p = 0.10;
		raise_int = 10;
	} else if(salary > 1200 && salary <= 2000){
		raise_p = 0.07;
		raise_int = 7;
	} else {
		raise_p = 0.04;
		raise_int = 4;
	};

	raise = salary * raise_p;

	printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", salary+raise, raise, raise_int);

	return 0;
}