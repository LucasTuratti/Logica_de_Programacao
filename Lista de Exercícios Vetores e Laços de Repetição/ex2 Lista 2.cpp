#include <stdio.h>

int main() 
{
    float salarios[200];
    int filhos[200];
    float SomaSalarios = 0.0;
    int SomaFilhos = 0;
    float SalarioMaior = 0.0;

    
    for (int i = 0; i <=199; i++)
	{
        printf("\nDigite o salario da pessoa: ");
        scanf("%f", &salarios[i]);
        printf("Digite o numero de filhos da pessoa: ");
        scanf("%i", &filhos[i]);

        
        SomaSalarios += salarios[i];
        SomaFilhos += filhos[i];

        if (salarios[i] > SalarioMaior) 
		{
            SalarioMaior = salarios[i];
        }
    }

    printf("\nMedia de salario: %.2f", SomaSalarios/200);
    printf("\nMedia de filhos: %i", SomaFilhos/200);
    printf("\nMaior salario: %.2f", SalarioMaior);

}

