/* Metodo de Simpson de 3/8 */
#include <conio.h>
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
    printf("\n                        Practica No. 11a - Simpson 3/8 \n");
    printf("\n                        (UT-V.- Integracion Numerica)\n");
    printf("__________________________________________________________________________________________");
    printf("\n Ecuacion f(x)= Raiz(4+x^3) dx \n");
    printf("__________________________________________________________________________________________\n\n");
    return 0;
}

float func_simp3(float x) {
    return pow(x, 3);
}

int simpson_3_8_p15() {
    float l_inf, l_sup, segm;
    float area_ana, area_simp3;
    float xi, fx0, fx1, fx2, fx3, error;
    int opc;
    l_inf = l_sup = 0.0;
    fx0 = fx1 = fx2 = fx3 = 0.0;
    area_ana = 0.0;
    area_simp3 = 0.0;
    segm = 0.0;
    xi = 0.0;
    error = 0.0;
    do {
        marco();
        printf("\nTeclee el limite inferior..: ");
        scanf("%f", &l_inf);
        printf("Teclee el limite superior..: ");
        scanf("%f", &l_sup);

        area_ana = (pow(l_sup, 4) / 4 - pow(l_inf, 4) / 4);

        segm = (l_sup - l_inf) / 3;
        fx0 = func_simp3(l_inf);
        xi = l_inf + segm;
        fx1 = func_simp3(xi);
        xi = l_inf + segm + segm;
        fx2 = func_simp3(xi);
        fx3 = func_simp3(l_sup);
        area_simp3 = (l_sup - l_inf) * (fx0 + 3 * fx1 + 3 * fx2 + fx3) / 8;
        error = fabs(area_ana - area_simp3);

        printf("\nArea Analitica: %0.4f\n", area_ana);
        printf("Area Simpson 3/8: %0.4f\n", area_simp3);
        printf("Error del metodo: %0.4f\n", error);
        printf("\nDesea otro calculo 1:Si 2:No ");
        scanf("%d", &opc);
    } while (opc != 2);
     printf("\n__________________________________________________________________________________________\n");
    printf("\n                    Conclusiones\n\n");
    printf("El metodo de Simpson 3/8 es una tecnica de integracion numerica que proporciona una forma precisa \n");
	printf("de estimar el area bajo una curva, especialmente cuando la funcion es dificil de integrar analiticamente. \n");
	printf("Este metodo utiliza polinomios de tercer grado para aproximar la funcion en intervalos mas pequenos,\n");
	printf("logrando mayor precision que otros metodos numericos. En la ingenieria robotica, el metodo de \n");
	printf("Simpson 3/8 es fundamental en varias areas. En la planificacion de trayectorias, permite integrar\n");
	printf(" ecuaciones de movimiento con precision, asegurando trayectorias suaves y eficientes que evitan \n");
	printf("colisiones. Para el control de movimiento, es crucial para calcular posiciones, velocidades y \n");
	printf("aceleraciones, mejorando la respuesta dinamica del robot y reduciendo errores en el seguimiento\n");
	printf(" de trayectorias. En el modelado y simulacion, se usa para simular el comportamiento del robot bajo\n");
	printf("diferentes condiciones operativas, lo cual es esencial para disenar y probar algoritmos de control\n");
	printf("antes de su implementacion en robots reales. Ademas, en la calibracion de sensores, ayuda a procesar\n");
	printf("datos con precision, mejorando la exactitud de las mediciones y el rendimiento del robot. El metodo\n");
	printf("de Simpson 3/8 es una herramienta valiosa en la ingenieria robotica, proporcionando soluciones precisas\n");
	printf("para la integracion de funciones complejas. Su uso mejora significativamente la eficiencia, seguridad\n");
	printf("y efectividad de los robots en diversas aplicaciones industriales y de investigacion.\n");
    printf("\n__________________________________________________________________________________________\n");
    return 0;
}
