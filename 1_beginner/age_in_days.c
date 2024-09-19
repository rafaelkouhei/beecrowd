#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Hello, World!\n");
	int age;
	printf("Insert your agen in days:");
	scanf("%d", &age);
	// printf("You are %d days old!", age);
	
	int year = age / 365;
	int year_remain = age % 365;
	int month = year_remain / 30;
	int day = year_remain % 30;

	printf("You're %d year(s), %d month(s) and %d day(s) old!", year, month, day);
		
	return 0;
}
