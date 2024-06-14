#include<stdio.h>

void somar()
{
	float x,y;
	
	printf("Entre com o valor de x: ");
	scanf("%f", &x);
	
	printf("Entre com o valor de y: ");
	scanf("%f", &y);
	
	printf("Soma: %f", x+y);
}

int main()
{
	somar();
}
