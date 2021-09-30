#include <stdio.h>
#include <math.h>
int main(){
    float radio = 0;
    float perimetro = 0;
    float area = 0;
    const float PI = 3.14;
    printf("Ingrese el valor del radio para saber su area y perimetro correspondiente\n");
    scanf("%f", &radio);
    area = PI * radio * radio;
    perimetro = 2 * PI * radio;
    printf("el valor del perimetro es: %f\n", perimetro);
    printf("el valor del area es: %f\n", area);
    return 0;
}