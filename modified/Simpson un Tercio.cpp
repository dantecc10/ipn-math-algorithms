#include <stdio.h>
#include <math.h>

int marco() {
    printf("\n                        I.P.N. - E.S.I.M.E. - U.AZC.\n");
    printf("__________________________________________________________________________________________");
    printf("\nAlumnos Equipo N\n");
    printf("\n01 Alonso Sanchez Paulo Cesar                              Profesor: David D. Zamilpa\n");
    printf("\n04 Carrillo Mote Ingrit Alexia                             Bibliografia: M. Javier Rosas\n");
    printf("\n18 Morales Marquez Osiel Patricio  \n");
    printf("\n24 Rodriguez Rodriguez Hiram\n");
    printf("__________________________________________________________________________________________");
    printf("\n               Practica No. 11 - Simpson 1/3 Segmentos Multiples\n");
    printf("\n                        (UT-V.- Integracion Numerica)\n");
    printf("__________________________________________________________________________________________");
    printf("\n Ecuacion f(x)=x^3 dx \n");
    printf("__________________________________________________________________________________________\n\n");

    return 0;
}

float func_simplm(float x) {
    return pow(x, 3);
}

int simpson_1_3_p17() {
    float l_inf, l_sup, segm, f_a, f_b;
    int n_segm, i, opc;
    float area_ana, area_simplm;
    float xi, suma_xin, suma_xip;
    float error;

    // Inicialización de variables
    l_inf = l_sup = f_a = f_b = 0.0;
    area_ana = 0.0;
    area_simplm = 0.0;
    n_segm = i = 0;
    segm = 0.0;
    xi = suma_xin = suma_xip = 0.0;
    error = 0.0;

    // Mostrar la portada
    marco();

    do {
        printf("\nTeclee el limite inferior..: ");
        scanf("%f", &l_inf);

        printf("Teclee el limite superior..: ");
        scanf("%f", &l_sup);

        printf("Teclee el num. de segmentos: ");
        scanf("%d", &n_segm);

        area_ana = pow(l_sup, 4) / 4 - pow(l_inf, 4) / 4;
        f_a = func_simplm(l_inf);
        f_b = func_simplm(l_sup);

        segm = (l_sup - l_inf) / n_segm;

        // Para los nones
        for(i = 1; i < n_segm; i += 2) {
            xi = l_inf + i * segm;
            suma_xin += func_simplm(xi);
        }

        // Para los pares
        for(i = 2; i < n_segm; i += 2) {
            xi = l_inf + i * segm;
            suma_xip += func_simplm(xi);
        }

        // Suma total
        area_simplm = (l_sup - l_inf) * (f_a + 4 * suma_xin + 2 * suma_xip + f_b) / (3 * n_segm);
        error = fabs(area_ana - area_simplm);

        printf("\nArea Analitica es: %0.4f\n", area_ana);
        printf("Area Simpson 1/3 mult: %0.4f\n", area_simplm);
        printf("Error entre metodos es: %f\n", error);

        printf("\nDesea hacer otro calculo 1=Si 2=No ");
        scanf("%d", &opc);
        printf("\n__________________________________________________________________________________________\n");
    } while(opc != 2);


    printf("\n__________________________________________________________________________________________\n");
    printf("\n                    Conclusiones\n\n");
    printf("El metodo de Simpson 1/3 es una tecnica de integracion numerica fundamental en diversas disciplinas\n");
    printf("cientificas y de ingenieria. Al dividir el intervalo de integracion en segmentos y aproximar la funcion\n");
    printf("mediante polinomios de segundo grado, este metodo proporciona soluciones precisas y eficientes cuando la \n");
    printf("integracion analitica es compleja o inviable. Sus aplicaciones son numerosas: en ingenieria civil y mecanica,\n");
    printf("se utiliza para calcular areas, volumenes y momentos de inercia; en fisica, es esencial para resolver problemas \n");
    printf("en mecanica clasica, electromagnetismo y termodinamica; en economia y finanzas, se emplea para evaluar integrales\n");
    printf("y calcular el valor presente y futuro de flujos de caja; en ciencias biologicas y medicas, facilita la modelizacion\n");
    printf("de fenomenos biologicos como la propagacion de enfermedades y la distribucion de medicamentos; y en computacion \n");
    printf("grafica, se usa para calcular areas bajo curvas y superficies, cruciales en el renderizado de imagenes y la simulacion\n");
    printf("de efectos visuales. El metodo de Simpson 1/3 es una herramienta versatil y poderosa, indispensable para cientificos,\n");
    printf("ingenieros y analistas en una amplia variedad de campos.\n");
    printf("\n__________________________________________________________________________________________\n");

    return 0;
}
