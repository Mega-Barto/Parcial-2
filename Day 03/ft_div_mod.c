/*
    Jhoan Esteban Raigoza Agudelo
    Codigo: 1007753137                Universidad Tecnologica de pereira.
    Profesor: PhD Ricardo Moreno Laverde

*/
#include <stdio.h>

void ft_div_mod(int, int, int*, int*);
void ft_div_mod(int a, int b, int *div, int *mod){
    *div = (a / b);
    *mod = (a % b);
}

int main(){
    int resultado = 0;
    int modulo = 0;

    ft_div_mod(433,4,&resultado, &modulo);
    printf("%i\n", resultado);
    printf("%i", modulo);
    return 0;
}