#include <stdio.h>

char tablero[3][3];
 int  fila;
 int  columna;
 int  ganador = 0; 


//Funciones
void imprimirTablero();
int  verificarGanador_O();
int  verificarGanador_X();



 
int main(){

    printf("Bienvenido al juego del gato\n");

    int turnos = 0;  

     for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            tablero[i][j] = '-';
        }
    }   
    
    
    imprimirTablero();
 // Este while evalua desde el turno 1 hasta el 5, ya que, es el minimo para que un jugador gane
 while (turnos < 5)
 {
     
   // Turno jugador X
    printf ( "Turno del jugador X\n" );
    printf ( "Por favor haga la jugada de modo X,Y\n" ); 
    scanf  ("%i,%i", &fila, &columna );

    while  ( tablero [fila-1] [columna-1] != '-' ){
    printf ( "Esta casilla ya fue ocupada\n" );
    printf ( "Por favor haga la jugada de modo X,Y\n" ); 
    scanf  ("%i,%i",&fila,&columna ); }

    tablero [fila-1] [columna-1] = 'X';

    turnos = turnos + 1;

    imprimirTablero();
    // En el momento que turnos se igual a 5 es decir en la tercera vuelta, le tocara al jugador X entonces ahi se sale del while
    if( turnos == 5 ){

        break;
    }
     printf("Turno del jugador O\n");
    printf ("Por favor haga la jugada de modo fila, columna\n"); 
    scanf ("%d,%d",&fila,&columna);

    while(tablero [fila-1][columna-1]!='-'){
    printf ("Esta casilla ya esta ocupada\n");
    printf ("Por favor haga la jugada de modo fila, columna\n"); 
    scanf ("%d,%d",&fila,&columna);}

    tablero[fila-1][columna-1]='O';

    imprimirTablero();

    turnos = turnos + 1;
    
    }  
    
do { 
    verificarGanador_X();

    if( ganador == 1 ){

    printf("Felicidades jugador X, usted ha ganado.\n");
    break;

} else {
    
    printf("Turno del jugador O\n");
    printf ("Por favor haga la jugada de modo fila, columna:\n"); 
    scanf ("%d,%d",&fila,&columna);

    while(tablero [fila-1][columna-1]!='-'){
    printf ("Esta casilla ya esta ocupada\n");
    printf ("Por favor haga la jugada de modo fila, columna\n"); 
    scanf ("%d,%d",&fila,&columna);}

    tablero[fila-1][columna-1]='O';

    imprimirTablero();

    turnos = turnos + 1; 

     verificarGanador_O();

     if(ganador == 1){

         printf("Felicidades jugador O, usted ha ganado");
         break;

     }
     }
       // Turno jugador X
    printf ( "Turno del jugador X\n" );
    printf ( "Por favor haga la jugada de modo X,Y\n" ); 
    scanf  ("%i,%i",&fila,&columna );

    while  (tablero [fila-1] [columna-1] != '-'){
    printf ( "Esta casilla ya fue ocupada\n" );
    printf ( "Por favor haga la jugada de modo X,Y\n" ); 
    scanf  ("%i,%i",&fila,&columna );  }

    tablero [fila-1] [columna-1] ='X';

    turnos = turnos + 1;

    imprimirTablero();
    
    verificarGanador_X();

     if(ganador == 1 ){

    printf( "Felicidades el jugador X ha ganado\n" );
    break;

}
}while ( ganador == 0 && turnos < 9 );

 

 if(turnos == 9 && ganador == 0){

    printf( "Empate, hasta otra" );
    
 }

    return 0;
}  

//Implementaciones

// Imprime el tablero 
void imprimirTablero(){

    
    printf ("%c  |  %c  |  %c\n", tablero[0][0], tablero[0][1], tablero[0][2]);
    printf ("----------------\n");
    printf ("%c  |  %c  |  %c\n", tablero[1][0], tablero[1][1], tablero[1][2]);
    printf ("----------------\n");
    printf ("%c  |  %c  |  %c\n", tablero[2][0], tablero[2][1], tablero[2][2]);

}
// Verifica todas las posiciones de X para que si se repiten 3 en linea, retorna un  1
int  verificarGanador_X(){


    if (('X'== tablero[0][0]&& tablero[0][0]==tablero[0][1]&& tablero[0][1]==tablero[0][2])||
        ('X'== tablero[1][0]&& tablero[1][0]==tablero[1][1]&& tablero[1][1]==tablero[1][2])||
        ('X'== tablero[2][0]&& tablero[2][0]==tablero[2][1]&& tablero[2][1]==tablero[2][2])||
        ('X'== tablero[0][0]&& tablero[0][0]==tablero[1][0]&& tablero[1][0]==tablero[2][0])||
        ('X'== tablero[0][1]&& tablero[0][1]==tablero[1][1]&& tablero[1][1]==tablero[2][1])||
        ('X'== tablero[0][2]&& tablero[0][2]==tablero[1][2]&& tablero[1][2]==tablero[2][2])||
        ('X'== tablero[0][0]&& tablero[0][0]==tablero[1][1]&& tablero[1][1]==tablero[2][2])||
        ('X'== tablero[2][0]&& tablero[2][0]==tablero[1][1]&& tablero[1][1]==tablero[0][2])){


ganador = 1;
} else { ganador = 0; }

return ganador;
}
// Verifica todas las posiciones de O para que si se repiten 3 en linea, retorna un  1
int  verificarGanador_O(){

    if (('O'== tablero[0][0]&& tablero[0][0]==tablero[0][1]&& tablero[0][1]==tablero[0][2])||
        ('O'== tablero[1][0]&& tablero[1][0]==tablero[1][1]&& tablero[1][1]==tablero[1][2])||
        ('O'== tablero[2][0]&& tablero[2][0]==tablero[2][1]&& tablero[2][1]==tablero[2][2])||
        ('O'== tablero[0][0]&& tablero[0][0]==tablero[1][0]&& tablero[1][0]==tablero[2][0])||
        ('O'== tablero[0][1]&& tablero[0][1]==tablero[1][1]&& tablero[1][1]==tablero[2][1])||
        ('O'== tablero[0][2]&& tablero[0][2]==tablero[1][2]&& tablero[1][2]==tablero[2][2])||
        ('O'== tablero[0][0]&& tablero[0][0]==tablero[1][1]&& tablero[1][1]==tablero[2][2])||
        ('O'== tablero[2][0]&& tablero[2][0]==tablero[1][1]&& tablero[1][1]==tablero[0][2])){


ganador = 1;
} else { ganador = 0; }

return ganador;
}