#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int a,b,c;
	
	printf ("ORDEM MAIOR, MENOR, MEIO\n");
	printf ("Entre com o primeiro n�mero inteiro:");
	scanf  ("%d", &a);
	printf ("Entre com o segundo n�mero inteiro:");
	scanf  ("%d", &b);
	printf ("Entre como terceiro n�mero inteiro:");
	scanf  ("%d", &c);
	
	if ((a>b)&&(a>c)&&(b>c))
	
		printf ("N�mero maior: %d\n N�mero menor: %d\n N�mero do meio: %d", a,c,b);
    
    
    if ((a>b)&&(a>c)&&(c>b))
    
        printf ("N�mero maior: %d\n N�mero menor: %d\n N�mero do meio: %d", a,b,c);
    
	
	if ((b>a)&&(b>c)&&(a>c))
	
		printf ("N�mero maior: %d\n N�mero menor: %d\n N�mero do meio: %d", b,c,a);
    
	
	if ((b>a)&&(b>c)&&(c>a))
	
		printf ("N�mero maior: %d\n N�mero menor: %d\n N�mero do meio: %d", b,a,c);
	
	
	if ((c>a)&&(c>b)&&(a>b))
    
        printf ("N�mero maior: %d\n N�mero menor: %d\n N�mero do meio: %d", c,b,a);
	
	
	if ((c>a)&&(c>b)&&(b>a))
	
		printf ("N�mero maior: %d\n N�mero menor: %d\n N�mero do meio: %d", c,a,b);
    
	
	getch ();
	return 0;
}
