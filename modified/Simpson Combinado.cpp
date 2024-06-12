/* Programa del Metodo de Simpson Combinado */
#include <stdio.h>
#include <math.h>

// Declaración de funciones
float func_simp13(float x);
float integral(float x);

void marco() {
    printf("\n                        I.P.N. - E.S.I.M.E. - U.AZC.\n");
    printf("__________________________________________________________________________________________");
    printf("\nAlumnos Equipo N\n");
    printf("\n01 Alonso Sanchez Paulo Cesar                              Profesor: David D. Zamilpa\n");
    printf("\n04 Carrillo Mote Ingrit Alexia                             Bibliografia: M. Javier Rosas\n");
    printf("\n18 Morales Marquez Osiel Patricio\n");
    printf("\n24 Rodriguez Rodriguez Hiram\n");
    printf("__________________________________________________________________________________________");
    printf("\n                      Practica No. 11b - Simpson Combinado\n");
    printf("\n                        (UT-V.- Integracion Numerica)\n");
    printf("__________________________________________________________________________________________");
    printf("\n Ecuacion f(x) = (0.2 + 25x - 200x^2 + 675x^3 - 900x^4 + 400x^5) dx\n");
    printf("__________________________________________________________________________________________\n\n");
}

float func_simp13(float x) {
    return 0.2 + 25 * x - 200 * pow(x, 2) + 675 * pow(x, 3) - 900 * pow(x, 4) + 400 * pow(x, 5);
}

float integral(float x) {
    float y;
    y = 0.2 * x + 25 * pow(x, 2) / 2 - 200 * pow(x, 3) / 3;
    y += 675 * pow(x, 4) / 4 - 900 * pow(x, 5) / 5 + 400 * pow(x, 6) / 6;
    return y;
}

int simpson_combinado_p16() {
    int opc;
    float l_inf, l_sup, a1, a3, b1, b3, ix, sx, x;
    float segm, area_simpl, area_simp3;
    float area_ana, area_simp13, xi;
    float fx0, fx1, fx2, fx3, fx4, fx5, error;

    do {
        marco();
        printf("\nTeclee el limite inferior.. : ");
        scanf("%f", &l_inf);
        printf("Teclee el limite superior.. : ");
        scanf("%f", &l_sup);
        area_ana = integral(l_sup) - integral(l_inf);
        segm = (l_sup - l_inf) / 5;
        fx0 = func_simp13(l_inf);
        xi = l_inf + segm;
        fx1 = func_simp13(xi);
        xi = l_inf + 2 * segm;
        fx2 = func_simp13(xi);
        xi = l_inf + 3 * segm;
        fx3 = func_simp13(xi);
        xi = l_inf + 4 * segm;
        fx4 = func_simp13(xi);
        fx5 = func_simp13(l_sup);
        b1 = (l_inf + 2 * segm);
        a1 = l_inf;
        area_simpl = (b1 - a1) * (fx0 + 4 * fx1 + fx2) / 6;
        b3 = l_sup;
        a3 = b1;
        area_simp3 = (b3 - a3) * (fx2 + 3 * fx3 + 3 * fx4 + fx5) / 8;
        area_simp13 = area_simpl + area_simp3;
        error = fabs(area_ana - area_simp13);
        printf("\nArea Analitica = %0.4f", area_ana);
        printf("\nArea Numerica = %0.4f", area_simp13);
        printf("\nError del metodo %0.4f", error);
        printf("\nDesea otro calculo 1=Si 2=No ");
        scanf("%d", &opc);
    } while (opc != 2);
printf("\n__________________________________________________________________________________________\n");
    printf("\n                    Conclusiones\n\n");
    printf("El metodo de Simpson combinado es una tecnica eficaz en la integracion numerica, ofreciendo \n");
	printf("una aproximacion precisa al area bajo una curva cuando las funciones son complicadas de integrar\n");
	printf("analiticamente. Al mezclar el metodo de Simpson 1/3 con el de Simpson 3/8, se logra una mayor\n");
	printf("precision en la evaluacion de integrales, especialmente cuando la funcion tiene variaciones \n");
	printf("significativas en intervalos cortos. En el campo de la ingenieria, este metodo tiene numerosas\n");
	printf("aplicaciones practicas. Es esencial en la planificacion y control de trayectorias en robotica, \n");
	printf("permitiendo integrar ecuaciones de movimiento con exactitud y asegurando trayectorias suaves \n");
	printf("y eficientes. En el control de movimiento de robots, se emplea para calcular posiciones, \n");
	printf("velocidades y aceleraciones, mejorando la respuesta dinamica y disminuyendo errores. Ademas, en\n");
	printf("el modelado y simulacion de sistemas roboticos, este metodo es crucial para predecir el\n");
	printf("comportamiento del robot bajo diferentes condiciones operativas, facilitando el diseno y prueba\n"); 
	printf("de algoritmos de control antes de su implementacion. Tambien, en la calibracion de sensores y \n");
	printf("procesamiento de datos, el metodo de Simpson combinado ayuda a aumentar la precision de las \n");
	printf("mediciones y el rendimiento general de los sistemas roboticos. El metodo de Simpson combinado\n");
	printf("es una herramienta valiosa en la ingenieria, proporcionando soluciones precisas y eficientes\n");
	printf("para la integracion de funciones complejas, contribuyendo significativamente a la optimizacion\n");
	printf("y desarrollo de aplicaciones tecnologicas avanzadas.\n");
    printf("\n__________________________________________________________________________________________\n");
    return 0;
}
