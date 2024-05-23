#include<stdio.h>

int main()
{
	int valores[20];
    int somavalores;
    float mediavalores;
	int i =0;
	int maior;
	int menor;
	
	printf("Escreva 20 valores");
	
	do
	{
		printf("\nEntre com algum numero: ");
		scanf("%i", &valores[i]);
		
		if (i == 0) {
            maior = valores[i];
            menor = valores[i];
        }
		
		somavalores += valores[i];
		
		if(valores[i] > maior)
		{
			maior = valores[i];
		}
		
		if(valores[i] < menor)
		{
			menor = valores[i];
		}
		i++;
	}
	while(i < 20);
	
	mediavalores = somavalores/20.0;
	
	printf("\nMaior valor: %i", maior); 
    printf("\nMenor valor: %i", menor);  
    printf("\nMedia dos valores: %.2f", mediavalores);  
}
