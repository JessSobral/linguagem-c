#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float a,b,c,x1,x2,delta;
	
	printf ("EQUA��O DO SEGUNDO GRAU\n");
	printf ("Entre com o valor de A:");
	scanf  ("%f", &a);
	printf ("Entre com o valor de B:");
	scanf  ("%f", &b);
	printf ("Entre com o valor de C:");
	scanf  ("%f", &c);
	
	if (a!=0)
	{
		delta=(b*b-(4*a*c));
		
		if ((delta)<0)
		{
			printf ("A equa��o n�o tem solu��o!");
	    }
	    
	    else
		if ((delta)==0)
		{
			x1=((-b)/2*a);
			x2=x1;
			printf ("A equa��o tem duas ra�zes e iguais:\n x1:\n %f\n x2:\n %f", x1,x2);
		}
		
		else
		{
			x1=((-b+sqrt(delta))/(2*a));
			x2=((-b-sqrt(delta))/(2*a));
			printf ("A equa��o tem duas ra�zes reais e diferentes:\n x1:\n %f\n x2:\n %f", x1, x2);
		}	
	}
	
	else
    {
	printf ("N�o � uma equa��o de segundo grau!");
    }
    
    getch();
    return 0;
}
