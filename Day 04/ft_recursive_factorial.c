/*
    Jhoan Esteban Raigoza Agudelo
    Codigo: 1007753137                Universidad Tecnologica de pereira.
    Profesor: PhD Ricardo Moreno Laverde

*/
#include <stdio.h>

int ft_recursive_factorial(int);
int ft_recursive_factorial(int nb){
    if(nb < 0)
        return 0;
    else if(nb == 0)
        return 1;  // Hago el Ciclo hasta que esto sea verdad.
    else
        return nb * ft_recursive_factorial(nb - 1); // Me devuelvo haciendo las multiplicaciones
}

int main(){
    int a = 8; //Variable que utilizare
    printf("%i",ft_recursive_factorial(a)); // Llamo a la funcion
    return 0;
}