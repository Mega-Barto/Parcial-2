/*
    Jhoan Esteban Raigoza Agudelo
    Codigo: 1007753137                Universidad Tecnologica de pereira.
    Profesor: PhD Ricardo Moreno Laverde

*/

#include <stdio.h>

int ft_fibonacci(int);
int ft_fibonacci(int nb){
    int a = 0, b = 1, c = 0;
    if(nb < 0)
        return -1;
    for(int i = 0; i <= nb; i++){
        if(i == nb)
            return a;
        c = a + b;
        a = b;
        b = c;
    }
}

int main(){
    printf("%i",ft_fibonacci(4));
    return 0;
}