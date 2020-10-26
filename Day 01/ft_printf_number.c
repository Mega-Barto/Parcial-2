/*
    Jhoan Esteban Raigoza Agudelo
    Codigo: 1007753137                Universidad Tecnologica de pereira.
    Profesor: PhD Ricardo Moreno Laverde

*/


#include<stdio.h>

void ft_printf_number(); // Inicializo la funcion.
void ft_printf_number(){ // Declaro la funcion.
    for(int i = 0; i <= 9; i++){
        printf("%i ",i);
    }
}

int main(){
    ft_printf_number(); //Llamo la funcion main.
    return 0;
}