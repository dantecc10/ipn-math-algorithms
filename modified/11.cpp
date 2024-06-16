#include <stdio.h>
#include <math.h>

float func_trap(float x) {
	return pow(x, 2);
}

int main() {
	float a, b, base, fa, fb;
	float suma_xi;
	float Aa, An, E, xi, n_trap, i;

	// Inicialización de variables
	base = xi = suma_xi = 0.0;

	printf("\n                        I.P.N. - E.S.I.M.E. - U.AZC.\n");
	printf("__________________________________________________________________________________________");
	printf("\nAlumnos Equipo N\n");
	printf("\n01 Alonso Sanchez Paulo Cesar                              Profesor: David D. Zamilpa\n");
	printf("\n04 Carrillo Mote Ingrit Alexia                             Bibliografia: M. Javier Rosas\n");
	printf("\n18 Morales Marquez Osiel Patricio  \n");
	printf("\n24 Rodriguez Rodriguez Hiram\n");
	printf("__________________________________________________________________________________________");
	printf("\n           Practica No. 10 - Metodo del Trapecio de Segmentos Multiples\n");
	printf("\n                        (UT-V.- Integracion Numerica)\n");
	printf("__________________________________________________________________________________________");
	printf("\n Ecuacion f(x)=x^2 dx \n");
	printf("__________________________________________________________________________________________\n\n");

	printf("DATOS:\n");

	printf("Teclee el limite inferior..: ");
	scanf("%f", &a);

	printf("Teclee el limite superior..: ");
	scanf("%f", &b);

	printf("Teclee el num. de trapecios: ");
	scanf("%f", &n_trap);

	base = (b - a) / n_trap;
	fa = func_trap(a);
	fb = func_trap(b);

	for(i = 1; i < n_trap; i++) {
		xi = a + (i * base);
		suma_xi += func_trap(xi);
	}

	// Cálculo del área analítica y aproximada
	Aa = ((pow(b, 3) / 3) - (pow(a, 3) / 3));
	An = (b - a) * (fa + 2 * suma_xi + fb) / (2 * n_trap);
	E = fabs(Aa - An);

	printf("\nRESULTADOS:\n");

	printf("Area usando el metodo del trapecio: %f\n", An);
	printf("Area usando el metodo analitico...: %f\n", Aa);
	printf("Error entre metodos................: %f\n", E);

	printf("\n__________________________________________________________________________________________\n");
	printf("\n                    Conclusiones\n\n");
	printf("El metodo de Trapecios Multiples es una tecnica de integracion numerica ampliamente utilizada en diversas\n");
	printf("areas de la ingenieria debido a su simplicidad y eficacia para aproximar el valor de integrales definidas.\n");
	printf("Dividiendo el intervalo de integracion en multiples segmentos trapezoidales, este metodo permite calcular \n");
	printf("areas bajo curvas con una precision aceptable cuando la integracion analitica es compleja o impracticable. \n");
	printf("En ingenieria civil, se aplica para determinar areas y volumenes de estructuras, asi como para el analisis \n");
	printf("de perfiles de carga y distribucion de fuerzas. En ingenieria mecanica, se utiliza para calcular momentos \n");
	printf("de inercia y propiedades de materiales que involucran integrales complejas. Ademas, en el ambito de la \n");
	printf("ingenieria electrica, es fundamental para evaluar integrales en el analisis de senales y sistemas, asi \n");
	printf("como en el diseno de circuitos. La versatilidad y facilidad de implementacion del metodo de Trapecios \n");
	printf("Multiples lo convierten en una herramienta invaluable para ingenieros que buscan soluciones practicas y \n");
	printf("rapidas en sus proyectos y analisis tecnicos.\n");
	printf("\n__________________________________________________________________________________________\n");
	printf("\nPulse <ENTER> para continuar:");
	getchar();
	getchar();

	return 0;
}