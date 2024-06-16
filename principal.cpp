#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>

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
// Variables 1
// Variables 2
// Variables 3
// Variables 4
// Variables 5
// Variables 6
// Variables 7
// Variables 8
// Variables 9
// Variables 10
// Variables 11
// Variables 12
// Variables 13
// Variables 14
// Variables 15
// Variables 16
// Variables 17

int main()
{
	do
	{
		// system("dir");
		// system("cd src");
		// system("Gauss.exe");
		printf("Por favor, elija un programa para ejecutar: \n");
		printf("	1.- GaussJordan\n");
		printf("	2.- Gauss\n");
		printf("	3.- Gauss-Seidel\n");
		printf("	4.- Interpolacion Cuadratica de Newton\n");
		printf("	5.- Interpolacion lineal\n");
		printf("	6.- Interpolacion n=3\n");
		printf("	7.- Langrage\n");
		printf("	8.- Metodo de Biseccion\n");
		printf("	9.- Metodo de la Secante\n");
		printf("	10.- Metodo de la Tangente\n");
		printf("	11.- Metodo del Trapecio\n");
		printf("	12.- Minimos Cuadrados\n");
		printf("	13.- Regresion cuadratica\n");
		printf("	14.- Regresioón Lineal Múltiple\n");
		printf("	15.- Simpson 3 Octavos\n");
		printf("	16.- Simpson Combinado\n");
		printf("	17.- Simpson un Tercio\n");
		scanf("%i", &opcion_programa);

		switch (opcion_programa)
		{
		case 1:
			system("GaussJordan.exe");
			break;
		case 2:
			system("Gauss.exe");
			break;
		case 3:
			system("Gauss-Seidel.exe");
			break;
		case 4:
			system("Interpolacion Cuadratica de Newton.exe");
			break;
		case 5:
			system("Interpolacion lineal.exe");
			break;
		case 6:
			system("Interpolacion n=3.exe");
			break;
		case 7:
			system("Langrage.exe");
			break;
		case 8:
			system("Metodo de Biseccion.exe");
			break;
		case 9:
			system("Metodo de la Secante.exe");
			break;
		case 10:
			system("Metodo de la Tangente.exe");
			break;
		case 11:
			system("Metodo del Trapecio.exe");
			break;
		case 12:
			system("Minimos Cuadrados.exe");
			break;
		case 13:
			system("Regresion cuadratica.exe");
			break;
		case 14:
			system("Regresioón Lineal Múltiple.exe");
			break;
		case 15:
			system("Simpson 3 Octavos.exe");
			break;
		case 16:
			system("Simpson Combinado.exe");
			break;
		case 17:
			system("Simpson un Tercio.exe");
			break;
		default:
			printf("Por favor, elija una opción correcta");
			break;
		}
	} while (opcion_programa != 0);
	printf("Hasta pronto...");
	return 0;
}
