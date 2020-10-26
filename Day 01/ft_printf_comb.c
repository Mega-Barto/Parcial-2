/*
    Jhoan Esteban Raigoza Agudelo
    Codigo: 1007753137                Universidad Tecnologica de pereira.
    Profesor: PhD Ricardo Moreno Laverde

*/

#include<stdio.h>

void ft_print_comb(); // Inicializo la funcion.

void ft_print_comb(){
    int datos[10] = {0,1,2,3,4,5,6,7,8,9};
    for(int i = 0; i <= 7; i++){
        for(int j = 1; j <= 8;j++){
            for(int k = 2; k <= 9; k++){
                if(datos[i] != datos[j] && datos[i] != datos[k] && datos[j] != datos[k]){
                    if(datos[i] < datos[j] && datos[i] < datos[k] && datos[j] < datos[k]){
                        printf("%i%i%i  ", datos[i], datos[j], datos[k]);
                    }               
                }                              
            }
        }
    }
}

int main(){
    ft_print_comb(); //Llamo la funcion main.
    return 0;
}