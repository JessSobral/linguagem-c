#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	int v1,v2,d;
	
	printf ("DIFEREN�A ENTRE DOIS N�MEROS\n");
	printf ("Entre com o valor 1:");
	scanf  ("%d", &v1);
	printf ("Entre com o valor 2:");
	scanf  ("%d", &v2);
	
	if (v1>v2)
	{
		d=v1-v2;
		printf ("A diferen�a entre os dois valores: %d", d);
	}
	
	else
	{
		d=v2-v1;
		printf ("A diferen�a entre os dois valores: %d", d);
	}
	
	getch ();
	return 0;
}
