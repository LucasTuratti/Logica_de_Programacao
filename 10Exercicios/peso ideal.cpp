#include<stdio.h>

main()
{
	float pesoidealh, pesoidealm, altura, pesoideal;
	char sexo;
	
	printf("Insira seu sexo (m ou h): ");
	scanf("%c" ,&sexo);
	
	printf("Insira altura: ");
	scanf("%f" ,&altura);
	
	
 if (sexo == 'h' || sexo == 'H') 
 {
        pesoideal = 72.7 * altura - 58;
        printf("\nO peso ideal: %.2f", pesoideal);
    }
	
	else if(sexo == 'm' || sexo == 'M')
	{
		pesoideal = (62.1 * altura) - 44,7;
		printf("\nO peso ideal: %.2f",pesoideal);
	}
	else
	{
		printf("\nOpcao invalida.");
	}
}
	
