#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int a;
	
	printf ("N�MERO PAR OU IMPAR\n");
	printf ("Entre com um n�mero inteiro:");
	scanf  ("%d", &a);
	
	if (a%2==0)
	{
		printf ("%d � par!", a);
	}
	
	else
	{
		printf ("%d � impar!", a);
	}
	
	getch ();
	return 0;
}
