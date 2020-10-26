/*
    Jhoan Esteban Raigoza Agudelo
    Codigo: 1007753137                Universidad Tecnologica de pereira.
    Profesor: PhD Ricardo Moreno Laverde

*/


#include<stdio.h>

void alphabet(int contador){
    if(contador < 26){
        printf("%c ", 97 + contador);
        alphabet(contador+1);
    }
}


void ft_printf_alphabet(void);
void ft_printf_alphabet(void){ // Declaro la funcion.
    alphabet(0);

}

int main(){

    ft_printf_alphabet(); //Llamo la funcion ft_printf_alphabet.
    return 0;

}
