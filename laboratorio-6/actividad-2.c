#include<stdio.h>

int main() {
    int numero1;
    int numero2;
    int numero3;
    int mayor;
    
    printf("Ingrese el primer numero por favor:\n");
    scanf("%d", &numero1);
    printf("Ingrese el segundo numero por favor:\n");
    scanf("%d", &numero2);
    printf("Ingrese el ultimo numero por favor:\n");
    scanf("%d", &numero3);
    if (numero1 == numero2 && numero2 == numero3){
    printf("Los tres numeros ingresados son iguales\n");
    }
    else if(numero1 > numero2 && numero1 > numero3){
    printf("El numero ingresado con el mayor valor es %d\n", numero1);
    }
    else if (numero2 > numero1 && numero2 > numero3){
    printf("El numero ingresado con el mayor valor es %d\n", numero2);
    }
    else {
    printf("El numero ingresado con el mayor valor es %d\n", numero3);
    }
    return 0;
}