/* Método de Interpolación
   Usando el procedimiento tercer orden de Newton
   Realizado por: Ing. M. Javier Rosas */

#include <stdio.h>
#include <math.h>

float x[4], y[4], z, b0, b1, b2, b3, r, fx10, fx21, fx32, fx210, fx321, fx3210;
int i;

/* Fin de programa principal */

void polinomio() {
	printf("\n\nEl polinomio es: \n");
	printf("p(x) = %.2f + %.2f (x - %.2f)", b0, b1, x[0]);
	printf("       + %.2f (x - %.2f) (x - %.2f)", b2, x[0], x[1]);
	printf("       + %.2f (x - %.2f) (x - %.2f) (x - %.2f)", b3, x[0], x[1], x[2]);
}

void puntos_inter() {
	printf("\n\n X                 f(x)               p(x) \n");
	for (z = x[0]; z <= x[2]; z += 0.5) {
		printf("%.2f               ", z);
		printf("%.2f               ", 2 * pow(z, 3) - 11 * pow(z, 2) + 12 * z + 5);
		r = b0 + b1 * (z - x[0]) + b2 * (z - x[0]) * (z - x[1]) + b3 * (z - x[0]) * (z - x[1]) * (z - x[2]);
		printf("%.2f           \n", r);
	}
	printf("\n__________________________________________________________________________________________\n\n");
	printf("\n                    Conclusiones\n\n");
	printf("La interpolacion de tercer orden de Newton es una herramienta matematica valiosa que permite estimar valores intermedios \n");
	printf("en conjuntos de datos con mayor precision que metodos de orden inferior. Al utilizar polinomios de tercer grado, esta tecnica\n");
	printf("ofrece una aproximacion suave y precisa entre los puntos conocidos, lo que facilita la prediccion de valores desconocidos con\n");
	printf("una mayor exactitud y una representacion mas fiel de la tendencia subyacente en el conjunto de datos. Su aplicacion se extiende\n");
	printf("a diversas areas, desde la ingenieria y la fisica hasta la ciencia de datos, brindando soluciones precisas y confiables en la\n");
	printf("interpolacion de datos complejos.");
}

void imp_coef() {
	printf("\nLos coeficientes son: \n");
	printf("b0 = %.2f\n", b0);
	printf("b1 = %.2f\n", b1);
	printf("b2 = %.2f\n", b2);
	printf("b3 = %.2f\n", b3);
}

void coef() {
	b0 = y[0];
	fx10 = (y[1] - y[0]) / (x[1] - x[0]);
	b1 = fx10;
	fx21 = (y[2] - y[1]) / (x[2] - x[1]);
	fx32 = (y[3] - y[2]) / (x[3] - x[2]);
	fx210 = (fx21 - fx10) / (x[2] - x[0]);
	b2 = fx210;
	fx321 = (fx32 - fx21) / (x[3] - x[1]);
	fx3210 = (fx321 - fx210) / (x[3] - x[0]);
	b3 = fx3210;
}

void cap_puntos() {
	printf("\nTeclee las coordenadas de los 4 puntos: \n");
	for (i = 0; i < 4; i++) {
		printf("Punto %d, valor de x%d: ", i, i);
		scanf("%f", &x[i]);
		printf("     valor de y%d: ", i);
		scanf("%f", &y[i]);
	}
}

void encabezado() {
	printf("\n                        I.P.N. - E.S.I.M.E. - U.AZC.\n");
	printf("__________________________________________________________________________________________");
	printf("\nAlumnos Equipo N\n");
	printf("\n04 Carrillo Mote Ingrit Alexia                             Profesor: David D. Zamilpa\n");
	printf("\n18 Morales Marquez Osiel Patricio                          Bibliografia: M. Javier Rosas\n");
	printf("\n24 Rodriguez Rodriguez Hiram\n");
	printf("__________________________________________________________________________________________");
	printf("\n                  Practica No. 6c - Interpolacion de grado n=3\n");
	printf("\n             (UT-III.- Interpolacion para Aproximacion Funcional)\n");
	printf("__________________________________________________________________________________________");
	printf("\n Datos:\n f(x)=2x^3-11x^2+12x+5\n");
	printf("__________________________________________________________________________________________\n\n");
}

/* Programa principal */
int interpolacion_n3_p6() {
	encabezado();
	cap_puntos();
	coef();
	imp_coef();
	polinomio();
	puntos_inter();
	return 0;
}