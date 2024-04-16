#include<stdio.h>

int main()
{
	float numeroconta,saldo, debito, credito, saldoatual;
	
	printf("Insira o numero da sua conta: ");
	scanf("%f", &numeroconta);
	
	printf("Qual o seu saldo: ");
	scanf("%f", &saldo);
	
	printf("Insira seu debito: ");
	scanf("%f", &debito);
	
	printf("Insira seu credito: ");
	scanf("%f", &credito);
	
	saldoatual = saldo - debito + credito;
	
	if(saldoatual >= 0)
	{
		printf("\nSaldo Positivo.");
	}
	else
	{
		printf("\nSaldo Negativo.");
	}
}
