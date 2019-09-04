#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main()
{
    int valor1; //Definimos la variables para "valor1" y "valor2" para que se ejecuten en nuestro main.
    int valor2;
    int opcion;//Introducimos estas variables para el uso del switch, tanto en la primera parte, como en la segunda
    int opcion2;
    char respuestaN ='n';/*Esta variable del tipo caracter, esta aqui con el fin de que si decidimos no utilizar
    la calculador por segunda vez, el programa termine.*/


    printf("Bienvenido a la calculadora, por favor ingrese los numeros que desea calcular \n\n");//Menu de bienvenida;

    printf("Ingrese el primer valor: ");
    scanf("%d",&valor1);//Ingresamos el primer valor.
    printf("Ingrese el segundo valor: ");
    scanf("%d",&valor2);//Ingresamos el segundo valor.
    fflush(stdin);

    printf("\n Introduzca el numero que acompaña a la operacion que usted desea realizar: ");
    //Menu con las opciones a elegir.

    printf("\n\n  1-Suma.");
    printf("\n  2-Resta.");
    printf("\n  3-Multiplicacion.");
    printf("\n  4-Division.");
    printf("\n  5-Factorial.\n");

    printf("\n Elija la funcion que desea realizar: ");
    scanf("%d",&opcion);//Introducimos la funcion que quiere realizar el usuario.

    while(opcion<=0 || opcion > 6)//En caso de que introduzca una opción erronea, el programa volvera a pedir el numero.
        {
            printf("Funcion Invalida, Ingrese el numero de la operacion que quiere realizar: ");
            fflush(stdin);
            scanf("%d", &opcion);
        }

   switch(opcion)//Aqui elegimos la operacion a realizar

   {

       case 1:printf("El resultado de la suma es : %d\n",Suma(valor1,valor2));//Obtenemos el resultado de la suma
       break;
       case 2:printf("El resultado de la resta es : %d\n",Resta(valor1,valor2));//Obtenemos el resultado de la resta
       break;
       case 3:printf("El resultado de la multiplicacion es : %d\n",Multiplicacion(valor1,valor2));//Obtenemos el resultado de la multiplicacion
       break;
       case 4:printf("El resultado de la division es : %.2f\n",Division(valor1,valor2));//Obtenemos el resultado de la division
       break;
       case 5:printf("El factoreo del primero es %d y del segundo es %d \n",Factorial(valor1),Factorial(valor2));//Obtenemos el resultado del factorial
       break;
    }

    printf("Si desea continuar, pulse la letra 's', y en caso ingrese de que no quiera continuar pulse la letra 'n' \n : ");
    fflush(stdin);//Aqui damos al usuario a elegir si quiere continuar con el programa.
    scanf("%c",&respuestaN);

    if(respuestaN=='n')//Si el usuario ingrese la letra "n", el programa finaliza con el siguiente mensaje
    {
       printf("Usted eligio la opcion salir, hasta luego.");//Mensaje de despedida, despues de que el usuario no continuar
       fflush(stdin);

    }

    else{//En caso de continuar, el usuario tendra que ingtesar de vuelta los valores a calcular

    printf("Ingrese el primer valor: ");
    scanf("%d",&valor1);
    printf("Ingrese el segundo valor: ");
    scanf("%d",&valor2);
    fflush(stdin);


    printf("Que operacion desea realizar: ");//Aqui la operacion a realizar

    printf("\n\n  1-Suma.");
    printf("\n  2-Resta.");
    printf("\n  3-Multiplicacion.");
    printf("\n  4-Division.");
    printf("\n  5-Factorial.");
    printf("\n  6-Salir \n ");

    printf("\n Elija la funcion que desea realizar: ");
    scanf("%d", &opcion2);//La funcion que desea realizar

      while(opcion2<=0 || opcion2 > 6)//En caso de que introduzca una opción erronea, el programa volvera a pedir el numero.
        {
            printf("Funcion Invalida, Ingrese el numero de la operacion que quiere realizar: ");
            fflush(stdin);
            scanf("%d", &opcion2);
        }

      switch(opcion2){
       case 1:printf("El resultado de la suma es : %d",Suma(valor1,valor2));//Resultado de la suma
       break;
       case 2:printf("El resultado de la resta es : %d",Resta(valor1,valor2));//Resultado de la resta
       break;
       case 3:printf("El resultado de la multiplicacion es : %d",Multiplicacion(valor1,valor2));//Resultado de la multiplicacion
       break;
       case 4:printf("El resultado de la division es : %.2f",Division(valor1,valor2));//Resultado de la division
       break;
       case 5:printf("El factoreo del primero es %d y del segundo es %d",Factorial(valor1),Factorial(valor2));//Resultado del factorial
       break;
       case 6:printf("Usted ha elegido la opcion 6, ha salido.");//En caso de que el usuario no haya querido continuar, tiene la opcion salir

        }

    }


    return 0;
}



