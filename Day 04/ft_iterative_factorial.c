/*
    Jhoan Esteban Raigoza Agudelo
    Codigo: 1007753137                Universidad Tecnologica de pereira.
    Profesor: PhD Ricardo Moreno Laverde

*/
#include <stdio.h>

int ft_iterative_factorial(int nb);
int ft_iterative_factorial(int nb){
    int i = 1;  //Sera la variable donde guardaremos el resultado
    if(nb >= 0)
        for(i = 1; nb > 0; nb--) i = i * nb;  // Calculo el Factorial con un For.
    else
        i = 0;  // Si no es valido el resultado debe ser 0.
    
    return i;
}

int main(){
    int a = 0; // Variable a utilizar
    printf("%i  ",ft_iterative_factorial(a));
    return 0;
}
