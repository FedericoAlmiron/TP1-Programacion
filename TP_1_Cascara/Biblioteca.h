/**
/brief La funcion devuelve un float.
/param Recibe una cadena de caracteres, el cual se imprimirá por pantalla cuando se pida ingresar el dato.
/return Devuelve el dato ingresado por el usuario.
**/
float IngresoFloat(char texto[]);

/**
/brief Suma dos numeros.
/param Recibe un dato de tipo float.
/param Recibe un dato de tipo float.
/return Devuelve un float, resultado de la suma de los parametros ingresados.
**/
float Suma(float nu1, float nu2);

/**
/brief Resta dos numeros.
/param Recibe un dato de tipo flotante.
/param Recibe un dato de tipo flotante.
/return Devuelve un float, resultado de la resta de los parametros ingresados.
**/
float Resta (float nu1, float nu2);

/**
/brief Multiplica dos datos de tipo float.
/param Recibe un dato de tipo float.
/param Recibe un dato de tipo float.
/return Devuelve un float, resultado de la multiplicacion de los parametros ingresados.
**/
float Multiplicar(float nu1, float nu2);

/**
/brief Divide los parametros que recibe, en el orden ingresado.
/param Recibe un dato de tipo float.
/param Recibe un dato de tipo float.
/return Devuelve un float, resultado de los parametros ingresados.
**/
float Divi(float nu1, float nu2);

/**
/brief Devuelve el char 's' si el parametro ingresado no es un cero, si es cero un char 'n'.
/param Recibe un dato de tipo float.
/return Devuelve un char 'n' ó  's'.
**/
char NoEsCero(float numero);

/**
/brief Calcula el factorial del numero ingresado con una estructura repetitiva.
/param Recibe un dato de tipo int.
/return Devuelve un dato de tipo long long int, el factorial.
**/
long long int Factorial (int num);

/**
/brief Devuelve el char 's' si el numero ingresado como parametro es mayor a cero, o un char 'n' si es menor a cero.
/param Recibe un dato de tipo int
/return Devuelve un char 's' ó 'n'
**/
char MayorCero (int numero);

/**
/brief Se evalua cuál de las 4 posibles combinaciones de true or false se cumple a partir de los datos pasados como parametros.
/param Recibe un dato de tipo float
/param Recibe un dato de tipo float
/return Devuelve un int con valor 1, 2, 3 ó 4.
**/
int Posibilidades(float numFac, float numDiv);
