#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a,b,c;
	
	printf ("N�MEROS DIV�SIVEIS POR 2 E POR 4\n");
	printf ("Entre com o primeiro n�mero:");
	scanf  ("%d", &a);
	printf ("Entre com o segundo m�mero:");
	scanf  ("%d", &b);
	printf ("Entre com o terceiro n�mero:");
	scanf  ("%d", &c);
	
	if (((a%2==0)&&(a%4==0))||((b%2==0)&&(b%4==0))||((c%2==0)&&(c%4==0)))
	{
		if ((a%2==0)&&(a%4==0))
		{
		   printf ("N�mero divis�vel por 2 e 4: %d\n", a);
		}
		
		if ((b%2==0)&&(b%4==0))
		{
			printf ("N�mero div�sivel por 2 e 4: %d\n", b);
		}
		
		if ((c%2==0)&&(c%4==0))
		{
			printf ("N�mero div�sivel por 2 e 4: %d", c);
		}
	}
	
	else
	{
		printf ("N�o foi digitado nenhum n�mero div�sivel por 2 e 4!");
	}
	
	getch();
	return 0;
}
