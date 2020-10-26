/*
    Jhoan Esteban Raigoza Agudelo
    Codigo: 1007753137                Universidad Tecnologica de pereira.
    Profesor: PhD Ricardo Moreno Laverde

*/

#include <stdio.h>

int ft_iterative_power(int, int);
int ft_iterative_power(int nb, int power){
    int i = 1;
    int resultado = 1;
    if(power > 0)
        for(i = 1;i <= power;i++) resultado *= nb;
    else
        resultado = 0;
    return resultado;
}

int main(){
    printf("%i",ft_iterative_power(3,1));
    return 0;
}
