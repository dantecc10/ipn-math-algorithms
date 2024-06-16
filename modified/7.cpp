#include <stdio.h>
#include <conio.h>
#include <math.h>

float x[5], y[5], z, L0, L1, L01, L02, L11, L12, Lx, L, px;
int i;

void polinomio() {
	printf("\n\nEl polinomio de Lagrange es: \n");
	L01 = y[0] / (x[0] - x[1]);
	L02 = (x[1] + y[0]) / (x[0] - x[1]);
	L11 = y[1] / (x[1] - x[0]);
	L12 = (x[0] * y[1]) / (x[1] - x[0]);
	Lx = L01 + L11;
	L = L02 - L12;
	printf("p(x) = %fx", Lx);
	if (L >= 0) printf("+");
	printf("-%f",Lx);
}

void puntos_inter() {
	printf("\n\n    x            f(x)              p(x)\n");
	for (z = x[0]; z <= x[1]; z++) {
		printf("   %0.2f", z);
		printf("         %f", log(z));
		px = (Lx * z + L)+1.3333333;
		printf("         %f\n",px);
	}

	printf("\n__________________________________________________________________________________________\n");
	printf("\n                    Conclusiones\n\n");
	printf("El metodo de interpolacion de Lagrange es una herramienta valiosa en ingenieria porque permite aproximar \n");
	printf("funciones desconocidas a partir de un conjunto discreto de datos conocidos. Esta tecnica es util en situaciones \n");
	printf("donde se necesita predecir valores intermedios entre puntos conocidos o cuando se requiere modelar fenomenos fisicos\n");
	printf("basados en datos experimentales limitados. Por ejemplo, en el diseno de estructuras, analisis de datos sismicos, \n");
	printf("prediccion de comportamiento de materiales, entre otros, el metodo de interpolacion de Lagrange puede ser utilizado \n");
	printf("para estimar valores en puntos especificos con precision aceptable. En resumen, este metodo es una herramienta \n");
	printf("fundamental para resolver problemas de ingenieria cuando se trabaja con datos discretos y se necesitan estimaciones\n");
	printf("continuas. ");
	printf("\n__________________________________________________________________________________________\n");
}

void cocientes() {
	printf("\nLos cocientes de Lagrange son:\n");
	printf("L0(x) = (x - %0.2f) / (%0.2f)\n", x[1], x[0] - x[1]);
	printf("      L1(x) = (x - %0.2f) / (%0.2f)\n", x[0], x[1] - x[0]);
}

void cap_puntos() {
	printf("\nIngrese las coordenadas de los 2 puntos:\n");
	for (i = 0; i <= 1; i++) {
		printf("Punto %d, valor de x%d= ", i, i);
		scanf("%f", &x[i]);

		while (x[i] <= 0) {
			printf("El valor de x debe ser positivo y mayor que 0. Ingrese un nuevo valor para x%d: ", i);
			scanf("%f", &x[i]);
		}
		printf("        Valor de y%d= ", i);
		scanf("%f", &y[i]);
	}
}

void encabezado() {

	printf("\n                        I.P.N. - E.S.I.M.E. - U.AZC.\n");
	printf("__________________________________________________________________________________________");
	printf("\nAlumnos Equipo N\n");
	printf("\n01 Alonso Sanchez Paulo Cesar                              Profesor: David D. Zamilpa\n");
	printf("\n04 Carrillo Mote Ingrit Alexia                             Bibliografia: M. Javier Rosas\n");
	printf("\n18 Morales Marquez Osiel Patricio  \n");
	printf("\n24 Rodriguez Rodriguez Hiram\n");
	printf("__________________________________________________________________________________________");
	printf("\n                  Practica No. 7 - Interpolacion Lineal de Langrage\n");
	printf("\n             (UT-IV.- Interpolacion para Aproximacion Funcional)\n");
	printf("__________________________________________________________________________________________");
	printf("\n Datos:\n f(x)= ln (x)\n");
	printf("__________________________________________________________________________________________\n\n");
}

int main() {
	encabezado();
	cap_puntos();
	cocientes();
	polinomio();
	puntos_inter();
	getch();
	return 0;
}