/*
    Jhoan Esteban Raigoza Agudelo
    Codigo: 1007753137                Universidad Tecnologica de pereira.
    Profesor: PhD Ricardo Moreno Laverde

*/


#include<stdio.h>

void ft_printf_alphabet(); // Inicializo la funcion.
void ft_printf_alphabet(){ // Declaro la funcion.
    for(int i = 97; i <= 122; i++){
        printf("%c ", i);
        if(i == 110)
            printf("%c ", 164);
    }
}

int main(){

    ft_printf_alphabet(); //Llamo la funcion main.
    return 0;

}
