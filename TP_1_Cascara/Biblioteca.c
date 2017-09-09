#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"
#include <math.h>

float ingFloat(char texto[])
{
    float numero;
    printf("%s", texto);
    scanf("%f", &numero);
    return numero;
}

float Sumar(float nu1, float nu2)
{
    float sumar;
    sumar= nu1 + nu2;
    return sumar;
}

float Restar (float nu1, float nu2)
{
    float restar;
    restar= nu1 - nu2;
    return restar;
}

float Dividir(float nu1, float nu2)
{
    float dividir;
    dividir= nu1 / nu2;
    return dividir;
}

float Multiplicar(float nu1, float nu2)
{
    float multiplicar;
    multiplicar= nu1* nu2;
    return multiplicar;
}

long long int Factorial (int num)
{
    long long int factorial= 1;
    for (int i= num; i> 0; i--)
    {
        factorial= factorial* i;
    }
    return factorial;
}

char mayorCero (int numero)
{
    char respuesta= 's';
    if (numero < 0)
    {
        respuesta= 'n';
    }
    return respuesta;

}

char CeroNoEs(float numero)
{
    char resultado= 's';
    if (numero== 0)
    {
        resultado= 'n';
    }
    return resultado;
}

int Posibilidades(float numFac, float numDiv)
{
    int posibilidad, respFac;
    char respDiv;
    respFac= valiFactor(numFac); // Devuelve 1 si puede hacerse el factorial, 2 si el numero no es entero, 3 si es negativo.
    respDiv= CeroNoEs(numDiv); // Devuelve 'n' si es cero, 's' si no es cero.

    if (respDiv== 's' && respFac == 1) // Uno (1) significa que  ambas operaciones son validas.
    {
        posibilidad= 1;
        return posibilidad;
    }else
    {
        if (respDiv== 's' && respFac== 2) //Dos (2) es que la division es valida y el factorial no se puede porque no es entero.
        {
            posibilidad= 2;
            return posibilidad;
        }else
        {
            if (respDiv== 's' && respFac== 3) //Tres (3) es que la division sea valida y el factorial invalido porque el numero es negativo.
            {
                posibilidad= 3;
                return posibilidad;
            }else
            {
                if (respDiv!= 's' && respFac== 1) //Cuatro (4) es que la division es invalida, y el factorial valido.
                {
                    posibilidad = 4;
                    return posibilidad;
                }
                else
                {
                    if (respDiv!='s' && respFac == 2) //Cinco (5) es que la division es invalida y el factorial es invalido porque  no es entero.
                    {
                        posibilidad= 5;
                        return posibilidad;
                    }else
                    {
                        if (respDiv!='s' && respFac== 3) //Seis (6) es que la division es invalida y el factorial es un numero negativo.
                        {
                            posibilidad= 6;
                            return posibilidad;
                        }
                    }
                }
            }
        }
    }
    return Posibilidades;
}

float validarFactor(float numero)
{
    int respuesta;
    double fraccion, entero;
    fraccion= modf(numero,&entero);
    if(fraccion== 0.00000)
    {
        if(entero>= 0)
        {
            respuesta = 1; // Realizar el factorial es valido.
        }else
        {
            respuesta = 3; //EL numero que se ingreso es negativo.
        }
    }else
    {
        respuesta = 2;// El numero que se ingreso no es un entero.
    }
    return respuesta;

}
