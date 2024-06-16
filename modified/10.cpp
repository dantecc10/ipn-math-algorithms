#include <stdio.h>
#include <math.h>
#include <conio.h>

int n;
float xi, xf, exact;

void impresion(int intento, float xi, float xf);
float deriv(float x);
float func(float x);


void enc() {
	printf("\n                       I.P.N. - E.S.I.M.E. - U.AZC.\n");
	printf("__________________________________________________________________________________________");
	printf("\nAlumnos Equipo M\n");
	printf("\n1 Alonso Sanchez Paulo Cesar                          Profesor: David D. Zamilpa\n");
	printf("\n18 Morales Marquez Osiel Patricio                     Bibliografia: M. Javier Rosas\n");
	printf("__________________________________________________________________________________________");
	printf("\n              Practica No. 2 - Metodo de la Tangente\n");
	printf("\n                     (UT-I.- Raices de Ecuaciones)\n");
	printf("__________________________________________________________________________________________");
	printf("\nDatos\nf(x)=(3x^2 - 18x +15)/5\n");
	printf("__________________________________________________________________________________________");
}

void datos() {
	printf("\n Indique el numero de aproximaciones: ");
	scanf("%d", &n);
	printf("\n Indique la exactitud deseada: ");
	scanf("%f", &exact);
	printf("\n Indique el punto de inicio: ");
	scanf("%f", &xi);
	printf("\nRESULTADO\n");
	printf("                  Intento        X(I)        X(I+1)\n");
	printf("              ---------------------------------------------\n");
}

void tangente() {
	int ban = 0;
	float a;
	int intento = 0;
	for (intento = 1; intento <= n; intento++) {
		xf = xi - (func(xi) / deriv(xi));
		a = fabs(xf - xi);
		impresion(intento, xi, xf);
		if (a <= exact) {
			printf("\n\n La Raiz es: %.6f encontrada en la iteracion numero %d \n", xf, intento);
			ban = 1;

			printf("\n__________________________________________________________________________________________");
			printf("\n                       Conclusion \n");
			printf("\n El metodo de la tangente, tambien conocido como el metodo de Newton, se presenta como una\n");
			printf("\n estrategia eficaz para encontrar raices de funciones, la cual se basa en la linealizacion de\n");
			printf("\n la funcion mediante la derivada en un punto, lo que permite una convergencia rapida hacia la \n");
			printf("\n solucion, su velocidad de convergencia es a menudo superior a la del metodo de biseccion, \n");
			printf("\n especialmente en situaciones donde se cuenta con una estimacion inicial cercana a la raiz.\n\n\n");
			break;
		}
		xi = xf;
	}
	if (ban == 0) {
		printf("\n\n  Raiz inexistente con las iteraciones propuestas");
	}
}

float func(float x) {
	return (0.6 * pow(x, 2) - 3.6 * x + 3);
}

float deriv(float x) {
	return (1.2 * x - 3.6);
}

void impresion(int intento, float xi, float xf) {
	printf("                 %-10d          %.6f         %.6f\n", intento, xi, xf);
}

int main() {
	enc();
	datos();
	tangente();
	printf("Presione una tecla para continuar...\n");
	getch();
	return 0;
}