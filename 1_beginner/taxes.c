#include <stdio.h>
#include <string.h>

int main(){
	printf("Hello, World!\n");
    double income;

    printf("Insert the value:\n");
    scanf("%lf", &income);
    
    if(income <= 2000.00){
        printf("Isento\n");
    }else if (income >= 2000.01 && income <= 3000.00){
          printf("R$ %.2f\n", (income - 2000.00)*0.08);
    }else if (income >= 3000.01 && income <= 4500.00){
          printf("R$ %.2f\n", ((income - 3000.00)*0.18 + 1000.00*0.08));
    }else if (income >= 4500.01){
          printf("R$ %.2f\n", ((income - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08));
    }
    return 0;
}