/*
    Jhoan Esteban Raigoza Agudelo
    Codigo: 1007753137                Universidad Tecnologica de pereira.
    Profesor: PhD Ricardo Moreno Laverde

*/

#include <stdio.h>

int ft_recursive_power(int, int);
int ft_recursive_power(int nb, int power){
    if(power < 0)
        return 0;
    else if(power == 1)
        return nb;
    else
        return nb * ft_recursive_power(nb, power - 1);
}

int main(){
    printf("%i",ft_recursive_power(3,4));
    return 0;
}
