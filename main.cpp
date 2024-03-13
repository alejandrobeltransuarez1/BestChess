/*
#include <stdio.h> 
#include <math.h> 
typedef struct
{
	float x;
	float y;
	float r1;
} point;

typedef struct
{
	float x1;
	float y1;
	float x2;
	float y2;
} distance;

float Length(point p1, point p2)
{
	float delta_x = p1.x - p2.x;
	float delta_y = p1.y - p2.y;
	float norma = delta_x * delta_x + delta_y * delta_y;
	float dist = sqrt(norma);
	return dist;
}

int crash(float d, point p1, point p2, point* p3)
{
	if (d <= p1.r1 + p2.r1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main(void)
{
	point p1, p2, p3;
	printf("Coordenadas p1:\n");
	scanf_s("%f %f", &p1.x, &p1.y);
	printf("Coordenadas p2\n");
	scanf_s("%f %f", &p2.x, &p2.y);

	printf("Longitud entre los dos puntos=%f\n", Length(p1, p2));
	printf("R p1:\n");
	scanf_s("%f", &p1.r1);
	printf("R p2:\n");
	scanf_s("%f", &p2.r1);
	int a = crash(Length(p1, p2), p1, p2, &p3);
	if (a == 1)
	{
		printf("Hay choque\n");
	}
	else
	{
		printf("No hay choque\n");
	}
}
*/