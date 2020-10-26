/*
    Jhoan Esteban Raigoza Agudelo
    Codigo: 1007753137                Universidad Tecnologica de pereira.
    Profesor: PhD Ricardo Moreno Laverde

*/
#include <stdio.h>

int ft_sqrt(int);
int ft_sqrt(int nb){
    for(int i = 1; i <= nb ; i ++){
        if(i*i == nb){
            return i;
        }
    }
    return 0;
}

int main(){
    printf("%i", ft_sqrt(0));
    return 0;
}