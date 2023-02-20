#include <stdio.h>
#include "mathCE.h" //Se incluye la libreria mathCE

#define PI 3.141592654  //Se define PI para probar el coseno

// COLORES para imprimir en consola
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"
#define RESET "\x1B[0m"

int main() {

    printf( KMAG "[SUMA] ---> " RESET "%d + %d, resultado ---> %.3f\n\n", 4, 5, suma(4, 5));

    printf( KBLU "[RESTA] ---> " RESET "%f - %f, resultado ---> %.3f\n\n", 20.3, 3.0 , resta(20.3, 3)); 

    printf( KRED "[MULTIPLICACION] ---> " RESET "%f * %f, resultado ---> %.3f\n\n", 44.5, 22.5 , mul(44.5, 22.5));

    printf( KYEL "[DIVISION] ---> " RESET "%d / %d, resultado ---> %.3f\n\n", 9, 6, divi(9, 6));

    printf(KCYN "[RAIZ] ---> " RESET "%d, resultado ---> %.3f\n\n", 49, raiz(49)); 

    printf( KGRN "[COSENO] ---> " RESET "cos(%.2f), resultado ---> %.3f\n", PI, coseno(PI));

    return 0;
}