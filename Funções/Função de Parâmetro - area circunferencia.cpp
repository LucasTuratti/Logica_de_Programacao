#include<stdio.h>

float calculo(float r)
{
	float area;
	area = 3.14*(r*r);
	return(area);
}

int main()
{
	float area,r;
	
	printf("Entre com o raio da circunferencia: ");
	scanf("%f",&r);
	
	area = calculo(r);
	
	printf("Area da circunferencia: %f", area);
}
