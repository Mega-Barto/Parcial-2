/*
    Jhoan Esteban Raigoza Agudelo
    Codigo: 1007753137                Universidad Tecnologica de pereira.
    Profesor: PhD Ricardo Moreno Laverde

*/
#include <stdio.h>

int ft_is_prime(int);
int ft_is_prime(int nb){
    int estado = 1; // Estado sera la variable de apoyo para definir si es primo o no
    if(nb == 1 || nb == 0)
        estado = 0;
    else
        for(int i = 2; i < nb; i++)
            if(nb%i == 0)
                estado = 0;

    return estado;
}


int main(){

    printf("%i", ft_is_prime(59)); // Imprimo lo que retorne la funcion ft_is_prime
    return 0;

}