#include <stdio.h>
#include <conio.h> 
#include <math.h>

int n, m;
float M[10][4], E[4][4], ve[4] = {0, 0, 0, 0}, suma_y = 0.0, suma_x1 = 0.0, suma_x2 = 0.0, suma_x12 = 0.0, suma_x22 = 0.0, suma_x1x2 = 0.0, suma_x1y = 0.0, suma_x2y = 0.0;


int main()
{
	 printf("\n                        I.P.N. - E.S.I.M.E. - U.AZC.\n");
    printf("__________________________________________________________________________________________");
    printf("\nAlumnos Equipo N\n");
    printf("\n01 Alonso Sanchez Paulo Cesar                              Profesor: David D. Zamilpa\n");
    printf("\n04 Carrillo Mote Ingrit Alexia                             Bibliografia: M. Javier Rosas\n");
    printf("\n18 Morales Marquez Osiel Patricio  \n");
    printf("\n24 Rodriguez Rodriguez Hiram\n");
    printf("__________________________________________________________________________________________");
    printf("\n                  Practica No. 8a - Regresion Lineal Multiple\n");
    printf("\n                         (UT-IV.- Minimos Cuadrados)\n");
    printf("__________________________________________________________________________________________");
    printf("\n \n");
    printf("__________________________________________________________________________________________\n\n");
    printf("Ecuacion y = 5 + 4x1 - 3x2\n");

    n = 6;
    printf("Ingresa los valores de x1, x2 y y:\n");
    for (int i = 1; i <= n; i++) {
        printf("Para el punto %d:\n", i);
        printf("x1: ");
        scanf("%f", &M[i][1]);
        printf("x2: ");
        scanf("%f", &M[i][2]); 
        printf("y: ");
        scanf("%f", &M[i][3]);
    }

    for (int i = 1; i <= n; i++) {
        suma_x1 += M[i][1];
        suma_x2 += M[i][2];
        suma_y  += M[i][3]; 
        suma_x12 += pow(M[i][1], 2);
        suma_x22 += pow(M[i][2], 2); 
        suma_x1x2 += M[i][1] * M[i][2];
        suma_x1y += M[i][1] * M[i][3]; 
        suma_x2y += M[i][2] * M[i][3];
    }

    printf("\n n = %d\n", n);
    printf(" suma x1 = %.2f\n", suma_x1);
    printf(" suma x2 = %.2f\n", suma_x2);
    printf(" suma y  = %.2f\n", suma_y);
    printf(" suma x1^2 = %.2f\n", suma_x12);
    printf(" suma x2^2 = %.2f\n", suma_x22);
    printf(" suma x1x2 = %.2f\n", suma_x1x2);
    printf(" suma x1y  = %.2f\n", suma_x1y);
    printf(" suma x2y  = %.2f\n\n", suma_x2y);
    
    // Construyendo el sistema de ecuaciones
    E[1][1] = n;
    E[1][2] = suma_x1;
    E[1][3] = suma_x2;
    E[1][4] = suma_y; 
    E[2][1] = suma_x1;
    E[2][2] = suma_x12;
    E[2][3] = suma_x1x2;
    E[2][4] = suma_x1y; 
    E[3][1] = suma_x2;
    E[3][2] = suma_x1x2;
    E[3][3] = suma_x22;
    E[3][4] = suma_x2y;

    printf(" Sistema de ecuaciones\n");

   // Mostrando el sistema de ecuaciones
for (int i = 1; i <= 3; i++) {
    printf("%.2f * ", E[i][1]); // Coeficiente de a0
    printf("a0 + ");
    printf("%.2f * ", E[i][2]); // Coeficiente de a1
    printf("a1 + ");
    printf("%.2f * ", E[i][3]); // Coeficiente de a2
    printf("a2 = ");
    printf("%.2f\n", E[i][4]); // Valor constante
}

    // Resolviendo el sistema de ecuaciones por el método de Gauss
    for (int i = 1; i <= 3; i++) {
        float piv = E[i][i];
        for (int j = 1; j <= 4; j++) {
            E[i][j] /= piv;
        }
        for (int k = 1; k <= 3; k++) {
            if (k != i) {
                float cero = E[k][i];
                for (int j = 1; j <= 4; j++) {
                    E[k][j] -= cero * E[i][j];
                }
            }
        }
    }

    printf("\n");
    // Mostrando los resultados
    for (int i = 1; i <= 3; i++) {
        ve[i] = E[i][4];
    }
    printf("Resolviendo por Gauss: a0 = %.2f, a1 = %.2f, a2 = %.2f\n", ve[1], ve[2], ve[3]);
    printf("Sustituyendo, se obtiene la ecuacion original: y = %.2f + %.2f * x1 + %.2f * x2\n", ve[1], ve[2], ve[3]);
    
    printf("\n__________________________________________________________________________________________\n");
    printf("\n                    Conclusiones\n\n");
    printf("La regresion lineal multiple es una herramienta esencial en ingenieria, utilizada para analizar y modelar\n");
	printf("la relacion entre una variable dependiente y multiples variables independientes. Su proposito principal es\n");
	printf("comprender como estas variables afectan el comportamiento del sistema en estudio. En el campo de la \n");
	printf("ingenieria electrica, la regresion lineal multiple se utiliza para pronosticar el consumo de energia basado\n");
	printf("en variables como demanda, eficiencia de dispositivos y condiciones ambientales, permitiendo una mejor \n");
	printf("planificacion y gestion del suministro energetico. Ademas de su funcion predictiva, esta tecnica es valiosa\n");
	printf("para comprender las relaciones causales entre variables en un sistema. Por ejemplo, en ingenieria mecanica, \n");
	printf("ayuda a identificar como los parametros de diseno impactan el rendimiento de maquinas o sistemas mecanicos,\n");
	printf("lo que conlleva a mejoras en eficiencia operativa y diseno. La regresion lineal multiple es una herramienta\n");
	printf("versatil y vital en la ingenieria moderna. Permite a los ingenieros entender, predecir y optimizar sistemas\n");
	printf("complejos, resultando en disenos mejorados, procesos mas eficientes y soluciones innovadoras para los \n");
	printf("desafios de ingenieria. Su aplicabilidad abarca desde la planificacion y diseno hasta la gestion y \n");
	printf("optimizacion de sistemas en diversas disciplinas ingenieriles.\n");
	printf("\n__________________________________________________________________________________________\n");
    getch();
    getch();

    return 0;
}