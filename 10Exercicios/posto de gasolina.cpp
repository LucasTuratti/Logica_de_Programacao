#include<stdio.h>

int main()
{
	float litros, valortotal, gasolina, alcool;
    char combustivel;
	
	printf("Digite o numero de litros vendidos: ");
	scanf("%f", &litros);
	
	printf("Digite gasolina ou alcool( G para gasolina e A para alcool): ");
	scanf("%s",&combustivel);
	
	gasolina = 5.39;
	alcool = 3.39;
	
	if(combustivel == 'A')
	{
		if(litros <= 20)
		{
			valortotal = litros * (alcool * 0.97);
			printf("O valor a ser pago sera %.2f por %.2f litros de %c", valortotal,litros,combustivel);
		}
		else
		{
			valortotal = litros * (alcool * 0.95);
			printf("O valor a ser pago sera %.2f por %.2f litros de %c", valortotal,litros,combustivel);
		}
	}
	else if(combustivel == 'G')
	{
	    if(litros <= 20)
	    {
	    	valortotal = litros * (gasolina * 0.96);
			printf("O valor a ser pago sera %.2f por %.2f litros de %c", valortotal,litros,combustivel);
		}
		else
		{
			valortotal = litros * (gasolina * 0.94);
			printf("O valor a ser pago sera %.2f por %.2f litros de %c", valortotal,litros,combustivel);
		}
    }
	else
	{
		printf("\nOpcao invalida.");
		}	
}
