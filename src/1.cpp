#include <stdio.h>
#include <conio.h>
#include <math.h>

#define max_ecu 10
#define max_inc 10

float mat_coef[10][10];
float resul[10];
int n_ecu, n_inc;
int i, j, k, ln, cl, cl1, c12;

/*presentacion de encabezado */
void encabezado() {

inicio:
	printf("\n                       I.P.N. - E.S.I.M.E. - U.AZC.\n");
	printf("__________________________________________________________________________________________");
	printf("\nAlumnos Equipo M\n");
	printf("\n1 Alonso Sanchez Paulo Cesar                          Profesor: David D. Zamilpa\n");
	printf("\n18 Morales Marquez Osiel Patricio                     Bibliografia: M. Javier Rosas\n");
	printf("__________________________________________________________________________________________");
	printf("\n                    Practica No. 4 - Metodo de Gauss-Jordan\n");
	printf("\n                    (UT-II.- Soluciones de Ecuaciones)\n");
	printf("__________________________________________________________________________________________\n\n");


	printf("\nTeclee el Num. de ecuaciones: ");
	scanf("%d", &n_ecu);
	printf("\nCaptura de coeficientes del Sistema de Ecuaciones\n\n");
}

void resultados() {


	int r, n;
	r = n_ecu + 1;
	n = 0;
	printf("\nValor de las incognitas del sistema de ecuaciones es: \n\n");
	for (n = 1; n <= n_ecu; n++) {
		printf("X%d = %.4f\n", n, mat_coef[n][r]);
	}
	printf("\n__________________________________________________________________________________________\n\n");
	printf("\n                    Conclusiones\n");

	printf("\nEl metodo de Gauss-Jordan es una tecnica poderosa para resolver sistemas de ecuaciones lineales. \nA diferencia del metodo de Gauss, que se centra en la eliminacion de incognitas para resolver un sistema, \nel metodo de Gauss-Jordan busca llevar la matriz de coeficientes a una forma escalonada reducida, \nlo que proporciona directamente las soluciones del sistema. La principal diferencia entre el metodo de Gauss-Jordan y \nel metodo de Gauss radica en su objetivo final: mientras que el metodo de Gauss busca encontrar las soluciones \nmediante la eliminacion de incognitas y sustitucion hacia atras, el metodo de Gauss-Jordan \nbusca llevar la matriz a una forma escalonada reducida para obtener directamente las soluciones del sistema.");
	getch();
}

/* algoritmo de Gauss-Jordan */
void jordan() {
	int z;
	float pivote = 0.0;
	float elem_zero = 0.0;
	for (i = 1; i <= n_ecu; i++) { /* procedimiento para hacer cero */
		pivote = mat_coef[i][i]; /* iniciar siempre tomando el pivote */
		for (z = 1; z <= (n_ecu + 1); z++) {
			mat_coef[i][z] = mat_coef[i][z] / pivote; /* sacar ecuac. pivotal */
		}
		for (k = 1; k <= n_ecu; k++) { /* hacer ceros */
			if (k != i) { /* para hacer ceros abajo y arriba de ecuac.pivotal*/
				elem_zero = mat_coef[k][i]; /* guardamos el elemento a hacer cero */
				for (j = i; j <= (n_ecu + 1); j++) { /* hacer y se afecta c/elem.dela ecua.*/
					mat_coef[k][j] = mat_coef[k][j] - (elem_zero * mat_coef[i][j]);
				}
			}
		} /* fin procedimiento para hacer ceros */
	}
}

/* captura de coeficientes */
void cap_coef() {
	i = 0;
	j = 0;
	ln = 11;
	cl = 8;
	for (i = 1; i <= n_ecu; i++) {
		for (j = 1; j <= (n_ecu + 1); j++) {
			if (j > n_ecu)
				cl = cl + 5;
			printf("Ingrese el coeficiente a[%d][%d]: ", i, j);
			scanf("%f", &mat_coef[i][j]);
			cl = cl + 6;
		}
		ln = ln + 1;
		cl = 8;
	}
}

/* funcion de hacer ceros a las variables */
void a_ceros() {
	i = j = k = 0;
	for (i = 0; i < max_ecu; i++) {
		for (j = 0; j < max_inc; j++) {
			mat_coef[i][j] = 0.0;
		}
	}
}

int gauss_jordan_p1() {
	a_ceros();
	encabezado();
	cap_coef();
	jordan();
	resultados();
	getch();
	return 0;
}