#include <stdio.h>
#include <string.h>

int main(){
	int x = 0;

	printf("Hello, World!\n");

	printf("Insert how many divers will compete:\n");
	scanf("%d", &x);

	for(int i = 0; i < x; i++){
		char name[20] = {};
		float d = 0.0, score[7] = {}, s = 0.00, min = 0.00, max = 0.00;

		printf("Insert the diver's name:\n");
		scanf("%s", name);

		printf("Insert the difficulty:\n");
		scanf("%f", &d);

		printf("Insert the 7 scores:\n");
		scanf("%f %f %f %f %f %f %f", &score[0], &score[1], &score[2], &score[3], &score[4], &score[5], &score[6]);

		for(int i = 0; i < 7; i++){
			s += score[i];
			if(score[i] > max){
				max = score[i];
			}
			if(min == 0.00){
				min = score[i];
			} else if(score[i] < min){
				min = score[i];
			}
		}

		s = (s - min - max) * d;

		printf("%s %.2lf\n", name, s);

	}

	return 0;
}