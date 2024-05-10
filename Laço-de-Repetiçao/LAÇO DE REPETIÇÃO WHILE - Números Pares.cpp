#include<stdio.h>

int main()
{
	int x=1;
	int cont=0;
	
	while(x<=30)
	{
		if(x%2==0)
		{
			cont++;
		}
		x++;
    }
    printf("Quantidade de numero par: %d\n", cont);
}
