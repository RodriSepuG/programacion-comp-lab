#include <stdio.h> 

int main () {

    int numero1 = 0;
    int numero2 = 0;
    int resultado = 0;

    printf("Ingrese el primer número entero a multiplicar\n");
    scanf("%d", &numero1);
    printf("Ingrese el segundo número entero para multiplicar porfavor\n");
    scanf("%d", &numero2);

    for (int i = 0; i<numero2; i++);
{
    resultado +=  numero1;
        
    }

    printf("El resultado de %d * %d es: %d\n", numero1, numero2, resultado);
    return 0;


    }