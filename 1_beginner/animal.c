#include <stdio.h>
#include <string.h>

int main(){
	printf("Hello, World!\n");
	char group1[20], group2[20], group3[20];

	printf("Insert the first group:\n");
	scanf("%s", group1);
	printf("Insert the second group:\n");
	scanf("%s", group2);
	printf("Insert the third group:\n");
	scanf("%s", group3);

	if(strcmp(group1, "vertebrado") == 0 && strcmp(group2, "ave") == 0 && strcmp(group3, "carnivoro") == 0){
		printf("aguia\n");
	}
	if(strcmp(group1, "vertebrado") == 0 && strcmp(group2, "ave") == 0 && strcmp(group3, "onivoro") == 0){
		printf("pomba\n");
	}
	if(strcmp(group1, "vertebrado") == 0 && strcmp(group2, "mamifero") == 0 && strcmp(group3, "onivoro") == 0){
		printf("homem\n");
	}
	if(strcmp(group1, "vertebrado") == 0 && strcmp(group2, "mamifero") == 0 && strcmp(group3, "herbivoro") == 0){
		printf("vaca\n");
	}
	if(strcmp(group1, "invertebrado") == 0 && strcmp(group2, "inseto") == 0 && strcmp(group3, "hematofago") == 0){
		printf("pulga\n");
	}
	if(strcmp(group1, "invertebrado") == 0 && strcmp(group2, "inseto") == 0 && strcmp(group3, "herbivoro") == 0){
		printf("lagarta\n");
	}
	if(strcmp(group1, "invertebrado") == 0 && strcmp(group2, "anelideo") == 0 && strcmp(group3, "hematofago") == 0){
		printf("sanguessuga\n");
	}
	if(strcmp(group1, "invertebrado") == 0 && strcmp(group2, "anelideo") == 0 && strcmp(group3, "onivoro") == 0){
		printf("minhoca\n");
	}

	return 0;
}