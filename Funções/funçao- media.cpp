#include<stdio.h>

void media()
{
	float n1,n2;
	
	printf("Entre com a nota 1: ");
	scanf("%f", &n1);
	
	printf("Entre com a nota 2: ");
	scanf("%f", &n2);
	
	
	printf("Media: %f", n1+n2/2);
}

int main()
{
	media();
}
