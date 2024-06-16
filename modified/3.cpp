#include <stdio.h>
#include <math.h>

#define max_ecu 10
#define max_inc 10

float mat_coef[10][11], C[10], x[10], margen_er, resul[10];
int n_ecu, n_inc, i, j, k, w, ln, cl, cl1, cl2, n_itera;

void gauss_seidel() {
    float r = 0.0, suma_er = 0.0, x_ant[10], x_nva[10], er = 0.0;
    int cont = 0, z = 0;

    i = 0; j = 0; k = 0;
    n_ecu = 3;
    w = n_ecu + 1;

    for (k = 1; k <= n_ecu; k++) {
        C[k] = mat_coef[k][w];
        x[k] = 0.0;
        x_ant[k] = 0.0;
        x_nva[k] = 0.0;
    }

    do {
        cont = cont + 1;
        printf("\nITERACION NUM: %d\n", cont);

        for (i = 1; i <= n_ecu; i++) {
            for (j = 1; j <= n_ecu; j++) {
                if (i != j) {
                    r = r + mat_coef[i][j] * x[j];
                }
            }
            x[i] = (C[i] - r) / mat_coef[i][i];
            printf("x[%d] = %.8f\n", i, x[i]);
            x_nva[i] = x[i];
            r = 0.0;
        }

        suma_er = 0.0;
        for (z = 1; z <= n_ecu; z++) {
            if (x_nva[z] != 0) {
                er = (x_nva[z] - x_ant[z]) / x_nva[z];
                er = fabs(er) * 100;
                x_ant[z] = x_nva[z];
                suma_er = suma_er + er;
            }
        }
        printf("Margen de error = %.8f\n", suma_er);
    } while ((margen_er < suma_er) && (cont < n_itera));

     printf("\nEl numero de la ultima iteracion fue: %d\n", cont);
	printf("El error obtenido en la ultima iteracion fue: %.8f\n", suma_er);
   
}

void cap_coef() {
    i = 0; j = 0;
    ln = 11;
    cl = 6;

    for (i = 1; i <= n_ecu; i++) {
        for (j = 1; j <= (n_ecu + 1); j++) {
            if (j > n_ecu)
                cl = cl + 6;
            printf("Ingrese el coeficiente en la fila %d columna %d: ", i, j);
            if (i == 1 && j == 1)
                scanf("%f", &mat_coef[1][1]);
            else
                scanf("%f", &mat_coef[i][j]);
            cl = cl + 6;
        }
        ln = ln + 1;
        cl = 6;
    }
}

void a_ceros() {
    for (i = 0; i < max_ecu; i++) {
        for (j = 0; j < max_inc; j++) {
            mat_coef[i][j] = 0.0;
        }
    }
}

void encabezado() {
    n_itera = 0;
    margen_er = 0.0;

     printf("\n                       I.P.N. - E.S.I.M.E. - U.AZC.\n");
      printf("__________________________________________________________________________________________");
     printf("\nAlumnos Equipo M\n");
      printf("\n1 Alonso Sanchez Paulo Cesar                          Profesor: David D. Zamilpa\n");
      printf("\n18 Morales Marquez Osiel Patricio                     Bibliografia: M. Javier Rosas\n");
      printf("__________________________________________________________________________________________");
      printf("\n                    Practica No. 5 - Metodo de Gauss-Seidel\n");
	  printf("\n                    (UT-II.- Soluciones de Ecuaciones)\n\n");
	
	   
    for (i = 1; i < 80; i++) {
        printf("%c", 205);
    }
    printf("\nTeclee el margen de error: ");
    scanf("%f", &margen_er);
    printf("Teclee el numero max. iteraciones: ");
    scanf("%d", &n_itera);
    printf("Teclee el Num. de ecuaciones: ");
    scanf("%d", &n_ecu);

    printf("\n         Captura de coeficientes del Sistema de Ecuaciones\n\n");
}

int main() {
    a_ceros();
    encabezado();
    cap_coef();
    gauss_seidel();

   
    printf("\nLos mejores valores de aproximacion de las variables son: \n");
    for (i = 1; i <= n_ecu; i++) {
        printf("(x%d = %.8f)", i, x[i]);
        if (i < n_ecu) {
            printf(", ");
        }
    }

    
    printf("\n__________________________________________________________________________________________\n\n");
    printf("\n                    Conclusiones\n\n");
    printf("En esta practica aprendimos que el metodo de Gauss-Jordan es una tecnica muy efectiva y\n");
    printf("ampliamente utilizada para resolver sistemas de ecuaciones lineales. Su proceso sistematico de\n");
    printf("eliminacion de incognitas ofrece una solucion directa y precisa para una amplia gama de \n");
    printf("sistemas, proporcionando una ventaja clara en terminos de facilidad de implementacion y \n");
    printf("versatilidad. Sin embargo, su sensibilidad a los errores de redondeo y la posibilidad de que la \n");
    printf("matriz sea singular pueden plantear desafios, lo que requiere precaucion al aplicar este metodo \n");
    printf("en situaciones donde la precision y la estabilidad numerica son criticas. A pesar de estas \n");
    printf("limitaciones, el metodo de Gauss-Jordan es una herramienta valiosa y eficiente para resolver\n");
    printf("sistemas de ecuaciones lineales en diversas de ingenieria.\n");
    

    return 0;
}