#include<stdio.h>

int main()
{
	float salarioatual, salarionovo;
	
	printf("Insira o salario atual: ");
	scanf("%f", &salarioatual);
	
	salarionovo = salarioatual * 1.25;
	
	printf("\nO novo salario sera de: $%.2f", salarionovo);
}
