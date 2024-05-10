#include <stdio.h>

int main() 
{
    int cont = 0; // Inicializa o contador de números pares

    for (int numero = 1; numero <= 30; numero++) // Loop de 1 a 30
	{
        if (numero % 2 == 0) 
		{ // Verifica se o número é par
            cont++; // Incrementa o contador se o número for par
        }
    }

    printf("A quantidade de números pares de 1 a 30 : %d", cont); // Imprime a quantidade de números pares
    return 0;
}

