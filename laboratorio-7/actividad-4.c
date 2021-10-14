#include <stdio.h>

int main(){

    int numero = 0;
    
    printf("Ingrese un número entero porfavor:\n");
    scanf("%i", &numero);
    for(int i = 2 ; i <= numero ; i++){
        int divisores = 0;
        for(int j = 2 ; j < i ; j++){
            
            int resto = i%j;
        
            if(resto == 0){
                divisores++;
            } else {
            }
        }
        if(divisores == 0){
            printf("EL %i ES PRIMO!\n", i);
        } else {
            printf("EL %i NO ES PRIMO!\n", i);
        }
    }
    return 0;
}