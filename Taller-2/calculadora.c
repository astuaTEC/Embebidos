#include <stdio.h>
#include "mathCE.h" //Se incluye la libreria mathCE

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

    int option = 10;
    double a, b, c = 0;

    while (option != 0)
    {
        a, b, c = 0;
        option = 10;
        printf(KRED "Digite una opción de las siguientes: \n\n" RESET);
        printf(KYEL "[1] " RESET "para la suma \n");
        printf(KYEL "[2] " RESET "para la resta \n");
        printf(KYEL "[3] " RESET "para la multiplicación\n");
        printf(KYEL "[4] " RESET "para la división \n");
        printf(KYEL "[5] " RESET "para la raíz cuadrada \n");
        printf(KYEL "[6] " RESET "para el coseno \n");
        printf(KYEL "[0] " RESET "para salir \n");

        scanf("%i", &option);

        switch (option)
        {
        case 1:
            printf(KGRN "Digite el primer número: \n" RESET);
            scanf("%lf", &a);
            printf(KGRN "Digite el segundo número: \n" RESET);
            scanf("%lf", &b);
            printf( KMAG "\n[SUMA] ---> " RESET "%.3lf + %.3lf, resultado ---> %.3f\n\n", a, b, suma(a, b));
            continue;
        case 2:
            printf(KGRN "Digite el primer número: \n" RESET);
            scanf("%lf", &a);
            printf(KGRN "Digite el segundo número: \n" RESET);
            scanf("%lf", &b);
            printf( KBLU "\n[RESTA] ---> " RESET "%.3lf - %.3lf, resultado ---> %.3lf\n\n", a, b , resta(a, b));
            continue;
        case 3:
            printf(KGRN "Digite el primer número: \n" RESET);
            scanf("%lf", &a);
            printf(KGRN "Digite el segundo número: \n" RESET);
            scanf("%lf", &b);
            printf( KRED "\n[MULTIPLICACION] ---> " RESET "%.3lf * %.3lf, resultado ---> %.3lf\n\n", a, b , mul(a, b));
            continue;
        case 4:
            printf(KGRN "Digite el primer número: \n" RESET);
            scanf("%lf", &a);
            printf(KGRN "Digite el segundo número: \n" RESET);
            scanf("%lf", &b);
            printf( KYEL "\n[DIVISION] ---> " RESET "%.3lf / %.3lf, resultado ---> %.3lf\n\n", a, b, divi(a, b));
            continue;
        case 5:
            printf(KGRN "Digite el número a aplicar la raíz cuadrada: \n" RESET);
            scanf("%lf", &a);
            printf(KCYN "\n[RAIZ] ---> " RESET "%.3lf, resultado ---> %.3f\n\n", a, raiz(a));
            continue;
        case 6:
            printf(KGRN "Digite el número a aplicar el coseno (en grados): \n" RESET);
            scanf("%lf", &a);
            printf( KGRN "\n[COSENO] ---> " RESET "cos(%.3lf), resultado ---> %.3f\n\n", a, coseno(a));
            continue;
        case 0:
            break;

        default:
            continue;
        }
    }
    

    return 0;
}