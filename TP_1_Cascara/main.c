#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"
#include <math.h>
int main()
{
    char seguir= 's';
    int opcion= 0,posi , valiFactor;
    float sum, res, mul, div;
    char ceroNoEs;
    long long int factor;
    float num1= 0;
    float num2= 0;


    while(seguir =='s')
    {
        printf("1- Ingresar 1er operando (A=%.3f)\n", num1);
        printf("2- Ingresar 2do operando (B=%.3f)\n", num2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                num1 = ingFloat("Ingrese el operando A: ");
                system("clear");
                break;
            case 2:
                num2 = ingFloat("Ingrese el operando B: ");
                system("clear");
                break;
            case 3:
                sum = Sumar(num1,num2);
                system("clear");
                printf("\nLa suma de los operandos es: %.3f\n", sum);
                printf("\n");
                break;
            case 4:
                res = Restar(num1,num2);
                system("clear");
                printf("\nLa resta de los operandos es: %.3f\n", res);
                printf("\n");
                break;
            case 5:
                ceroNoEs = CeroNoEs(num2);
                if ( ceroNoEs == 'n' )
                {
                    system("clear");
                    printf("No se puede dividir por cero.\n");
                    printf("\n");
                }
                else
                {
                    div = Dividir(num1,num2);
                    system("clear");
                    printf("nLa division de los operandos es: %.3f\n", div);
                    printf("\n");
                }
                break;
            case 6:
                mul = Multiplicar(num1,num2);
                system("clear");
                printf("La multiplicacion de los operandos es: %.3f\n", mul);
                printf("\n");
                break;
            case 7:
                valiFactor = validarFactor(num1);
                switch (valiFactor)
                {
                    case 1:
                        factor = Factorial(num1);
                        system("clear");
                        printf("El factorial de %.0f es %lli \n", num1, factor);
                        printf("\n");
                        break;
                    case 2:
                        system("clear");
                        printf("No se puede obtener el factorial de un numero con coma. \n");
                        printf("\n");
                        break;
                    case 3:
                        system("clear");
                        printf("\nNo se puede obtener el factorial de un numero negativo. \n");
                        printf("\n");
                }
                break;
            case 8:
                posi= Posibilidades(num1, num2);
                sum= Sumar(num1,num2);
                res= Restar(num1,num2);
                mul= Multiplicar(num1,num2);

                switch(posi)
                {
                    case 1:
                        div= Dividir(num1,num2);
                        factor= Factorial(num1);
                        system("clear");
                        printf("\nLa suma de los operandos es: %.3f\nLa resta es: %.3f\nLa multiplicacion es: %.3f\nLa division es: %.3f \nEl factorial del operando A es: %lli\n", sum, res, mul, div, factor);
                        printf("\n");
                        break;
                    case 2:
                        div = Dividir(num1,num2);
                        system("clear");
                        printf("\nLa suma de los operandos es: %.3f\nLa resta es: %.3f\nLa multiplicacion es: %.3f\nLa division es: %.3f \nNo se puede obtener el factorial de un numero con coma\n", sum, res, mul, div);
                        printf("\n");
                        break;
                    case 3:
                        div = Dividir(num1, num2);
                        system("clear");
                        printf("\nLa suma de los operandos es: %.3f\nLa resta es: %.3f\nLa multiplicacion es: %.3f\nLa division es: %.3f \nNo se puede obtener el factorial de un numero negativo\n", sum, res, mul, div);
                        printf("\n");
                        break;
                    case 4:
                        factor = Factorial(num1);
                        system("clear");
                        printf("\nLa suma de los operandos es: %.3f\nLa resta es: %.3f\na multiplicacion es: %.3f\nNo puede dividirse por cero\nEl factorial del operando A es: %lli\n", sum, res, mul, factor);
                        printf("\n");
                        break;
                    case 5:
                        system("clear");
                        printf("\nLa suma de los operandos es: %.3f\nLa resta es: %.3f\nSa multiplicacion es: %.3f\nNo puede dividirse por cero\nNo se puede obtener el factorial de un numero con coma\n", sum, res, mul);
                        printf("\n");
                        break;
                    case 6:
                        system("clear");
                        printf("\nLa suma de los operandos es: %.3f\nLa resta es: %.3f\nLa multiplicacion es: %.3f\nNo puede dividirse por cero\nNo se puede obtener el factorial de un numero negativo\n", sum, res, mul);
                        printf("\n");
                        break;
                }
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }
    return 0;
}
