/*
    Jhoan Esteban Raigoza Agudelo
    Codigo: 1007753137                Universidad Tecnologica de pereira.
    Profesor: PhD Ricardo Moreno Laverde

*/


#include<stdio.h>

void ft_is_negative(int); // Inicializo la funcion.
void ft_is_negative(int numero){ // Declaro la funcion.
    if(numero >= 0)
        printf("P");
    else
        printf("N");
    
}

int main(){
    ft_is_negative(-3); //Llamo la funcion main.
    return 0;
}