#include <stdio.h>

int main() {
    int vetor[10]; // Declaração de um vetor para armazenar os 10 elementos
    int i; // Declaração de uma variável de controle para os loops
    int maior, menor; // Declaração de variáveis para armazenar o maior e menor elemento do vetor
    float soma = 0.0, media; // Declaração de variáveis para a soma dos elementos e para a média

    // Leitura dos elementos
    printf("Digite 10 elementos:\n");
    for(i = 0; i < 10; i++) 
	{ 
        printf("Elemento %d: ", i + 1); // Solicita ao usuário que insira o elemento na posição i
        scanf("%d", &vetor[i]);  // Lê o elemento inserido pelo usuário e armazena no vetor na posição i
        soma += vetor[i]; // Soma o elemento lido ao total da soma
    }

    // Inicializa as variáveis maior e menor com o primeiro elemento do vetor
    maior = vetor[0];
    menor = vetor[0];

    // Determina o maior e o menor elemento do vetor
    for(i = 1; i < 10; i++) {
        
        if(vetor[i] > maior) // Se o elemento atual do vetor for maior que a variável maior, atualiza maior
		{
            maior = vetor[i];
        }
       
        if(vetor[i] < menor) // Se o elemento atual do vetor for menor que a variável menor, atualiza menor
		{
            menor = vetor[i];
        }
    }

    // Calcula a média dos elementos do vetor
    media = soma / 10;

    // Exibe os resultados
    printf("Media dos elementos: %.2f\n", media); // Exibe a média com duas casas decimais
    printf("Maior elemento: %d\n", maior); // Exibe o maior elemento
    printf("Menor elemento: %d\n", menor); // Exibe o menor elemento

}

