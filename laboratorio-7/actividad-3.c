#include <stdio.h>
int main(){

 int numero, i;
   printf("Ingrese el numero que desea evaluar\n");
   scanf("%d",&numero);
   printf("Los divisores de %d son\n",numero);
      for(int i = 1; i<= numero ; i ++) 
       { if (numero % i == 0)
       { printf("%d\n", i);}
       }
    return 0;
}