/* Universidad de La Frontera
* Departamento de Ingeniería Electrónica
*
* ICC-202 PROGRAMACION DE COMPUTADORES
*
* Tarea 2
*
* Autores: Rodrigo Sepúlveda. (r.sepulveda08@ufromail.cl)
* Fecha: 14 de noviembre de 2021
*
* Descripción general del programa: Pensiones solidaria con 4 tipos diferentes de sistemas para diferentes usuarios que pidan entrar, 
con diversos porcentajes de dinero acumulados, edad, edad de empiezo y sueldo, para que le sea conveniente a cada usuario.
*/
#include <stdio.h>


int main(){
    char nombre[50];
    int rut = 0;    
    int email= 0;
    int sueldo_mensual = 0;
    int edad = 0; 
    int edad_empiezo = 0;
    int mesestrabajado = 0;
    int dinero = 0;
    int opcion;
    int dinero2 = 0;
    int dinero3 = 0;
    int dinero4 = 0;


    printf("Bienvenido a cotizaciones SPS Chile:\n");
    printf("Ingrese sus datos:\n");
    
    printf("Ingrese solo su primer nombre:\n");
    scanf("%s", &nombre);
    printf("Ingrese su rut (sin guiones ni puntos):\n");
    scanf("%d", &rut);
    printf("Ingrese su edad:\n");
    scanf("%d", &edad);

    printf("Bienvenido Usuario, le presentamos nuestros planes para administrar sus ahorros para su jubilación:\n");
    printf("Ingrese la edad a la que entró a trabajar y su sueldo mensual\n");
    printf("Ingrese su edad cuando empezo a trabajar:\n");
    scanf("%d", &edad_empiezo);
    printf("Ingrese su sueldo mensual:\n");
    scanf("%d", &sueldo_mensual);
    mesestrabajado = (edad - edad_empiezo)*12;
    printf("El dinero que gana mensualmente al año es: %d\n", mesestrabajado);

    printf("Primer sistema de pension solidaria\n");
    printf("Se le descontara el 8 por ciento de su sueldo mensualmente, cubriria hasta que muera y más el aporte del estado ($176.320)\n");
    dinero = (sueldo_mensual)*0.08;
    dinero = dinero*mesestrabajado;
    dinero = dinero/300;
    dinero = dinero + 176320;
    printf("El dinero que recibira es:%d\n", dinero);

    printf("¿Desea obtener este sistema de pago?\n");
    printf("1.Si\n2.No\n");
    scanf("%d", &opcion);
    if (opcion == 2)
    {

        printf("Segundo sistema de pension privada\n");
        printf("Se le descontara el 9 por ciento de su sueldo mensualmente, cubriria hasta los 90 años, obtiene un sueldo base permanente ($120.000) y se le descontaria la ganancia del sistema que equivale al uno por ciento\n");
        dinero2 = (sueldo_mensual)*0.09;
        dinero2 = dinero2*mesestrabajado;
        dinero2 = dinero2 + 120000;
        dinero2 = dinero2 + (dinero2*0,001);

        printf("El dinero que recibira es:%d\n", dinero2);
        printf("¿Desea obtener este sistema de pago?\n");
        printf("1.Si\n2.No\n");
        scanf("%d", &opcion);
        if (opcion == 2)
        {
        printf("Tercer sistema de pension privada\n");
        printf("Se le descontara el 10 por ciento de su sueldo mensualmente, cubriria hasta los 85 años, obtiene un sueldo base permanente ($100.000) y se le descontaria la ganancia del sistema que equivale al 0.12 por ciento\n");
        dinero3 = (sueldo_mensual)*0.1;
        dinero3 = dinero3*mesestrabajado;
        dinero3 = dinero3 + 100000;
        dinero3 = dinero3 + (dinero3*0,0012);

        printf("El dinero que recibira es:%d\n", dinero3);
        printf("¿Desea obtener este sistema de pago?\n");
        printf("1.Si\n2.No\n");
        scanf("%d", &opcion);
        if (opcion == 2);
        {
        printf("Cuarto Sistema de Pensión de Retiro Programado\n");
        printf("Puede retirar todo su dinero, pero perderá 2 por ciento de su monto que será cobrado como impuesto\n");
        dinero4 = (sueldo_mensual)*0.02;
        dinero4 = dinero4*mesestrabajado;
        dinero4 = dinero4 + dinero4*3;
        
        printf("El valor que se agregara a su cuenta un total de:%d\n", dinero4);
        printf("¿Desea obtener este sistema de pago?\n");
        printf("1.Si\n2.No\n");
        scanf("%d", &opcion);
        if (opcion == 2);
        {
            printf("Una pena, no lo pudimos convencer de nuestros sistemas de pensiones, vuelva pronto.\n");
            return 0;
        }
        
        }
        }
        }

    printf("Gracias por elegir nuestros servicios\n");
    return 0;
    }