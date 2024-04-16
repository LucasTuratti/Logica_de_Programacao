#include<stdio.h>

int main()
{
	int anonascimento, anoatual, idade, semana, dia, mes;
	
	printf("Insira o ano de nascimento: ");
	scanf("%i", &anonascimento);
	
	printf("Insira o ano atual: ");
	scanf("%i", &anoatual);
	
	idade = anoatual - anonascimento;
	mes = idade * 12;
	semana = idade * 48;
	dia = idade * 365;
	
	printf("\nSua idade em %i anos, %i meses, %i semanas, %i dias", idade, mes, semana, dia);
}
