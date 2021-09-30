#include <stdio.h>
#include <math.h>

int main() {
    float numero1 = 0;
    float numero2 = 0;
    float resultado = 0;

    printf("Ingrese dos numeros a multiplicar\n");
    printf("Ingrese los dos numeros en forma X.X , Y.Y\n");
    scanf("%f", "%f", &numero1, numero2);

    resultado = numero1 * numero2;
    printf("el resultado de la multiplicacion entre %.2f y %.2f es: %.2f\n", numero1, numero2, resultado);

    return 0;

}