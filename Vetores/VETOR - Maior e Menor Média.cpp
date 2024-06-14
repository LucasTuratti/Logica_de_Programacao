#include <stdio.h>

int main() {
    int vetor[10]; // Declara��o de um vetor para armazenar os 10 elementos
    int i; // Declara��o de uma vari�vel de controle para os loops
    int maior, menor; // Declara��o de vari�veis para armazenar o maior e menor elemento do vetor
    float soma = 0.0, media; // Declara��o de vari�veis para a soma dos elementos e para a m�dia

    // Leitura dos elementos
    printf("Digite 10 elementos:\n");
    for(i = 0; i < 10; i++) 
	{ 
        printf("Elemento %d: ", i + 1); // Solicita ao usu�rio que insira o elemento na posi��o i
        scanf("%d", &vetor[i]);  // L� o elemento inserido pelo usu�rio e armazena no vetor na posi��o i
        soma += vetor[i]; // Soma o elemento lido ao total da soma
    }

    // Inicializa as vari�veis maior e menor com o primeiro elemento do vetor
    maior = vetor[0];
    menor = vetor[0];

    // Determina o maior e o menor elemento do vetor
    for(i = 1; i < 10; i++) {
        
        if(vetor[i] > maior) // Se o elemento atual do vetor for maior que a vari�vel maior, atualiza maior
		{
            maior = vetor[i];
        }
       
        if(vetor[i] < menor) // Se o elemento atual do vetor for menor que a vari�vel menor, atualiza menor
		{
            menor = vetor[i];
        }
    }

    // Calcula a m�dia dos elementos do vetor
    media = soma / 10;

    // Exibe os resultados
    printf("Media dos elementos: %.2f\n", media); // Exibe a m�dia com duas casas decimais
    printf("Maior elemento: %d\n", maior); // Exibe o maior elemento
    printf("Menor elemento: %d\n", menor); // Exibe o menor elemento

}

