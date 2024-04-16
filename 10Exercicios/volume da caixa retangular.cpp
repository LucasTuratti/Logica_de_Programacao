#include<stdio.h>

int main()
{
	float volume, altura, comprimento, largura;
	
	printf("Insira a altura da caixa: ");
	scanf("%f", &altura);
	
	printf("Insira o comprimento da caixa: ");
	scanf("%f", &comprimento);
	
	printf("Insira a largura da caixa: ");
	scanf("%f", &largura);
	
	volume = comprimento * largura * altura;
	
	printf("\nO volume da caixa e de: %.2f", volume);
}
