#include <stdio.h>

int main() 
{
    int cont = 0; // Inicializa o contador de n�meros pares

    for (int numero = 1; numero <= 30; numero++) // Loop de 1 a 30
	{
        if (numero % 2 == 0) 
		{ // Verifica se o n�mero � par
            cont++; // Incrementa o contador se o n�mero for par
        }
    }

    printf("A quantidade de n�meros pares de 1 a 30 : %d", cont); // Imprime a quantidade de n�meros pares
    return 0;
}

