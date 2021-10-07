#include<stdio.h>
int main() {

    int numero = 0;
    printf("Ingrese un numero para indicar si es Par o Impar por favor:\n");
    scanf("%d", &numero);

    if(numero%2 == 0){
         printf("El numero ingresado es Par\n");
    } else {
        printf("El numero ingresado es Impar\n");
    }
    return 0;
}