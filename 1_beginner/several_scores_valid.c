#include <stdio.h>

int main(){
	short x = 1, v1 = 0, v2 = 0, v3 = 0;
	float score_1 = 0.0, score_2 = 0.0, avg = 0.0;
	printf("Hello, World!\n");

	while(x == 1){
		v3 = 0;

		while(v1 == 0){
			printf("Insert the first score:\n");
			scanf("%f", &score_1);
			v1 = ((score_1 >= 0 && score_1 <= 10) ? 1 : 0);
			if(v1 == 0){
				printf("nota invalida\n");
			}
		}

		while(v2 == 0){
			printf("Insert the second score:\n");
			scanf("%f", &score_2);
			v2 = ((score_2 >= 0 && score_2 <= 10) ? 1 : 0);
			if(v2 == 0){
				printf("nota invalida\n");
			}
		}

		printf("media = %.2lf\n", (score_1+score_2)/2);

		while(v3 == 0){
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%hd", &x);
			v3 = ((x == 1 | x == 2) ? 1 : 0);
		}

		v1 = 0;
		v2 = 0;
		score_1 = 0.0;
		score_2 = 0.0;
		avg = 0.0;
	}

	return 0;
}