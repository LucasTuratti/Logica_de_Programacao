#include<stdio.h>

int main()
{
	float fahrenheit, graus;
	
	printf("Insira a temperatura em graus celsius: ");
	scanf("%f",&graus);
	
	fahrenheit = (graus*1.8+32);
	
	printf("\nEssa temperatura em fahrenheit: %.2f", fahrenheit);
}
