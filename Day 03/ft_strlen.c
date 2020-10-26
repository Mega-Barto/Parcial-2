/*
    Jhoan Esteban Raigoza Agudelo
    Codigo: 1007753137                Universidad Tecnologica de pereira.
    Profesor: PhD Ricardo Moreno Laverde

*/

#include <stdio.h>

int ft_strlen(char *);

int ft_strlen(char *dato){
    int i = 0;
    while(dato[i] != '\0')++i;
    return i;
}

int main(){
    char *dato = "Pereira";
    int longitud = 0;
    longitud = ft_strlen(dato);
    printf("%i", longitud);
    return 0;

}