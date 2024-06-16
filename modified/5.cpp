/* Método de Interpolación Lineal */
/* Con la función f(x)=2x^3-11x^2+12x+5 */

#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <windows.h>
#include <time.h>
#include <math.h>

float func(float x) {
	return 2 * pow(x, 3) - 11 * pow(x, 2) + 12 * x + 5;
}

int main() {
	float xi, xf, inc, fxi, fxf, c1, c2, i, pi, D;
	int j = 1;

	printf("\n                        I.P.N. - E.S.I.M.E. - U.AZC.\n");
	printf("__________________________________________________________________________________________");
	printf("\nAlumnos Equipo N\n");
	printf("\n04 Carrillo Mote Ingrit Alexia                             Profesor: David D. Zamilpa\n");
	printf("\n18 Morales Marquez Osiel Patricio                          Bibliografia: M. Javier Rosas\n");
	printf("\n24 Rodriguez Rodriguez Hiram\n");
	printf("__________________________________________________________________________________________");
	printf("\n                  Practica No. 6a - Interpolacion Lineal\n");
	printf("\n             (UT-III.- Interpolacion para Aproximacion Funcional)\n");
	printf("__________________________________________________________________________________________");
	printf("\n Datos:\n f(x)=2x^3-11x^2+12x+5\n");
	printf("__________________________________________________________________________________________\n\n");
	/*printf("\n                       METODOS DE INTERPOLACION \n\n"); */
	printf("Teclee el Valor de x inicial:  ");
	scanf("%f",&xi);
	printf("Teclee el Valor de x final:    ");
	scanf("%f",&xf);
	printf("Teclee el valor del incremento:");
	scanf("%f",&inc);

	/* Calculo e impresion del polinomio de primer orden */
	fxi = func(xi);
	fxf = func(xf);
	c1 = (fxf - fxi) / (xf - xi);
	c2 = fxi - (c1 * xi);

	printf("\n\nEl polinomio de primer orden es: fl(x) = %fx", c1);
	if (c2 < 0)
		printf(" %f", c2);
	else
		printf(" + %f", c2);

	/* Calculo de los puntos intermedios */
	printf("\n\n     Punto     valor de x           f(x)         f1(x)            dif.entre f(x) VS f1(x)\n");
	for (i = xi; i <= xf; i += inc) {
		pi = c1 * i + c2;
		D = fabs(func(i) - pi);
		printf("      P%d        %f          %f      %f                 %f\n", j, i, func(i), pi, D);
		j++;
	}
	printf("\n CONCLUSION ");
	printf("\n La interpolacion lineal es muy importante en las areas como la ciencia de datos, como la ingenieria o la economia. \nPermite estimar valores entre puntos conocidos, rellenando huecos de informacion y haciendo predicciones con precision. \nSe usa para suavizar graficos, complrtar los datos faltantes en series temporales y preever comportamientos en sistemas dinamicos \ny simplificar modelos matematicos. Es facil de usar, eficiente computacionalmente, lo que lo hace muy util en la investigacion \ncientifica y el analisis de datos. En conclusion, la interpolacion lineal es clave para obtener informacion util a partir de datos incompletos, \nlo que ayuda a tomar desiciones informadas y avanzar en diferentes areas de estudio  ");
	printf("\n\n    PULSE <enter> PARA CONTINUAR ");
	getch();
	return 0;
}
