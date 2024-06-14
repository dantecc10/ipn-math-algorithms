#include <stdio.h>
#include <conio.h>
#include <math.h>

int m;
float a, b, xi;
float Ep;
int i, j, k, lin;
float xi1, Ec;

void marco() {
   printf("\n                       I.P.N. - E.S.I.M.E. - U.AZC.\n");
      printf("__________________________________________________________________________________________");
     printf("\nAlumnos Equipo M\n");
      printf("\n1 Alonso Sanchez Paulo Cesar                          Profesor: David D. Zamilpa\n");
      printf("\n18 Morales Marquez Osiel Patricio                     Bibliografia: M. Javier Rosas\n");
      printf("__________________________________________________________________________________________");
      printf("\n              Practica No. 3 - Metodo de la Secante\n");
	  printf("\n                     (UT-I.- Raices de Ecuaciones)\n");
	   printf("__________________________________________________________________________________________");
	   printf("\nDatos\nf(x)=0.6x^2 - 6x + 3\n");
	printf("__________________________________________________________________________________________");
}

float f(float x) {
    return ((3 * pow(x, 2) - 18 * x + 15) / 5);
}

void cap() {
    printf("\nMETODO DE LA SECANTE\n");
    printf("Datos: \n");
    printf("Teclee margen de error:");
    scanf("%f", &Ep);
    printf("Teclee el numero de iteraciones: ");
    scanf("%d", &m);
    printf("Valor izquierdo del intervalo a= ");
    scanf("%f", &a);

    printf("Valor derecho del intervalo b= ");
    scanf("%f", &b);
    printf("Iteracion: \n");
    printf("Intervalo\tf(a)\t\tf(b)\t\txi\t\tError\n");
    printf("______________________________________________________________________________________\n");
    lin = 0;
}

void salida() {
    printf("%d\t\t(%0.4f, %0.4f)\t%0.4f\t\t%0.4f\t\t%0.4f\n", i, a, b, f(a), f(b), xi1, Ec);
    xi = xi1;
    if (lin > 21) {
        printf("Pulse <ENTER> para ver resultados\n");
        getch();
        for (j = 15; j < 24; j++) {
            for (k = 5; k < 79; k++) {
                printf(" ");
            }
            lin = 13;
        }
        lin = lin + 1;
    }
}

void sec() {
    xi = a;
    for (i = 1; i <= m; i++) {
        xi1 = b - (f(b) * ((a - b) / (f(a) - f(b))));
        Ec = fabs(xi1 - xi);
        if (Ec < Ep) {
            salida();
            i = m;
            continue;
        }
        if ((f(xi1) * f(b)) > 0) {
            salida();
            b = xi1;
            continue;
        }
        if ((f(xi1) * f(b)) < 0) {
            salida();
            a = xi1;
        }
    }
    printf("La raiz es = %0.4f   Error= %0.4f\n", xi1, Ec);
}

int main() {
    marco();
    cap();
    sec();
     printf("\n__________________________________________________________________________________________");
    printf("\n \n                            Conclusion \n");
    printf("\nLa efectividad del metodo de la secante se fundamenta en su rapida convergencia y su habilidad\n");
	printf("para descubrir raices en rangos que podrian ser inalcanzables para otros metodos, como el de la \n");
	printf("biseccion. No obstante, es crucial tener en cuenta que este metodo no asegura la convergencia en \n");
	printf("todas las situaciones, y su exito puede estar condicionado por la seleccion adecuada de los puntos");
	printf("\niniciales y el limite maximo de iteraciones permitidas.");
	 
    getch();
    return 0;
}
