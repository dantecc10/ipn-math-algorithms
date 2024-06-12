#include <stdio.h>
#include <conio.h>
#include "math.h"

float func(float x) {
	float w;
	w = (3 * pow(x, 2) - 18 * x + 15) / 5;
	return w;
}

int metodo_biseccion_p8() {
	float a, b, pi, xint, exact, error;
	int i, n;
	char c;
inicio:
	printf("\n                       I.P.N. - E.S.I.M.E. - U.AZC.\n");
	printf("__________________________________________________________________________________________");
	printf("\nAlumnos Equipo M\n");
	printf("\n1 Alonso Sanchez Paulo Cesar                          Profesor: David D. Zamilpa\n");
	printf("\n18 Morales Marquez Osiel Patricio                     Bibliografia: M. Javier Rosas\n");
	printf("__________________________________________________________________________________________");
	printf("\n              Practica No. 1 - Metodo de la Biseccion Sucesiva\n");
	printf("\n                     (UT-I.- Raices de Ecuaciones)\n");
	printf("__________________________________________________________________________________________");
	printf("\nDatos\nf(x)=(3x^2 - 18x +15)/5\n");
	printf("__________________________________________________________________________________________");

	printf("\n\nTeclee el inicio del intervalo a: ");
	scanf("%f", &a);
	printf("Teclee el final del intervalo b: ");
	scanf("%f", &b);

	if ((func(a) * func(b)) > 0) {
		printf("\n\a\a En este intervalo propuesto no hay raiz");
		printf("\n\n Desea teclear otro intervalo (s/n):");
		c = getch();
		if (c == 's' || c == 'S')
			goto inicio;
		goto final;
	}
	printf("\nTeclea el margen de error= ");
	scanf("%f", &error);
	printf("Teclea el numero de iteraciones n= ");
	scanf("%d", &n);
	printf("\n Iteraciones raiz calculada, error\n");
	xint = a;

	for (i = 1; i <= n; i++) {
		pi = a + ((b - a) / 2);
		exact = fabs(pi - xint);
		if (exact > error) {
			if ((func(pi) * func(b)) > 0)
				b = pi;
			else
				a = pi;
		} else {
			printf("%d               %f              %f\n", i, pi, exact);
			printf("\n La raiz calculada es %f encontrada en la iteracion %d", pi, i);
			printf("\n__________________________________________________________________________________________");
			printf("\n                       Conclusion \n");
			printf("\n En esta practica pudimos realizar el metodo de la biseccion, el cual nos ayudo a encontrar la raiz de una ecuacion\n");
			printf("\n de una manera efectiva y simple al dividir sucesivamente el intervalo inicial en mitades y evaluar la funcion en cada\n");
			printf("\n subintervalo, el metodo converge rapidamente hacia la solucion deseada, ofreciendo una aproximacion precisa de la raiz.\n");
			printf("\nSin embargo, es importante considerar sus limitaciones, como la necesidad de un intervalo inicial lo suficientemente estrecho\n");
			printf("\n y la posible convergencia lenta en ciertos casos.");
			break;
		}
		printf("%d             %f            %f\n", i, pi, exact);
		xint = pi;
	}

	if (i > n) {
		printf("\n raiz inexistente en este numero de iteraciones ");
	}

final:
	printf("\n\n Desea calcular otra raiz (s/n):");
	c = getch();
	if (c == 's' || c == 'S')
		goto inicio;

	printf("\n\n Teclee <Enter> para continuar");
	getch();
	return 0;

}