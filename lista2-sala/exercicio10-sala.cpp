#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a,b,c,d,e;
	
	printf ("DENTRE 5 N�MEROS, O MAIOR E MENOR\n");
	printf ("Entre com o primeiro n�mero:");
	scanf  ("%d", &a);
	printf ("Entre com o segundo n�mero:");
	scanf  ("%d", &b);
	printf ("Entre com o terceiro n�mero:");
	scanf  ("%d", &c);
	printf ("Entre com o quarto n�mero:");
	scanf  ("%d", &d);
	printf ("Entre com o quinto n�mero:");
	scanf  ("%d", &e);

if ((a>=b)&&(a>=c)&&(a>=d)&&(a>=e))
{
	printf ("N�mero maior: %d", a);
}

else
if ((b>=a)&&(b>=c)&&(b>=d)&&(b>=e))
{
	printf ("N�mero maior: %d", b);
}

else
if ((c>=a)&&(c>=b)&&(c>=d)&&(c>=e))
{
	printf ("N�mero maior: %d", c);
}

else
if ((d>=a)&&(d>=b)&&(d>=c)&&(d>=e))
{
	printf ("N�mero maior: %d", d);
}

else
if ((e>=a)&&(e>=b)&&(e>=c)&&(e>=d))
{
	printf ("N�mero maior: %d", e);
}

if ((a<=b)&&(a<=c)&&(a<=d)&&(a<=e))
{
	printf ("N�mero menor: %d", a);
}

else
if ((b<=a)&&(b<=c)&&(b<=d)&&(b<=e))
{
	printf ("N�mero menor: %d", b);
}

else
if ((c<=a)&&(c<=b)&&(c<=d)&&(c<=e))
{
	printf ("N�mero menor: %d", c);
}

else
if ((d<=a)&&(d<=b)&&(d<=c)&&(d<=e))
{
	printf ("N�mero menor: %d", d);
}

else
if ((e<=a)&&(e<=b)&&(e<=c)&&(e<=d))
{
	printf ("N�mero menor: %d", e);
}

getch ();
return 0;

}

