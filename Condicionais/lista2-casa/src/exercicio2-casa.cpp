#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int resposta,nc,nd;
	
	printf ("DIST�NCIA ENTRE DOIS N�MEROS\n");
	printf ("Entre com um n�mero inteiro entre 0 e 100:");
	scanf  ("%d", &nd);
	
	nc=20;
	
	if ((nd>=0)&&(nd<=100))
	{
	    resposta=(nd-nc);
	    
	    if (resposta <0)
	    resposta= resposta*(-1);
	    
		printf ("A dist�ncia entre os n�meros �: %d", resposta);	
	}
	
	else
	{
		printf ("N�mero digitado incorreto!");
	}
	
	getch ();
	return 0;
}
