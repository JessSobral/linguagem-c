#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a,b,c;
	
	printf ("N�MEROS DIV�SIVEIS POR 4 OU 5\n");
	printf ("Entre com o primeiro n�mero:");
	scanf  ("%d", &a);
	printf ("Entre com o segundo n�mero:");
	scanf  ("%d", &b);
	printf ("Entre com o terceiro n�mero:");
	scanf  ("%d", &c);
	
	if (((a%4==0)||(a%5==0))||((b%4==0)||(b%5==0))||((c&4==0)||(c%5==0)))
	{
		if ((a%4==0)||(a%5==0))
		{
			printf ("N�mero div�sivel por 4 ou 5: %d\n", a);
		}
		
		if ((b%4==0)||(b%5==0))
		{
			printf ("N�mero div�sivel por 4 ou 5: %d\n", b);
		}
		
		if ((c%4==0)||(c%5==0))
		{
			printf ("N�mero div�sivel por 4 ou 5: %d", c);
		}
	}
	
	else
	{
		printf ("N�o foi digitado nenhum n�mero div�sivel por 4 ou 5!");
	}
	
	getch();
	return 0;
}
