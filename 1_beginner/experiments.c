#include <stdio.h>

int main(){
	printf("Hello, World!\n");

	int tests = 0, frog = 0, rat = 0, rabbit = 0, total = 0;
	float frog_share, rat_share, rabbit_share;

	printf("Insert the test amount:\n");
	scanf("%d", &tests);

	for(int i = 0; i < tests; i++){
		int temp = 0;
		char animal;

		printf("Insert the animal quantity and type:\n");
		scanf("%d %c", &temp, &animal);

		if(animal == 'S'){
			frog += temp;
			total += temp;
		} 
		if(animal == 'R'){
			rat += temp;
			total += temp;
		}
		if(animal == 'C'){
			rabbit += temp;
			total += temp;
		}
	}

	frog_share = (frog + 0.00)/ (total + 0.00) * 100;
	rat_share = (rat + 0.00) / (total + 0.00) * 100;
	rabbit_share = (rabbit + 0.00) / (total + 0.00) * 100;

	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", rabbit);
	printf("Total de ratos: %d\n", rat);
	printf("Total de sapos: %d\n", frog);
	printf("Percentual de coelhos: %.2lf %%\n", rabbit_share);
	printf("Percentual de ratos: %.2lf %%\n", rat_share);
	printf("Percentual de sapos: %.2lf %%\n", frog_share);

	return 0;
}