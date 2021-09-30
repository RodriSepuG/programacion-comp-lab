#include <stdio.h>

int main() {

    int prueba1 = 0;
    int prueba2 = 0;
    int prueba3 = 0; 
    int laboratorios = 0;
    int tarea1 = 0;
    int tarea2 = 0;
    int tarea3 = 0;
    
    printf("Ingrese la nota de la prueba 1 por favor:\n");
    scanf("%f", prueba1);
    printf("Ingrese la nota de la prueba2 por favor:\n");
    scanf("%f", prueba2);
    printf("Ingrese la nota final de los laboratorios por favor:\n");
    scanf("%f", laboratorios);
    printf("Ingrese la nota de la tarea 1 por favor:\n");
    scanf("%f", tarea1);
    printf("Ingrese la nota de la terea 2:\n");
    scanf("%f", tarea2);
    printf("Ingrese la nota de la tarea 3:\n");
    scanf("%f", tarea3);
    prueba3 = (4.0 - 0.5 * (0.2 * tarea1 + 0.25 * tarea2 + 0.35 * tarea3 + 0.2 * laboratorios) - 0.5 * (0.2 * prueba1 + 0.25 * prueba2)) / (0.5 * 0.45);

    printf("Para que se apruebe el curso en la Prueba 3 debe tener %.1f\n", prueba3);

    return 0;
}