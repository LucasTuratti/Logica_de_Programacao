#include <stdio.h>

int main() 
{
    int matriz[3][3], somaPositivos=0, somaNevativos=0;

    for(int i =0; i<3; i++)
	{
        for(int j=0;j<3;j++)
		{
            printf("Escreve o valor da linha %d, coluna %d: ", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i =0; i<3; i++)
	{
        for(int j=0;j<3;j++)
		{
            if(matriz[i][j] >= 0)
            {
                somaPositivos++;
            }
            else
			{
                somaNevativos++;
            }
            printf("\nMatriz[%d][%d] = %d", i,j, matriz[i][j]);
        }
    }
    
    printf("\nSoma dos numeros positivos: %d", somaPositivos);
    printf("\nSoma dos numeros negativos: %d", somaNevativos);
}
