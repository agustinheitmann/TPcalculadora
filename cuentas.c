#include <stdio.h>
//Aqui definimos las cuentas a realizar, las mismas que se ejecutaran en la consola
    int Suma(int num1,int num2)//Operacion de la suma
            //Definimos sus dos variables
        {
            int respuesta;//Variable respuesta para contener la suma de ambos numeros
            respuesta=num1+num2;//Operacion.
            return respuesta; //retornamos el resultado de la suma
        }

    int Resta(int num1, int num2)//Operacion de la resta
        {
            int respuesta;
            respuesta=num1-num2;//Operacion
            return respuesta;
        }

    float Division(float num1, float num2)
        {
             int respuesta;
             if(num2==0)/*En caso de que el usuario introduzca el nro 0 en el segundo valor a introducir, siempre y cuando haya elegido la operacion "Division",
                el programa volvera a pedirle un numero*/
             {
                 printf("No se puede dividir por cero, ingrese un nuevo numero: ");
                 fflush(stdin);
                 scanf("%f",&num2);//Ingreso de un numero valido
                 respuesta=num1/num2;//Operacion.
             }
             else{//En caso de que no haya introducido el numero 0, el programa se ejecutara normalmente.

                respuesta=(float)num1 / num2;
            }

             return respuesta;

        }

    int Multiplicacion(int num1, int num2)//Operacion multiplicacion
        {
             int respuesta;
             respuesta=num1 * num2;
             return respuesta;
        }

    int Factorial(int fact)
        {
            int respuesta;//Operacion factorail
            if(fact==1)//En caso de que introduzcamos el numero 1, el resultado sera 1.
        {
        return 1;
            }else//En caseo de que no, el programa se ejecutara normalmente.
                {
                    respuesta=fact*Factorial(fact-1);
                }
         return respuesta;
         }
