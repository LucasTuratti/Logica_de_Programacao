#include <stdio.h>

int main() 
{
    int vetorA[5];
    int vetorB[5];
    int vetorC[5];

    
    for (int i = 0; i < 5; i++) 
	{
        printf("\nDigite os valores do vetor A:");
        scanf("%d", &vetorA[i]);
    }

    for (int i = 0; i < 5; i++) 
	{
        printf("\nDigite os valores do vetor B:");
        scanf("%d", &vetorB[i]);
    }

    for (int i = 0; i < 5; i++) 
	{
        vetorC[i] = vetorA[i] + vetorB[i];
    }

    for (int i = 0; i < 5; i++) 
	{
        printf("VetorC[%d]: %d\n", i, vetorC[i]);
    }
}
