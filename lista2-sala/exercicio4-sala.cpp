#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	float a,b,c;
	
	printf ("TRI�NGULO\n");
	printf ("Entre com um lado de um tri�ngulo:");
	scanf  ("%f", &a);
	printf ("Entre com o outro lado do tri�ngulo:");
	scanf  ("%f", &b);
	printf ("Entre com o �ltimo lado do tri�ngulo:");
	scanf  ("%f", &c);
	
	if (a<(b+c)&&b<(a+c)&&c<(a+b))
	{
		if ((a==b)&&(b==c))
		{
			printf ("� um tri�ngulo equilatero!");
		}
		
		else
		if ((a==b)||(a==c)||(b==c))
		{
			printf ("� um tri�ngulo is�sceles!");
		}
		
		else
		{
			printf ("� um tri�ngulo escaleno!");
		}
	}
	
	else
	{
	printf ("N�o � um tri�ngulo!");
    }
    
	getch ();
	return 0;
	}
