#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int mn,a;
	
	printf ("MUDAN�A DE UM N�MERO NEGATIVO PARA POSITIVO E VICE-VERSA\n");
	printf ("Entre com um n�mero inteiro positivo ou negativo:");
	scanf  ("%d", &a);
	
	if (a>0)
	{
	mn=(a*(-1));
	printf ("N�mero negativo: %d", mn);
    }
    
    else
    {
    mn=(a*(-1));
    printf ("N�mero positivo: %d", mn);
	}
	
	getch();
	return 0;
}
