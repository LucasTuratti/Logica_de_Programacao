#include <stdio.h>

int main() 
{
    int vetor[10];
    int soma = 0;
    float media;
    int maior, menor;

    
    for (int i = 0; i < 10; i++) 
	{
        printf("Digite 10 valores inteiros:");;
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
        
        if (i == 0) 
		{
            maior = vetor[i];
            menor = vetor[i];
        }
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
     media = soma / 10.0;

    
    printf("\nMedia dos elementos: %.2f\n", media);
    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);
}
