#include<stdio.h>

int main()
{
	int x=0;
	float peso,altura,imc, imcgeral;
	
	for(x=1 ; x<=3 ; x++)
{
	
	printf("\nEntre com seu peso: ");
	scanf("%f", &peso);
	
	printf("Entre com sua altura: ");
	scanf("%f", &altura);
	
	imc = peso/(altura*altura);
    
    if(imc<17)
    {
    	printf("\nMuito Abaixo do peso");
	}
	else if(imc>=17 && imc<=18.49)
    {
    	printf("\nAbaixo do peso");
	}
	else if(imc>=18.50 && imc<=24.99)
    {
    	printf("\nPeso Normal");
	}
	else if(imc>=25 && imc<=29.99)
    {
    	printf("\nAcima do peso");
	}
	else if(imc>=30 && imc<=34.99)
    {
    	printf("\nObesidade 1");
	}
	else if(imc>=35 && imc<=39.99)
    {
    	printf("\nObesidade 2");
	}
	else
	{
		printf("\nObesidade 3");
	}
	imcgeral = imcgeral+imc;
}
	printf("\nO imc geral: %.2f", imcgeral/3);
}
