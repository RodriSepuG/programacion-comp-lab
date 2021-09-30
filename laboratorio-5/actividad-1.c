#include <stdio.h>
int main() { 
    
    int numero1 = 0;
    int numero2 = 0;
    int suma = 0;

    printf("Ingrese el primer numero por favor\n");
    scanf("%i", &numero1);
    printf("Ingrese el segundo numero porfavor\n");
    scanf("%i", &numero2);
    suma = numero1 + numero2;
    printf("El resultado de la suma entre %i y %i es: %i\n", numero1, numero2, suma);
    return 0;
}