/*
    Jhoan Esteban Raigoza Agudelo
    Codigo: 1007753137                Universidad Tecnologica de pereira.
    Profesor: PhD Ricardo Moreno Laverde

*/

#include <stdio.h>

void ft_div_mod(int *, int *); // Prototipo de la funcion 

void ft_div_mod(int *a, int *b){ // Inicializo la funcion
    int int_a = *a;   // Intermedio de a
    int int_b = *b;   // Intermedio de b
    *a = int_a / int_b;
    *b = int_a % int_b;
}

int main(){

    int a = 25;  
    int b = 5;
    ft_div_mod(&a,&b);
    printf("%i\n", a);
    printf("%i", b);
    return 0;
}