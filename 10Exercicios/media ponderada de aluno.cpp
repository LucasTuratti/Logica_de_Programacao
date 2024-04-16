#include<stdio.h>

int main()
{
	float mediafinal, n1, n2, n3;
		
	printf("Insira a nota 1: ");
	scanf("%f", &n1);
	
	printf("Insira a nota 2: ");
	scanf("%f", &n2);
	
	printf("Insira a nota 3: ");
	scanf("%f", &n3);
	
    mediafinal = (n1*2 + n2*3 + n3*5)/10;
    
    printf("\nA media final do aluno sera: %.2f", mediafinal);
}
