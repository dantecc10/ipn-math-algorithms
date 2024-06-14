#include <stdio.h>
#include <math.h>

float m[2][10];
float ec[3][4] = {{0.0}};
float ec1[3][4] = {{0.0}};
int n;
int i, j;
int ren;
int cl, ln;
float suma_y;
float suma_x, suma_xy, suma_x2;
float suma_c1, suma_c2, suma_c3, A, B;
float bufer1, bufer2;

int main() {
    suma_y = suma_x = suma_xy = suma_x2 = 0.0;
    suma_c1 = suma_c2 = suma_c3 = A = B = 0.0;
    bufer1 = bufer2 = 0.0;
    cl = ln = 0;
    i = j = n = 0;
    ren = 0;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 2; j++) {
            m[j][i] = 0.0;
        }
    }
printf("\n                        I.P.N. - E.S.I.M.E. - U.AZC.\n");
    printf("__________________________________________________________________________________________");
    printf("\nAlumnos Equipo N\n");
    printf("\n01 Alonso Sanchez Paulo Cesar                              Profesor: David D. Zamilpa\n");
    printf("\n04 Carrillo Mote Ingrit Alexia                             Bibliografia: M. Javier Rosas\n");
    printf("\n18 Morales Marquez Osiel Patricio  \n");
    printf("\n24 Rodriguez Rodriguez Hiram\n");
    printf("__________________________________________________________________________________________");
    printf("\n                  Practica No. 8 - Minimos Cuadrados Lineales\n");
    printf("\n             (UT-III.- Interpolacion para Aproximacion Funcional)\n");
    printf("__________________________________________________________________________________________");
    printf("\n \n");
    printf("__________________________________________________________________________________________\n\n");
    printf("Numero de puntos a aproximar: ");
    scanf("%d", &n);

    cl = 1;
    for (i = 0; i < n; i++) {
        ren = 1;
        ln = 6;
        cl = cl + 10;

        printf("x%d=", i+1);
        scanf("%f", &m[0][i]);

        ren = 2;
        ln = 7;

        printf("y%d=", i+1);
        scanf("%f", &m[1][i]);
    }

    for (i = 0; i < n; i++) {
        suma_y += m[1][i];
        suma_x += m[0][i];
        suma_xy += m[0][i] * m[1][i];
        suma_x2 += pow(m[0][i], 2);
    }

    ec[0][0] = suma_x;
    ec[0][1] = n;
    ec[0][2] = suma_y;
    ec[1][0] = suma_x2;
    ec[1][1] = suma_x;
    ec[1][2] = suma_xy;

    printf("\n\n suma_y= %f", suma_y);
    printf("\n suma_x= %f", suma_x);
    printf("\n n = %d", n);
    printf("\n suma_xy = %f", suma_xy);
    printf("\n suma_x^2 = %f \n", suma_x2);

    bufer1 = ec[1][1];
    bufer2 = (-1) * ec[0][1];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            ec1[i][j] = ec[i][j];
        }
    }

    for (i = 0; i < 3; i++) {
        ec1[i][0] *= bufer1;
        ec1[i][1] *= bufer2;
    }

    suma_c1 = ec1[0][0] + ec1[1][0];
    suma_c2 = ec1[0][1] + ec1[1][1];
    suma_c3 = ec1[0][2] + ec1[1][2];
    A = suma_c3 / suma_c1;

    bufer1 = ec[1][0];
    bufer2 = (-1) * ec[0][0];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            ec1[i][j] = ec[i][j];
        }
    }

    for (i = 0; i < 3; i++) {
        ec1[i][0] *= bufer1;
        ec1[i][1] *= bufer2;
    }

    suma_c1 = ec1[0][0] + ec1[1][0];
    suma_c2 = ec1[0][1] + ec1[1][1];
    suma_c3 = ec1[0][2] + ec1[1][2];
    B = suma_c3 / suma_c2;

    printf("\n\n %0.2fA + %dB = %0.2f", suma_x, n, suma_y);
    printf("\n %0.2fA + %0.2fB = %0.2f", suma_x2, suma_x, suma_xy);

    printf("\n\n");
    printf("La ecuacion de la recta que mas se ajusta a los puntos es:\n\n");
    printf("y = %fx + %f\n", A, B);
    
     printf("\n__________________________________________________________________________________________\n");
    printf("\n                    Conclusiones\n\n");
     printf("El metodo de minimos cuadrados lineales es una tecnica utilizada para encontrar la linea que mejor se\n");
	printf("ajusta a un conjunto de datos dispersos. Su objetivo es minimizar la suma de los cuadrados de las \n");
	printf("diferencias entre los valores observados y los valores predichos por la linea. Esto se logra ajustando\n");
	printf(" los coeficientes de la ecuacion de la linea para que la suma de los residuos al cuadrado sea lo mas \n");
	printf("pequena posible. En resumen, este metodo nos proporciona una forma de modelar y entender la relacion \n");
	printf("entre dos variables, permitiendonos hacer predicciones y tomar decisiones basadas en datos de manera\n");
	printf("mas precisa y confiable. Es ampliamente utilizado en campos como la econometria, la ingenieria, \n");
	printf("las ciencias sociales y la investigacion cientifica en general.\n");
	 printf("\n__________________________________________________________________________________________\n");

    return 0;
}
