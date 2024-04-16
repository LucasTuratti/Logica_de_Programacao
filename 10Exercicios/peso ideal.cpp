#include<stdio.h>

main()
{
	float pesoidealh, pesoidealm, altura;
	char sexo;
	
	printf("Insira seu sexo (m ou h): ");
	scanf("%c" ,&sexo);
	
	printf("Insira altura: ");
	scanf("%f" ,&altura);
	
	
 if (sexo == 'h') 
 {
        pesoidealh = 72.7 * altura - 58;
        printf("\nO peso ideal para um homem: %.2f", altura, pesoidealh);
    }
	
	else
	{
		pesoidealm = (62.1 * altura) - 44,7;
		printf("\nSeu peso ideal: %.2f",pesoidealm);
	}
}
	
