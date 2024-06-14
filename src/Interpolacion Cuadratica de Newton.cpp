/* Metodo de Interpolacion */

/*Usando el procedimiento de Interpolación cuadratica de Newton */

/* Realizado por Ing. M.Javier Rosas */

#include <stdio.h>
#include <dos.h>
#include <windows.h>
#include <time.h>
#include <math.h>

void encabezado();
void cap_puntos();
void coef();
void imp_coef();
void polinomio();
void puntos_inter();

float x[5],y[5],z;
float b0,b1,b2;
int i;

/* programa principal */

int main()
{
encabezado();
cap_puntos();
coef();
imp_coef();
polinomio();
puntos_inter();
}
//fin de programa principal

void polinomio() 
{
printf("\n\nEl polinomio es:");
printf("p(x)=(%f) + (%f)(x-x0) + (%f) (x-x0) (x-x1)",b0,b1,b2);
}

void puntos_inter()
{
printf("\n\n             X                 f(x)               p(x)\n");
for (z=x[0];z<=x[2];z=z+0.5){
printf("          %f ",z);
printf("          %f",log(z));
printf("          %f \n", b0+b1* (z-x[0])+b2*(z-x[0])*(z-x[1]));
}
 printf("\n__________________________________________________________________________________________\n\n");
    printf("\n                    Conclusiones\n\n");
    printf("La interpolacion cuadratica de Newton nos permite estimar valores intermedios dentro de un conjunto de datos conocidos.\n");
	printf("Al utilizar polinomios de segundo grado, esta metodologia nos proporciona una curva suave y precisa entre los puntos dados, \n");
	printf("lo que facilita la prediccion de valores desconocidos con una mayor exactitud que la interpolacion lineal. Ademas, al ajustar\n");
	printf("una parabola a los datos, la interpolacion cuadratica de Newton puede proporcionar una representacion mas fiel de la tendencia\n");
	printf("subyacente en el conjunto de datos, lo que la convierte en una herramienta valiosa en diversos campos, como la ingenieria,\n");
	printf("la ciencia de datos y la fisica.");
}

void imp_coef()
{
printf("\nLos coeficientes son:\n");
printf("b0= %f b1= %f b2=%f ",b0,b1,b2);
}
/* calculo de coeficientes */
void coef()
{
b0=y[0];
b1=(y[1]-y[0])/(x[1]-x[0]);
b2=((y[2]-y[1])/(x[2]-x[1])-(y[1]-y[0])/(x[1]-x[0]))/(x[2]-x[0]);
}
/* captura de puntos */
void cap_puntos ()
{
printf("\nTeclee las cordenadas de los puntos: \n");
for(i=0;i<=2;i++){
printf("Punto %d valor de x%d=",i,i);
scanf("%f",&x[i]);
printf(".               valor de y%d=",i);
scanf("%f",&y[i]);
}
}

/* fin rutina captura coeficientes */

void encabezado ()
{
//clrscr();
//gotoxy (5,1);

 printf("\n                        I.P.N. - E.S.I.M.E. - U.AZC.\n");
      printf("__________________________________________________________________________________________");
     printf("\nAlumnos Equipo N\n");
      printf("\n04 Carrillo Mote Ingrit Alexia                             Profesor: David D. Zamilpa\n");
      printf("\n18 Morales Marquez Osiel Patricio                          Bibliografia: M. Javier Rosas\n");
      printf("\n24 Rodriguez Rodriguez Hiram\n");
      printf("__________________________________________________________________________________________");
      printf("\n                  Practica No. 6b - Interpolacion Cuadratica de Newton\n");
	  printf("\n             (UT-III.- Interpolacion para Aproximacion Funcional)\n");
	   printf("__________________________________________________________________________________________");
	   printf("\n Datos:\n f(x)=2x^3-11x^2+12x+5\n");
	printf("__________________________________________________________________________________________\n\n");
}
