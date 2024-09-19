#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int time, hour, hour_rem, minute, minute_rem, second;

	printf("Insert the time in seconds:\n");
	scanf("%d", &time);
	hour = time / 3600;
	hour_rem = time % 3600;
	minute = hour_rem / 60;
	minute_rem = hour_rem % 60;

	printf("%d:%d:%d\n", hour, minute, minute_rem);

	return 0;
}