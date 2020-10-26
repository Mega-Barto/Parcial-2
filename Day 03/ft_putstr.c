/*
    Jhoan Esteban Raigoza Agudelo
    Codigo: 1007753137                Universidad Tecnologica de pereira.
    Profesor: PhD Ricardo Moreno Laverde

*/
#include <stdio.h>

void ft_putstr(char *);
void ft_putstr(char *dato){
    int i = 0;
    while(dato[i] != '\0'){
        printf("%c", dato[i]);
        ++i;
    }
}

int main(){

    char *dato = "Pereira";
    ft_putstr(dato);

    return 0;

}