#include<stdio.h>

int main()
{
	float horasemanal,semana, salariototal,salariohora, horaextra, horasmes, salarioextra, salario;
	
	printf("Insira o salario por hora: ");
	scanf("%f", &salariohora);
	
	printf("Insira as horas trabalhadas no mes: ");
	scanf("%f", &horasmes);
	
	horasemanal = 40;
	semana = 4;
	
	if(horasmes <= horasemanal * semana)
	{
		salarioextra = 0;
		salariototal = horasmes * salariohora;
		printf("\nSalario por hora: $%.2f \nSalario total: $%.2f \nHoras trabalhadas no mes: %.2f \nHora extra: %.2f \nSalarioextra: %.2f",salariohora, salariototal,horasmes,horaextra, salarioextra);
	}
	else
	{
		horaextra = horasmes - 160; 
		salarioextra = horaextra * (salariohora * 1.50);
		salariototal = (salariohora * (horasemanal * semana) + salarioextra); 
	}   printf("\nSalario por hora: $%.2f \nSalario total: $%.2f \nHoras trabalhadas no mes: %.2f \nHora extra: %.2f \nSalarioextra: %.2f",salariohora, salariototal,horasmes,horaextra, salarioextra);



}
