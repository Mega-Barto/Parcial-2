/*
    Ing(C) Jhoan Esteban Raigoza Agudelo
    Codigo: 1007753137                Universidad Tecnologica de pereira.
    Profesor: PhD Ricardo Moreno Laverde

*/
#include <stdio.h>

int ft_eight_queens_puzzle(void);
int Mov_Queen(int [8][8], int, int);


int main(){
    printf("%i", ft_eight_queens_puzzle());
}

int ft_eight_queens_puzzle(void){
    int Tabla[8][8] = {{0,0,0,0,0,0,0,0},     // Matriz donde simulare el tablero de ajedrez 
                       {0,0,0,0,0,0,0,0},
                       {0,0,0,0,0,0,0,0},
                       {0,0,0,0,0,0,0,0},
                       {0,0,0,0,0,0,0,0},
                       {0,0,0,0,0,0,0,0},
                       {0,0,0,0,0,0,0,0},
                       {0,0,0,0,0,0,0,0}};
    int  contador = 0;

    for(int Col_0 = 0; Col_0 < 8; Col_0++){  //Bucle para la primera reina
        Tabla[Col_0][0] = 1; // Pongo la reina 1

        for(int Col_1 = 0; Col_1 < 8; Col_1++){ // Bucle para la segunda reina
            if(Mov_Queen(Tabla, Col_1, 1) == 0){
               Tabla[Col_1][1] = 1; // Pongo la reina 2

               for (int Col_2 = 0; Col_2 < 8; Col_2++){ // Bucle para la tercera reina
                   if(Mov_Queen(Tabla, Col_2, 2) == 0){
                        Tabla[Col_2][2] = 1; // Pongo la reina 3

                        for (int Col_3 = 0; Col_3 < 8; Col_3++){ // Bucle para la cuarta reina
                            if(Mov_Queen(Tabla, Col_3, 3) == 0){
                                Tabla[Col_3][3] = 1; // Pongo la reina 4

                                for (int Col_4 = 0; Col_4 < 8; Col_4++){  //Bucle para la quinta reina
                                    if(Mov_Queen(Tabla, Col_4, 4) == 0){
                                        Tabla[Col_4][4] = 1; // Pongo la reina 5

                                        for (int Col_5 = 0; Col_5 < 8; Col_5++){ // Bucle para la sexta reina
                                            if(Mov_Queen(Tabla, Col_5, 5) == 0){
                                                Tabla[Col_5][5] = 1; // Pongo la reina 6

                                                for (int Col_6 = 0; Col_6 < 8; Col_6++){ // Bucle para la septima reina
                                                    if(Mov_Queen(Tabla, Col_6, 6) == 0){
                                                        Tabla[Col_6][6] = 1; // Pongo la reina 7

                                                        for (int Col_7 = 0; Col_7 < 8; Col_7++) //Bucle para la octava reina
                                                        {
                                                            if(Mov_Queen(Tabla, Col_7, 7) == 0){
                                                                Tabla[Col_7][7] = 1; // Pongo la reina 8
                                                                contador++;
                                                            }
                                                            Tabla[Col_7][7] = 0;  
                                                        }
                                                    }
                                                    Tabla[Col_6][6] = 0;
                                                }
                                            }
                                            Tabla[Col_5][5] = 0;
                                        }  
                                    } 
                                    Tabla[Col_4][4] = 0;
                                }
                            }
                            Tabla[Col_3][3] = 0;
                        }
                    }
                    Tabla[Col_2][2] = 0; 
                }
            }
            Tabla[Col_1][1] = 0;
        }
        Tabla[Col_0][0] = 0;
    }
    return contador; // Retorno el numero de posibilidades 
}


int Mov_Queen(int Tabla[8][8], int fila, int columna){   //Esta funcion sirve para verificar si se puede poner una reina.
                                                         // Retornara 0 si se puede poner, retorna 1 si no se puede poner.
    int fila_actual = 0; // Una variable intermedia para no modificar fila
    int columna_actual = 0; // Intermedia para no modificar Columna
    int estado = 0; // Un estado, donde guardare la conclusion y la retorno al final
    
    for(int i = columna + 1; i < 8; i++) // Comprobar a la Derecha.
        if(Tabla[fila][i] == 1)
            estado = 1;
    
    for(int i = columna - 1; i >= 0; i--) // Comprobar izquierda
       if(Tabla[fila][i] == 1)
            estado = 1; 

    for(int i = fila - 1; i >= 0; i--) // Comprobar arriba
       if(Tabla[i][columna] == 1)
            estado = 1; 

    for(int i = fila + 1; i < 8; i++) // Comprobar abajo
       if(Tabla[i][columna] == 1)
            estado = 1;

    fila_actual = fila - 1;
    columna_actual = columna + 1;
    while(columna_actual < 8 && fila_actual >= 0){    // Diagonal arriba derecha
        if(Tabla[fila_actual][columna_actual] == 1)
            estado = 1;
        fila_actual--;
        columna_actual++;
    }

    fila_actual = fila - 1;
    columna_actual = columna - 1;
    while(columna_actual >= 0 && fila_actual >= 0){    // Diagonal arriba izquierda
        if(Tabla[fila_actual][columna_actual] == 1)
            estado = 1;
        fila_actual--;
        columna_actual--;
    }

    fila_actual = fila + 1;
    columna_actual = columna - 1;
    while(columna_actual >= 0 && fila_actual < 8){    // Diagonal abajo izquierda
        if(Tabla[fila_actual][columna_actual] == 1)
            estado = 1;
        fila_actual++;
        columna_actual--;
    }

    fila_actual = fila + 1;
    columna_actual = columna + 1;
    while(columna_actual < 8 && fila_actual < 8){    // Diagonal abajo derecha
        if(Tabla[fila_actual][columna_actual] == 1)
            estado = 1;
        fila_actual++;
        columna_actual++;
    }
    return estado;
}