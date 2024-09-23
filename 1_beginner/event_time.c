#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int day_1 = 0, hour_1 = 0, minute_1 = 0, second_1 = 0, day_2 = 0, hour_2 = 0, minute_2 = 0, second_2 = 0;
	int duration_1_seconds = 0, duration_2_seconds = 0, day_diff = 0, total_duration = 0;

	printf("Insert the beginning date:\n");
	scanf(" Dia %d", &day_1);
	printf("Insert the beginning hour, minute and second:\n");
	scanf("%d : %d : %d", &hour_1, &minute_1, &second_1);

	printf("Insert the end date:\n");
	scanf(" Dia %d", &day_2);
	printf("Insert the end hour, minute and second:\n");
	scanf("%d : %d : %d", &hour_2, &minute_2, &second_2);

	duration_1_seconds = day_1*24*60*60 + hour_1*60*60 + minute_1*60 + second_1;
	duration_2_seconds = day_2*24*60*60 + hour_2*60*60 + minute_2*60 + second_2;
	total_duration = duration_2_seconds - duration_1_seconds;

	printf("duration 1: %d\nduration 2: %d\n", duration_1_seconds, duration_2_seconds);
	printf("total duration: %d\n", total_duration);

	printf("%d dia(s)\n", total_duration / (24*60*60));
	printf("%d hora(s)\n", (total_duration % (24*60*60)) / 3600);
	printf("%d minuto(s)\n", ((total_duration % (24*60*60))%3600) / 60);
	printf("%d segundo(s)\n", ((total_duration % (24*60*60))%3600)%60);

	return 0;
}