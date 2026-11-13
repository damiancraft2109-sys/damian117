#include <stdio.h>
#include <unistd.h> 
 
//conecta 4 en C
 
int tamanoTableroColumnas = 7;
int tamanoTableroFilas = 8;
 
char tablero[8][7];
int jugador = 1; // Alternar entre jugador 1 y jugador 2
 
void inicializarTablero(){
    for(int i = 0; i < tamanoTableroFilas; i++){
        for(int j = 0; j < tamanoTableroColumnas; j++){
            tablero[i][j] = ' ';
        }
    }
}
 
void mostrarTablero(){
    //Limpiar pantalla antes de mostrar para animacion
    printf("\e[1;1H\e[2J");
    
    for(int i = 0; i < tamanoTableroFilas; i++){
        for(int j = 0; j < tamanoTableroColumnas; j++){
            printf("|%c", tablero[i][j]);
        }
        printf("|\n");
    }
}
//poner fichas en el tablero de ambos jugadores
    // Jugador 1 = X
    // Jugador 2 = O
 
void ponerFicha(){
    int columna;
    char fichaActual = (jugador == 1) ? 'X' : '0';
    
    printf("jugador %d, ingrese la columna (0-6) para colocar su ficha", jugador);
    scanf("%d", &columna);
  
//Validar la columna ingresada 
 if(columna < 0 || columna >= tamanoTableroColumnas){
     printf("Columna invalida. Intente de nuevo:\n");
     return;
 }
 
// Buscar la fila destino (desde abajo hacia arriba)
 int filaDestino = - 1;
 for(int i = tamanoTableroFilas - 1; i >= 0; i--){
    if(tablero[i][columna] == ' '){ 
     filaDestino = i;
     break;
    }
 }
 
// Si la columna esta llena
 if(filaDestino == -1){
    printf("La columna esta llena! Intente en otra.\n");
    return;
}


for(int i = 0; i <= filaDestino; i++){
    //colocar temporalmente la ficha    
    tablero [i] [columna] = fichaActual;
    
    // mostrar tablero actualizado    
    mostrarTablero();
    
    // Pausa de 100 milisegundos (0.1 segundos)
    usleep(100000);
 
   //Si no hemos llegado al destino final, borramos la ficha para que parece que cae
   if(i < filaDestino) {
       tablero[i][columna] = ' ';
   }
 }
   
   
 
    
    int vereficarGanador(char ficha) {
    // 1. VerificarGanador HORIZONTAL (---)    
        for (int i = 0; i < tamanoTableroFilas; i++){
            for (int j = 0; j < tamanoTableroColumnas - 3; j++){
                if (tablero [i][j] == ficha &&
                    tablero [i][j + 1] == ficha &&
                    tablero [i][j + 2] == ficha &&
                    tablero [i][j + 3] == ficha) {
                    
                return 1;
            }
        }
    }
 
 //2. Vereficacion VERTICAL (|)
 
 for (int i = 0; i < tamanoTableroFilas - 3; i++) {
   for (int j = 0; i < tamanoTableroColumnas; j++){
       if (tablero[i][j] == ficha &&
       tablero[i + 1][j] == ficha &&
       tablero[i + 2][j] == ficha &&
       tablero[i + 3][j] == ficha) {
       return 1;
      }
     }  
   } 
   
// 3. Verificacion DIAGONAL DESCENDENTE (\)   
   for (int i = 0; i < tamanoTableroFilas - 3; i++){
    for (int j = 0; j < tamanoTableroColumnas - 3; j++){
      if (tablero [i][j] == ficha &&
          tablero [i + 1][j + 1] == ficha &&
          tablero [i + 1][j + 2] == ficha &&
          tablero [i + 1][j + 3] == ficha) { 
        return 1;
          }
      }
   }
 
int main(){
    // Inicializar el tablero y mostrarlo
    //prueba de codigo
    inicializarTablero();
    
    int turnosTotales = tamanoTableroFilas * tamanoTableroColumnas;
    int juegoTerminado = 0;
    // mostrar el tablero inicial limpio
    mostrarTablero();
    
    for(int i = 0; i < turnosTotales && !juegoTerminado; i++){
        ponerFicha();
        
        if (verificarGanador ('X')){
        printf("\n Gano el player 1\n");
        
        juegoTerminado = 1;
    }
    
    else if (verificarGanador('0')){
        printf("\n Gano el player 2\n");
    juegoTerminado = 1;
     }
    }
    
    if (!juegoTerminado){
        printf("\n Empataron wee\n");
        
    }
    
    
    
    
    mostrarTablero();
    for(int i = 0; i < 6; i++){
        ponerFicha();
        mostrarTablero();
    }
    
        
 
    return 0;
}

