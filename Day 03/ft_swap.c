/*
    Jhoan Esteban Raigoza Agudelo
    Codigo: 1007753137                Universidad Tecnologica de pereira.
    Profesor: PhD Ricardo Moreno Laverde

*/
#include <stdio.h>

void ft_swap(int *a, int *b); // Declaro la funcion ft_swap recibe dos parametros de tipo puntero
void ft_swap(int *a, int *b){  // inicializo la funcion 
    int inter = *b;  // Sera una variable intermedia 
    *b = *a;
    *a = inter;
}

int main(){
    int a = 60;
    int b = 578;
    ft_swap(&a,&b);
    return 0;
}