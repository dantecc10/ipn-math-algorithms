#include <stdio.h>
#include <conio.h>
#include <math.h>

int a[10][10], i, j, k, m, n, z;
float b[10][10], suma, resul[10], cero;

void ceros() {
	for (i = 1; i <= 9; i++) {
		for (j = 0; j <= 9; j++) {
			a[i][j] = 0;
		}
	}
}

void enc() {
inicio:
	printf("\n                       I.P.N. - E.S.I.M.E. - U.AZC.\n");
	printf("__________________________________________________________________________________________");
	printf("\nAlumnos Equipo M\n");
	printf("\n1 Alonso Sanchez Paulo Cesar                          Profesor: David D. Zamilpa\n");
	printf("\n18 Morales Marquez Osiel Patricio                     Bibliografia: M. Javier Rosas\n");
	printf("__________________________________________________________________________________________");
	printf("\n                    Practica No. 4a - Metodo de Gauss\n");
	printf("\n                    (UT-II.- Soluciones de Ecuaciones)\n");
	printf("__________________________________________________________________________________________\n\n");
}

void captura() {
	printf("Captura de Coeficientes del sistema de ecuaciones\n");
	printf("Teclee num. de ecuaciones: ");
	scanf("%d", &m);
	n = m + 1;
	for(i = 1; i <= m; i++) {
		for(j = 1; j <= n; j++) {
			printf("\nIngrese el coeficiente a[%d][%d]: ", i, j);
			scanf("%f", &b[i][j]);
		}
	}
}

void impresion() {
	printf("\nSISTEMA DE ECUACIONES CAPTURADO\n\n");
	for (i = 1; i <= m; i++) {
		for(j = 1; j <= n; j++) {
			if (j == 1) {
			}
			if(b[i][j] >= 0)
				printf(" ");
			printf("%.0f%c ", b[i][j], j == n ? '=' : 'X' + j - 1);
		}
		if(b[i][n] >= 0)
			printf(" ");
		printf("= %.0f\n", b[i][n]);
	}
}

void gauss() {
	float p, cero;
	for (i = 1; i <= m; i++) {
		p = b[i][i];
		for (z = 1; z <= n; z++) {
			b[i][z] = b[i][z] / p;
		}
		for (k = 1; k <= m; k++) {
			if(k != i) {
				cero = b[k][i];
				for(j = 1; j <= n; j++) {
					b[k][j] = b[k][j] - cero * b[i][j];
				}
			}
		}
	}
}

void resultados() {
	printf("\nEl valor encontrado de las incognitas es:\n\n");
	for (i = 1; i <= m; i++) {
		printf("%c = %.4f\n", 'X' + i - 1, b[i][n]);
	}
	printf("\n__________________________________________________________________________________________\n\n");
	printf("\n                    Conclusiones\n\n");
	printf("El metodo de Gauss es una tecnica matematica util para resolver problemas con muchas ecuaciones y muchas incognitas.\nEs bastante preciso y puede manejar una amplia variedad de problemas.\nSin embargo, hay que tener cuidado cuando se trabaja con problemas dificiles, ya que podria haber errores inesperados.\nAdemas, aunque es bastante simple de entende9r, puede volverse lento si el problema es muy grande.\nEn general, el metodo de Gauss es una herramienta poderosa, pero se necesita algo de práctica para usarlo correctamente.\n\n");
}

int main() {
	ceros();
	enc();
	captura();
	impresion();
	gauss();
	resultados();

	printf("\nTeclee <enter> para continuar");
	getch();
	return 0;
}