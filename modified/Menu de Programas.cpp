#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void clearScreen();
void menuRaicesDeEcuaciones();
void menuSolucionesDeEcuaciones();
	void Gauss();
	void GaussJordan();
	void GaussSeidel();
void menuInterpolacion();
	void InterLineal();
	void InterCuadratica();
	void InterCubica();
	void Lagrange();
	void MinCuadrados();
	void RegresionCuadratica();
	void RegresionMultiple();
void menuIntegracionNumerica();
	void Trapecios();
	void Simpsontercio();
	void SimpsonOctavo();
	void SimpsonConbinado(); 
void menuEcuacionesDiferenciales();
	void Euler();
	void Range();

int main() {
    int opcion;

    do {
        clearScreen();
        printf("\n                           INSTITUTO POLITECNICO NACIONAL                            ");
        printf("\n                  ESCUELA SUPERIOR DE INGENIERIA MECANICA Y ELECTRICA                ");
        printf("\n                                UNIDAD AZCAPOTZALCO                                \n");
        printf("\n                              ING. ROBOTICA INDUSTRIAL                             \n");
        printf("__________________________________________________________________________________________");
        printf("\n Alumnos:                                                   Equipo N\n");
        printf("\n 01 Alonso Sanchez Paulo Cesar                              Profesor: David D. Zamilpa\n");
        printf("\n 04 Carrillo Mote Ingrit Alexia                             Bibliografia: M. Javier Rosas\n");
        printf("\n 18 Morales Marquez Osiel Patricio  \n");
        printf("\n 22 Rodriguez Rodriguez Hiram\n");
        printf("__________________________________________________________________________________________");
        printf("\n           	             Paquete de Metodos Numericos\n");
        printf("__________________________________________________________________________________________\n\n");

        printf("Menu Principal:\n");
        printf("1. Raices de Ecuaciones\n");
        printf("2. Soluciones de Ecuaciones\n");
        printf("3. Interpolacion para Aproximacion Funcional\n");
        printf("4. Integracion Numerica\n");
        printf("5. Ecuaciones Diferenciales\n");
        printf("6. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                menuRaicesDeEcuaciones();
                break;
            case 2:
                menuSolucionesDeEcuaciones();
                break;
            case 3:
                menuInterpolacion();
                break;
            case 4:
                menuIntegracionNumerica();
                break;
            case 5:
                menuEcuacionesDiferenciales();
                break;
            case 6:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion no valida. Presione una tecla para continuar...");
                getch();
        }
    } while(opcion != 6);

    return 0;
}

void clearScreen() {
    system("cls"); // Limpia la pantalla en sistemas Windows
}

void menuRaicesDeEcuaciones() {
    int opcion;
    
    do {
        clearScreen();
        printf(" Raices de Ecuaciones:\n");
        printf(" 1. Biseccion\n");
        printf(" 2. Tangente\n");
        printf(" 3. Secante\n");
        printf(" 4. Regresar al menu principal\n");
        printf(" Seleccione una opcion: ");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1:
                // Aqui metodo de Biseccion
                printf(" Metodo de Biseccion\n");
                break;
            case 2:
                // Aqui metodo de Tangente
                printf(" Metodo de Tangente\n");
                break;
            case 3:
                // Aqui metodo de Secante
                printf(" Metodo de Secante\n");
                break;
            case 4:
                return;
            default:
                printf(" Opcion no valida. Presione una tecla para continuar...");
                getch();
        }
    } while(opcion != 4);
}

void menuSolucionesDeEcuaciones() {
    int opcion;
    
    do {
        clearScreen();
        printf(" Soluciones de Ecuaciones:\n");
        printf(" 1. Gauss\n");
        printf(" 2. Gauss Jordan\n");
        printf(" 3. Gauss Seidel\n");
        printf(" 4. Regresar al menu principal\n");
        printf(" Seleccione una opcion: ");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1:
                // Aqui metodo de Gauss
                printf(" Metodo de Gauss\n");
                break;
            case 2:
                // Aqui Gauss Jordan
                printf(" Metodo de Gauss Jordan\n");
                break;
            case 3:
                // Aqui metodo de Gauss Seidel
                printf(" Metodo de Gauss Seidel\n");
                break;
            case 4:
                return;
            default:
                printf(" Opcion no valida. Presione una tecla para continuar...");
                getch();
        }
    } while(opcion != 4);
}

void menuInterpolacion() {
    int opcion;
    
    do {
        clearScreen();
        printf(" Interpolacion para Aproximacion Funcional:\n");
        printf(" 1. Interpolacion Lineal\n");
        printf(" 2. Interpolacion Cuadratica\n");
        printf(" 3. Interpolacion Cubica\n");
        printf(" 4. Lagrange\n");
        printf(" 5. Minimos Cuadrados\n");
        printf(" 6. Regresion Cuadratica\n");
        printf(" 7. Regresion Lineal Multiple\n");
        printf(" 8. Regresar al menu principal\n");
        printf(" Seleccione una opcion: ");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1:
                // Aqui Interpolacion Lineal
                printf("  Metodo de Interpolacion Lineal\n");
                break;
            case 2:
                // Aqui Interpolacion Cuadratica
                printf(" Metodo de Interpolacion Cuadratica\n");
                break;
            case 3:
                // Aqui Interpolacion Cubica
                printf(" Metodo de Interpolacion Cubica\n");
                break;
            case 4:
                // Aqui metodo de Lagrange
                printf(" Metodo de Lagrange\n");
                break;
            case 5:
                // Aqui  Minimos Cuadrados
                printf(" Metodo de Minimos Cuadrados\n");
                break;
            case 6:
                // Aqui Regresion Cuadratica
                printf(" Metodo de Regresion Cuadratica\n");
                break;
            case 7:
                // Aqui pega el codigo del metodo de Regresion Lineal Multiple
                printf(" Metodo de Regresion Lineal Multiple\n");
                break;
            case 8:
                return;
            default:
                printf(" Opcion no valida. Presione una tecla para continuar...");
                getch();
        }
    } while(opcion != 8);
}

void menuIntegracionNumerica() {
    int opcion;
    
    do {
        clearScreen();
        printf("  Integracion Numerica:\n");
        printf(" 1. Trapecios\n");
        printf(" 2. Simpson 1/3\n");
        printf(" 3. Simpson 3/8\n");
        printf(" 4. Simpson Combinado\n");
        printf(" 5. Regresar al menu principal\n");
        printf(" Seleccione una opcion: ");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1:
                // Aqui metodo de Trapecios
                printf(" Metodo de Trapecios\n");
                break;
            case 2:
                //  Aqui metodo de Simpson 1/3
                printf(" Metodo de Simpson 1/3\n");
                break;
            case 3:
                // Aqui metodo de Simpson 3/8
                printf(" Metodo de Simpson 3/8\n");
                break;
            case 4:
                // Aqui metodo de Simpson Combinado
                printf(" Metodo de Simpson Combinado\n");
                break;
            case 5:
                return;
            default:
                printf("Opcion no valida. Presione una tecla para continuar...");
                getch();
        }
    } while(opcion != 5);
}

void menuEcuacionesDiferenciales() {
    int opcion;
    
    do {
        clearScreen();
        printf("  Ecuaciones Diferenciales:\n");
        printf(" 1. Metodo de Euler\n");
        printf(" 2. Metodo de Runge-Kutta\n");
        printf(" 3. Regresar al menu principal\n");
        printf(" Seleccione una opcion: ");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1:
                printf(" Metodo de Euler\n");
                break;
            case 2:
                printf(" Metodo de Runge-Kutta\n");
                break;
            case 3:
                return;
            default:
                printf(" Opcion no valida. Presione una tecla para continuar...");
                getch();
        }
    } while(opcion != 3);
}
