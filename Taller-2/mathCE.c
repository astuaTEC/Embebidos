#include "mathCE.h"

/**
 * Funcion auxiliar para obtener el valor absoluto de un double
 * |a| = -1*a si a < 0
 * |a| = a si a >= 0
*/
double fabs_t(double a){
	if( a < 0.0){
		return -1*a;
	} else return a;
}

/**
 * Función para obtener la suma de dos números
 * a + b = c
*/
double suma(double a, double b)
{
	return a + b;
}

/**
 * Función para restar dos números
 * a - b = c
*/
double resta(double a, double b)
{
	return a - b;
}

/**
 * Función para multiplicar dos números
 * a * b = c
*/
double mul(double a, double b)
{
	return a * b;
}

/**
 * Función para dividir dos números
 * a / b = c
*/
double divi(double a, double b)
{
	// Error si el  cociente es 0, ya que no se puede dividir
	if (b == 0.0)
		exit(-1);
	return a / b;
}

/**
 * Función para sacar la raíz cuadrada de un número por aproximación.
 * Ref: https://github.com/FabianNorbertoEscobar/Programacion-Estructurada-en-C/blob/master/aproximar%20ra%C3%ADz%20cuadrada/funciones.c
*/
double raiz(double x)
{
	float t_ant, t_act;
	t_act = 1; // primer término de la serie
	do
	{
		t_ant = t_act;
		t_act = (t_ant + x / t_ant) / 2;
	} while (fabs_t(t_act - t_ant) >= TOL); // dejo de ciclar cuando el módulo de la diferencia entre dos términos sucesivos sea menor que la tolerancia
	return t_act;
}

/**
 * Función para obtener el coseno de un número en radianes
 * Ref: https://github.com/FabianNorbertoEscobar/Programacion-Estructurada-en-C/blob/master/aproximar%20coseno/funciones.c
*/
double coseno(double x)
{
	int i, signo;
	float cos, ult; // ult=último término
	i = 1;
	cos = ult = 1;						 // primer término
	signo = -1;							 // comienzo con signo negativo porque el segundo término es negativo
	while (fabs_t(ult) > TOL)				 // deja de ciclar cuando el módulo del último término no sea mayor que la tolerancia
	{									 // fabs calcula el módulo de un flotante
		ult = ult * x * x / i / (i + 1); // calculo un nuevo término
		cos += (signo * ult);
		signo *= -1; // cambio de signo
		i += 2;		 // los exponentes se incrementan de a dos
	}
	return cos;
}