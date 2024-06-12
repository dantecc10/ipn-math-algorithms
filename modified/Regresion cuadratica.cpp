#include <stdio.h>
#include <conio.h>
#include <math.h>

int n,m, i,j,k, cl,ln, ind=0;
float M[10][4], E[4][5], ve[4]= {0,0,0,0}, suma_xi,suma_yi,suma_xi2, suma_xi3,suma_xi4,suma_xiyi, suma_xi2yi, piv=0.0, cero=0.0;

int regresion_cuadratica_p13() {
	suma_xi=suma_yi=suma_xi2=suma_xi3=suma_xi4=0.0;
	suma_xiyi=suma_xi2yi=0.0;
	cl=ln=0;
	i=j=n=m=0;
	for(i=0; i<10; i++) {
		for(j=0; j<4; j++) {
			M[i][j]=0.0;
		}
	}
	for(i=0; i<4; i++) {
		for(j=0; j<5; j++) {
			E[i][j]=0.0;
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
	printf("\n                  Practica No. 9 - Regresion Cuadratica\n");
	printf("\n             (UT-IV.- Minimos Cuadrados)\n");
	printf("__________________________________________________________________________________________");
	printf("\n \n");
	printf("__________________________________________________________________________________________\n\n");

	printf("Numero de puntos a aproximar: ");
	scanf("%d",&n);
	cl=1;

	for (i=1; i<=n; i++) {
		ln=2;
		cl=cl+10;
		printf("x%d=",i);
		scanf("%f",&M[i][1]);
		ln=3;
		printf("y%d=",i);
		scanf("%f",&M[i][2]);
	}

	m=2;
	for (i=1; i<=n; i++) {
		suma_xi     =  suma_xi + M[i][1];
		suma_yi     =  suma_yi + M[i][2];
		suma_xi2    =  suma_xi2 + pow(M[i][1],2);
		suma_xi3    =  suma_xi3 + pow(M[i][1],3);
		suma_xi4    =  suma_xi4 + pow(M[i][1],4);
		suma_xiyi   =  suma_xiyi +(M[i][1]*M[i][2]);
		suma_xi2yi  =  suma_xi2yi + (pow(M[i][1],2)*M[i][2]);
	}
	printf("\n");
	printf(" n = %d",n);
	printf("\n");
	printf(" m = %d",m);
	printf("\n\n");
	printf(" suma_xi      = %f",suma_xi);
	printf("\n");
	printf(" suma_yi      = %f",suma_yi);
	printf("\n");
	printf(" suma_xi2     = %f",suma_xi2);
	printf("\n");
	printf(" suma_xi3     = %f",suma_xi3);
	printf("\n");
	printf(" suma_xi4     = %f",suma_xi4);
	printf("\n");
	printf(" suma_xiyi    = %f",suma_xiyi);
	printf("\n");
	printf(" suma_xi2yi   = %f",suma_xi2yi);
	printf("\n");

	printf("\n Pulse <Enter> para continuar: ");
	getch();
	printf("\n\n");
	printf(" Sust. resultados se obtiene el sistema de ecuaciones: \n\n");

	E[1][1]=n;
	E[1][2]=suma_xi;
	E[1][3]=suma_xi2;
	E[1][4]=suma_yi;
	E[2][1]=suma_xi;
	E[2][2]=suma_xi2;
	E[2][3]=suma_xi3;
	E[2][4]=suma_xiyi;
	E[3][1]=suma_xi2;
	E[3][2]=suma_xi3;
	E[3][3]=suma_xi4;
	E[3][4]=suma_xi2yi;
	ln=18;
	for(i=1; i<=3; i++) {
		ind=0;
		cl=1;
		ln=ln+1;
		for(j=1; j<=4; j++) {
			printf("%.4f",E[i][j]);
			printf("  a%d       ",ind);
			ind=ind+1;
			if(j==3) {
				printf("     =     ");
				printf("%f",E[i][4]);
			}
		}

		printf("\n");
	}

	for(i=1; i<=3; i++) {
		piv=E[i][i];
		for(j=1; j<=4; j++) {
			E[i][j]=E[i][j]/piv;
		}
		for(k=1; k<=3; k++) {
			if (k != i) {
				cero = E[k][i];
				for(j=i; j<=4; j++) {
					E[k][j]=E[k][j]-cero*E[i][j];
				}
			}
		}
	}

	printf("\n");
	for (i=1; i<=3; i++) {
		ve[i]=E[i][4];
	}
	printf("\n");
	printf("   La ec. cuadratica es: y = %f + %fx + %fx^2",ve[1],ve[2],ve[3]);

	printf("\n__________________________________________________________________________________________\n");
	printf("\n                    Conclusiones\n\n");
	printf("En resumen, el metodo de minimos cuadrados para la regresion cuadratica es una valiosa herramienta en el analisis de datos, \n");
	printf("especialmente cuando nos encontramos con relaciones no lineales entre variables. Al aplicar este metodo, podemos encontrar una funcion\n");
	printf("cuadratica que se ajuste de manera optima a nuestros datos, lo que nos permite entender mejor la naturaleza de la relacion entre \n");
	printf("las variables y hacer predicciones mas precisas sobre los valores futuros.\n");
	printf("Es importante destacar que, si bien este metodo ofrece muchas ventajas, tambien tiene sus limitaciones. \n");
	printf("Es crucial interpretar correctamente los resultados obtenidos y tener en cuenta las posibles restricciones del modelo, \n");
	printf("especialmente al extrapolar mas alla del rango de datos observados. La extrapolacion imprudente puede conducir a predicciones \n");
	printf("poco confiables y erroneas.\n");
	printf("En ultima instancia, la regresion cuadratica a traves de minimos cuadrados es una herramienta valiosa cuando se usa \n");
	printf("con cuidado y se complementa con un analisis critico de los datos y del contexto en el que se aplican. \n");
	printf("Nos brinda la capacidad de comprender mejor los fenomenos subyacentes y tomar decisiones mas informadas en \n");
	printf("una variedad de campos, desde la ciencia y la ingenieria hasta la economia y la investigacion social.\n");
	printf("\n__________________________________________________________________________________________\n");
	getch();

	return 0;
}
