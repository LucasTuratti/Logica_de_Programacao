#include <stdio.h>

int main() 
{
    int vetor[10];
    
    for(int i = 0; i < 10; i++) 
	{
        printf("Digite o numero: ");
        scanf("%d", &vetor[i]);
    }

        printf("\nordem informada---------");
    for(int i = 0; i < 10; i++) 
	{
        printf("\nvetor[%d]: %d",i, vetor[i]);
    }

        printf("\nordem reversa---------");
    for(int i=10; i>0; i--)
	{
        printf("\nvetor[%d]: %d",i-1, vetor[i-1]);
    }
}
