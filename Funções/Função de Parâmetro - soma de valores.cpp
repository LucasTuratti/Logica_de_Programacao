#include<stdio.h>

void somar(float x, float y)
{
	float soma;
	soma= x+y;
	return(soma);
}

int main()
{
	float x,y,soma;
	
	printf("Entre com o valor de x: ");
	scanf("%f", &x);
	
    printf("Entre com o valor de y: ");
    scanf("%f", &y);
    
    soma= somar(x,y);
    
    printf("Valor da Soma: %f",soma);
}
