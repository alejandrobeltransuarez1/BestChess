#include<stdio.h>
#include<math.h>ç
int main()
{
	int a, b, c;
	float d, e;
	do
	{
		printf("completa siguiente ecuacion: _x^2+_x+_=0\n");
		scanf_s("%d%d%d", &a, &b, &c);
		printf("la ecuacion seria %dx^2+%dx+%d=0\n", a, b, c);
		printf("no existe reices reales\nintroduzca los datos de nuevo");
	} while ((b * b - 4 * a * c) < 0);
	if ((b * b - 4 * a * c) >= 0)
		{

			d = (-b + sqrt(b * b - 4 * a * c)) / (a * 2);
			e = (-b - sqrt(b * b - 4 * a * c)) / (a * 2);
			printf("los resultad%f %f", d, e);

		}
	
}