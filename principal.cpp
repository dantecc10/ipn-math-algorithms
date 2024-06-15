#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <"including\p1.h">

// Lista de programas
//		1.- GaussJordan.cpp (gauss_jordan_p1)
//		2.- Gauss.cpp (gauss_p2)
//		3.- Gauss-Seidel.cpp (gauss_seidel_p3)
//		4.- Interpolacion Cuadratica de Newton.cpp (interpolacion_cuadratica_newton_p4)
//		5.- Interpolacion lineal.cpp (interpolacion_lineal_p5)
//		6.- Interpolacion n=3.cpp (interpolacion_n3_p6)
//		7.- Langrage.cpp (langrage_p7)
//		8.- Metodo de Biseccion.cpp (metodo_biseccion_p8)
//		9.- Metodo de la Secante.cpp (metodo_secante_p9)
//		10.- Metodo de la Tangente.cpp (metodo_tangente_p10)
//		11.- Metodo del Trapecio.cpp (metodo_trapecio_p11)
//		12.- Minimos Cuadrados.cpp (minimos_cuadrados_p12)
//		13.- Regresion cuadratica.cpp (regresion_cuadratica_p13)
//		14.- Regresioón Lineal Múltiple.cpp (regresion_lineal_multiple_p14)
//		15.- Simpson 3 Octavos.cpp (simpson_3_8_p15)
//		16.- Simpson Combinado.cpp (simpson_combinado_p16)
//		17.- Simpson un Tercio.cpp (simpson_1_3_p17)
int opcion_programa = -1;
int main() {
	do {
		printf("Por favor, elija un programa para ejecutar: \n");
		scanf("%i", &opcion_programa);

		switch(opcion_programa) {
			default:
				printf("Por favor, elija una opción correcta");
				break;
		}
	} while (opcion_programa != 0);
	printf("Hasta pronto...");
	return 0;
}
