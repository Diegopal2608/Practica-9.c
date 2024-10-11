#include <stdio.h>
int main ()
{
int lista[10]; // Se declara el arreglo unidimensional
int indice=0;
int numeroElementos=0;
printf("\nDa un número entre 1 y 10 para indicar la cantidad de elementos que tiene el arreglo\n");
scanf("%d",&numeroElementos);
if((numeroElementos>=1) && (numeroElementos<=10))
{
// Se almacena un número en cada elemento del arreglo unidimensional usando for
for (indice = 0 ; indice <= numeroElementos-1 ; indice++)
{
printf("\nDar un número entero para el elemento %d del arreglo", indice );
scanf("%d",&lista[indice]);
}
printf("\nLos valores dados son: \n");
// Se muestra el número almacenado en cada elemento del arreglo unidimensional usando for
for (indice = 0 ; indice <= numeroElementos-1 ; indice++)
{
printf("%d ", lista[indice] );
}
}
else printf("el valor dado no es válido");
printf("\n");
return 0;
}

#include <stdio.h>
int main ()
{
char *ap, c = 'a'; // Se declara el apuntador ap de tipo alfanumérico
ap = &c; //Se le asigna al apuntador la dirección de memoria de la variable c
printf("Carácter: %c\n",*ap); /* Se imprime el contenido de la variable a la
que apunta el apuntador ap */
printf("Código ASCII: %d\n",*ap); /*Se imprime el código ASCII del carácter
‘a’ */
printf("Dirección de memoria: %d\n",ap);/*Se imprime la dirección de
memoria que almacena el apuntador*/
return 0;
}
#include <stdio.h>
int main ()
{
char *ap, c = 'a'; // Se declara el apuntador ap de tipo alfanumérico
ap = &c; //Se le asigna al apuntador la dirección de memoria de la variable c
printf("Carácter: %c\n",*ap); /* Se imprime el contenido de la variable a la
que apunta el apuntador ap */
printf("Código ASCII: %d\n",*ap); /*Se imprime el código ASCII del carácter
‘a’ */
printf("Dirección de memoria: %d\n",ap);/*Se imprime la dirección de
memoria que almacena el apuntador*/
return 0;
}
programa 4
#include<stdio.h>
int main ()
{
int a = 5, b = 10, c[10] = {5, 4, 3, 2, 1, 9, 8, 7, 6, 0};
int *apEnt;
apEnt = &a;
printf("a = 5, b = 10, c[10] = {5, 4, 3, 2, 1, 9, 8, 7, 6, 0}\n");
printf("apEnt = &a\n");
/*A la variable b se le asigna el contenido de la variable a la que
apunta apEnt*/
b = *apEnt;
printf("b = *apEnt \t-> b = %i\n", b);
/*A la variable b se le asigna el contenido de la variable a la que
apunta apEnt y se le suma uno*/
b = *apEnt +1;
printf("b = *apEnt + 1 \t-> b = %i\n", b);
//La variable a la que apunta apEnt se le asigna el valor cero
*apEnt = 0;
printf("*apEnt = 0 \t-> a = %i\n", a);
/*A apEnt se le asigna la dirección de memoria que tiene el elemento 0
del arreglo c*/
apEnt = &c[0];
printf("apEnt = &c[0] \t-> apEnt = %i\n", *apEnt);
return 0;
}


#include<stdio.h>
int main ()
{
int a = 5, b = 10, c[10] = {5, 4, 3, 2, 1, 9, 8, 7, 6, 0};
int *apEnt;
apEnt = &a;
printf("a = 5, b = 10, c[10] = {5, 4, 3, 2, 1, 9, 8, 7, 6, 0}\n");
printf("apEnt = &a\n");
/*A la variable b se le asigna el contenido de la variable a la que
apunta apEnt*/
b = *apEnt;
printf("b = *apEnt \t-> b = %i\n", b);
/*A la variable b se le asigna el contenido de la variable a la que
apunta apEnt y se le suma uno*/
b = *apEnt +1;
printf("b = *apEnt + 1 \t-> b = %i\n", b);
//La variable a la que apunta apEnt se le asigna el valor cero
*apEnt = 0;
printf("*apEnt = 0 \t-> a = %i\n", a);
/*A apEnt se le asigna la dirección de memoria que tiene el elemento 0
del arreglo c*/
apEnt = &c[0];
printf("apEnt = &c[0] \t-> apEnt = %i\n", *apEnt);
return 0;
}

#include <stdio.h>
int main ()
{
int lista[5] = {10, 8, 5, 8, 7};
int *ap = lista; //Se declara el apuntador ap
int indice;
printf("\tLista\n");
//Se accede a cada elemento del arreglo haciendo uso del ciclo for
for (indice = 0 ; indice < 5 ; indice++)
{
printf("\nCalificación del alumno %d es %d", indice+1,
*(ap+indice));
}
printf("\n");
return 0;
}
