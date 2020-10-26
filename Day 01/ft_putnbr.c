/*
    Jhoan Esteban Raigoza Agudelo
    Codigo: 1007753137                Universidad Tecnologica de pereira.
    Profesor: PhD Ricardo Moreno Laverde

*/
#include <stdio.h>

void ft_putnbr(int );
void ft_putnbr(int numero){
    int negativo = 0;

    if(numero < 0){
        numero = numero*(-1);
        negativo = 1;
    }
    else
        negativo = 0;
    
    int longitud_N = 0; // Longitud de la cadena
    for(int  i = numero; i > 0; i= i/10){
        ++longitud_N; // Longitud del numero??
    }

    if(negativo)
        longitud_N++;

    char string_intermedio[11] = " "; //Defino una variable de tipo "string" con el numero de elementos del tamaño del numero. 

    for(int i = numero; i > 0; i = i/10){ // Lleno el string.
        string_intermedio[longitud_N-1] = (i%10)+48;
        --longitud_N;
    }
    if(negativo)
        string_intermedio[0] = '-';


    printf("%s", string_intermedio); //Imprimo al final una variable de tipo string.
}

int main()
{
    ft_putnbr(-204);
    return 0;
}