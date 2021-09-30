#include <stdio.h>
int main() {
    
    char caracter;
    printf("Bienvenido al conversor de caracteres ACII\n");
    printf("Ingrese el caracter que quiere convertir en ACII por favor\n");
    scanf("%c", &caracter);
    printf("El valor del caracter %c en codigo ACII es: %d", caracter, caracter);
    return 0; 
}