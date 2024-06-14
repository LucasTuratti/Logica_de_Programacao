#include <stdio.h>

int main() 
{
    float nota1, nota2, media, media_geral;
    media_geral = 0;
    
    for(int i=0; i<3; i++)
	{
        printf("\n-----------");
        printf("\nAluno %i", i+1);
        printf("\n-----------");
        printf("\nEntre com a nota 1: ");
        scanf("%f", &nota1);
        printf("Entre com a nota 2: ");
        scanf("%f", &nota2);
        media=(nota1+nota2)/2;
        printf("Media do aluno %d: %.2f",(i+1),media);
        media_geral=(media_geral+media)/(i+1);
        
    }
    printf("\nMedia geral da turma: %.2f", media_geral);
}
