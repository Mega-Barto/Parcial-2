/*
    Jhoan Esteban Raigoza Agudelo
    Codigo: 1007753137                Universidad Tecnologica de pereira.
    Profesor: PhD Ricardo Moreno Laverde

*/


#include<stdio.h>

void numbers(int contador){
    if(contador <= 9){
        printf("%i ", contador);
        numbers(contador+1);
    }
}

void ft_printf_numbers(void);
void ft_printf_numbers(void){ // Declaro la funcion.
    numbers(0);

}

int main(){

    ft_printf_numbers(); //Llamo la funcion ft_printf_numbers.
    return 0;

}