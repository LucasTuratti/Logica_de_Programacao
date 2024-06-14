#include<stdio.h>

int main()
{
	int i=0;
    float salario, bonus;
    
    for(i=0; i<3; i++)
    {
    	printf("Entre com o salario: ");
    	scanf("%f", &salario);
    	
    	printf("Entre com a pontuacao bonus: ");
    	scanf("%f", &bonus);
    	
    	if(bonus>=1 && bonus<= 99)
    	{
    		printf("\nSalario final: $%.2f", salario + 25);
		}
		else if(bonus>=100 && bonus<= 499)
    	{
    		printf("\nSalario final: $%.2f", salario + 100);
		}
		else if(bonus>=500 && bonus<= 999)
    	{
    		printf("\nSalario final: $%.2f", salario + 300);
		}
		else
		{
			printf("\nSalario final: $%.2f", salario + 500);
		}
	}
}
