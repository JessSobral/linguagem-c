#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	float sb,sl,h,ad;
	
	printf ("SAL�RIO DOS FUNCION�RIOS\n");
	printf ("Entre com o sal�rio bruto:");
	scanf  ("%f", &sb);
	printf ("Entre com as horas trabalhadas:");
	scanf  ("%f", &h);
	
	if (h>160)
	{
		h=(h-160);
		ad=(sb/160)+(h*0.50);
		sb=(ad+sb);
	}
	
	if (sb<800.00)
	{
		sl=sb;
		printf ("O sal�rio liqu�do �: %f", sl);
	}
	
	else
	if ((sb>=800.00)&&(sb<=1600.00))
	{
		sl=(sb-(sb*0.13));
		printf ("O sal�rio liqu�do �: %f", sl);
	}
	
	else
	{
		(sb>1600.00);
		sl=(sb-(sb*0.22));
		printf ("O sal�rio liqu�do �: %f", sl);
	}
	
	getch ();
	return 0;
}
